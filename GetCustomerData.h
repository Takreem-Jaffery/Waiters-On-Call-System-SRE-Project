#pragma once
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>

namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for GetCustomerData
	/// </summary>
	public ref class GetCustomerData : public System::Windows::Forms::Form
	{
	public:
		ToolTip^ errorToolTip = gcnew ToolTip();
		String^ CustomerDataToStore;
		List<String^>^ OrderDataToStore;
		//NEED AN INTEGER PASSED FROM HOMEPAGE OR MAIN OR SOMETHING THAT HAS THE LAST COUNTED CUSTOMERS INDEX
		//OR A FUNCTION HERE THAT READS FROM FILE AND FINDS THAT
		int index;
		//ALSO NEED TO PASS DATE TO THIS FORM
		//ree: hear ye! a date shall be added
		String^ date;
		String^ day;
		int totalPrice;
		int tax;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbNavigation;
	public:
		int servicefee;
		GetCustomerData(List<String^>^ OrderDataToStoreInFile, List<int>^ orderprices, int totalprice, String^ date, String^ day)
		{
			InitializeComponent();
			this->date = date;
			this->day = day;
			index = 1;
			OrderDataToStore = OrderDataToStoreInFile;
			totalPrice = totalprice;
			tax = 0.1 * totalPrice;
			servicefee = 500;
			//setting it myself in this case
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GetCustomerData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ Addresstb;
	private: System::Windows::Forms::TextBox^ PhonenNotb;
	private: System::Windows::Forms::TextBox^ Nametb;

	private: System::Windows::Forms::Button^ Cancelbtn;
	private: System::Windows::Forms::Button^ Enterbtn;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Addresstb = (gcnew System::Windows::Forms::TextBox());
			this->PhonenNotb = (gcnew System::Windows::Forms::TextBox());
			this->Nametb = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Cancelbtn = (gcnew System::Windows::Forms::Button());
			this->Enterbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(89, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name*";
			this->label1->Click += gcnew System::EventHandler(this, &GetCustomerData::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Phone Number*";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(68, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Address*";
			// 
			// Addresstb
			// 
			this->Addresstb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Addresstb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addresstb->Location = System::Drawing::Point(180, 190);
			this->Addresstb->Name = L"Addresstb";
			this->Addresstb->Size = System::Drawing::Size(724, 30);
			this->Addresstb->TabIndex = 5;
			// 
			// PhonenNotb
			// 
			this->PhonenNotb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->PhonenNotb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PhonenNotb->Location = System::Drawing::Point(180, 152);
			this->PhonenNotb->Name = L"PhonenNotb";
			this->PhonenNotb->Size = System::Drawing::Size(724, 30);
			this->PhonenNotb->TabIndex = 4;
			this->PhonenNotb->TextChanged += gcnew System::EventHandler(this, &GetCustomerData::PhonenNotb_TextChanged);
			this->PhonenNotb->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &GetCustomerData::PhonenNotb_Validating);
			// 
			// Nametb
			// 
			this->Nametb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Nametb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nametb->Location = System::Drawing::Point(180, 113);
			this->Nametb->Name = L"Nametb";
			this->Nametb->Size = System::Drawing::Size(724, 30);
			this->Nametb->TabIndex = 3;
			this->Nametb->TextChanged += gcnew System::EventHandler(this, &GetCustomerData::Nametb_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(784, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"*are required fields";
			// 
			// Cancelbtn
			// 
			this->Cancelbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Cancelbtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->Cancelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancelbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelbtn->Location = System::Drawing::Point(12, 466);
			this->Cancelbtn->Name = L"Cancelbtn";
			this->Cancelbtn->Size = System::Drawing::Size(196, 97);
			this->Cancelbtn->TabIndex = 6;
			this->Cancelbtn->Text = L"Cancel";
			this->Cancelbtn->UseVisualStyleBackColor = false;
			this->Cancelbtn->Click += gcnew System::EventHandler(this, &GetCustomerData::Cancelbtn_Click);
			// 
			// Enterbtn
			// 
			this->Enterbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Enterbtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->Enterbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Enterbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enterbtn->Location = System::Drawing::Point(734, 466);
			this->Enterbtn->Name = L"Enterbtn";
			this->Enterbtn->Size = System::Drawing::Size(196, 97);
			this->Enterbtn->TabIndex = 7;
			this->Enterbtn->Text = L"Enter";
			this->Enterbtn->UseVisualStyleBackColor = false;
			this->Enterbtn->Click += gcnew System::EventHandler(this, &GetCustomerData::Enterbtn_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->PhonenNotb);
			this->panel1->Controls->Add(this->Nametb);
			this->panel1->Controls->Add(this->Addresstb);
			this->panel1->Location = System::Drawing::Point(12, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(919, 369);
			this->panel1->TabIndex = 8;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GetCustomerData::panel1_Paint);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(713, 32);
			this->lbNavigation->TabIndex = 15;
			this->lbNavigation->Text = L"Home Page  |  Record Order > Customer Information";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbNavigation->Click += gcnew System::EventHandler(this, &GetCustomerData::lbNavigation_Click);
			// 
			// GetCustomerData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(942, 575);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Enterbtn);
			this->Controls->Add(this->Cancelbtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GetCustomerData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GetCustomerData";
			this->Load += gcnew System::EventHandler(this, &GetCustomerData::GetCustomerData_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Nametb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Enterbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Nametb->Text == "" || PhonenNotb->Text == "" || Addresstb->Text == "") {
			MessageBox::Show("Please enter all information before submitting", "Information Missing", MessageBoxButtons::OK);
			return;
		}
		else
		{
			CustomerDataToStore = index + "#" + Nametb->Text + "#" + PhonenNotb->Text + "#" + Addresstb->Text;
			String^ date = "Orders/" + this->day + "_" + this->date + ".txt";
			try
			{
				// Open the file for writing using StreamWriter
				StreamWriter^ writer = gcnew StreamWriter(date, true); // true for appending
				StreamReader^ read = gcnew StreamReader("Drivers/Drivers.txt");
		
				String^ driverAvailable;
				bool found = 0;
				String^ l;
				while (!read->EndOfStream && found == 0) {
					l = read->ReadLine();
					if (l == "FREE") {
						driverAvailable = read->ReadLine();
						found = 1;
					}

				}
				//l = read->ReadLine();
				if (found == 0) {
					MessageBox::Show("No Driver Available, Unable to record order.");
					read->Close();
					writer->Close();
					this->Close();
				}
				else {
					// Write the content of the TextBox to the file
					writer->Write("in-process\n");
					writer->Write(CustomerDataToStore);
					writer->Write("\n");
					for each (String ^ order in OrderDataToStore)
					{
						writer->WriteLine(order);
						//writer->Write("\n");
					}
					writer->WriteLine("price#" + totalPrice + "#" + tax + "#" + servicefee + "#" + (totalPrice + tax + servicefee));
					read->Close();
					writer->Write(driverAvailable);
					writer->Write("\n");
					writer->Write("\n");
					writer->Close();

					MessageBox::Show("File saved successfully.");
					this->Close();
				}

				WriteDriver("Drivers/Drivers.txt", driverAvailable);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error saving file: " + ex->Message);
			}


		}
	}
		   String^ getfilename(const char* file)
		   {
			   std::string temp = "";
			   for (int i = 0; file[i] != '\0'; i++)
			   {
				   if (file[i] == '.' && file[i + 1] == 't')\
				   {
					   temp += "(1).txt";
					   break;
				   }
				   else
					   temp += file[i];
			   }
			   String^ temp2 = msclr::interop::marshal_as<String^>(temp);
			   return temp2;
		   }
		   void WriteDriver(String^ filesname, String^ driverLine) {
			   try {
				   bool flag = false;
				   msclr::interop::marshal_context context;
				   const char* file = context.marshal_as<const char*>(filesname);
				   //std::string outfile = getfilename2(file);
				   FILE* filename = fopen(file, "r");
				   std::ifstream fileInput(filename);
				   // std::ofstream fileoutput(outfile, std::ios::out)
				   std::string line;
				   std::string status;
				   //std::string id;
				   std::string name;
				   std::string cnic;
				   //std::string address;
				   std::string remline;
				   std::string temp = "";

				   String^ filePath = getfilename(file);
				   StreamWriter^ writer = gcnew StreamWriter(filePath);
				   String^ temp2;

				   while (std::getline(fileInput, line)) {
					   // Read customer details
					   if (line != "")
					   {
						   status = line;
						   // std::getline(fileInput, id, '#');
						   std::getline(fileInput, name, '#');
						   std::getline(fileInput, cnic, '#');
						   std::getline(fileInput, remline, '\n');
						   std::string driverdata = name + "#" + cnic + "#" + remline;
						   String^ tempTJ = msclr::interop::marshal_as<String^>(driverdata);
						   String^ cnicc = msclr::interop::marshal_as<String^>(cnic);
						   // Check if the contact number matches
						   if (status == "FREE" && tempTJ == driverLine) {
							   flag = true;
							   temp += "BUSY";
							   temp += '\n';
							   temp += name;
							   temp += '#';
							   temp += cnic;
							   temp += '#';
							   temp += remline;
							   //temp += '\n';
							   // temp += '\n';
						   }
						   else
						   {
							   temp += status;
							   temp += '\n';
							   temp += name;
							   temp += '#';
							   temp += cnic;
							   temp += '#';
							   temp += remline;
							//   temp += '\n';
							   // temp += '\n';
						   }
						   temp2 = msclr::interop::marshal_as<String^>(temp);
						   writer->WriteLine(temp2);
						   temp = "";
						   remline = "";
					   }
				   }
				   fileInput.close();
				   writer->Close();
				   String^ old = msclr::interop::marshal_as<String^>(file);
				   File::Delete(old);
				   File::Copy(filePath, old);
				   File::Delete(filePath);
				   if (flag)
				   {
					   /*  MessageBox::Show("Driver marked present!", "Successful", MessageBoxButtons::OK,
							 MessageBoxIcon::Information);*/
				   }
				   else
				   {/*
					   MessageBox::Show("Driver not found!", "Error", MessageBoxButtons::OK,
						   MessageBoxIcon::Error);*/
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	private: System::Void GetCustomerData_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PhonenNotb_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void PhonenNotb_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		/*String^ priceString = PhonenNotb->Text;
		std::string priceText = msclr::interop::marshal_as<std::string>(priceString);
		double priceValue = std::stod(priceText);*/

		String^ contact = PhonenNotb->Text;
		std::string contactText = msclr::interop::marshal_as<std::string>(contact);
		
		// Validate if the input contains only numbers
		for (int i = 0; i < contact->Length; i++) {
			if (!Char::IsDigit(contact[i])) {
				e->Cancel = true;  // Cancel the event to keep focus on the control
				PhonenNotb->Text = "";
				errorToolTip->Show("Phone Number can only be numerical", PhonenNotb);
				errorToolTip->AutoPopDelay = 1000;
				PhonenNotb->Focus();
				return;
			}
		}
		if (!contact->StartsWith("0"))
		{
			//MessageBox::Show("Contact number should start with 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			PhonenNotb->Text = "";
			errorToolTip->Show("Phone number should start with 0", PhonenNotb);
			errorToolTip->AutoPopDelay = 1000;
			PhonenNotb->Focus();
			return;
		}
		if (contact->Length != 11)
		{
			//MessageBox::Show("Contact number should only have 11 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			PhonenNotb->Text = "";
			errorToolTip->Show("Phone Number should only have 11 digits", PhonenNotb);
			errorToolTip->AutoPopDelay = 1000;
			PhonenNotb->Focus();
			return;
		}

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void lbNavigation_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
