#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include<Windows.h>
#include <msclr\marshal_cppstd.h>

namespace WaitersOnCall {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;


	/// <summary>
	/// Summary for UpdateOrderStatus
	/// </summary>
	public ref class UpdateOrderStatus : public System::Windows::Forms::Form
	{
	public:
		String^ date;
	private: System::Windows::Forms::Label^ lbNavigation;
	public:
		String^ day;
		UpdateOrderStatus(String^ date, String^ day)
		{
			InitializeComponent();
			this->date = date;
			this->day = day;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateOrderStatus()
		{
			if (components)
			{
				delete components;
			}
		}
	private:String^ statustype = "";

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Customer Contact No. :";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(264, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(608, 86);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 97);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Find Order";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateOrderStatus::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(12, 203);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(794, 154);
			this->textBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(608, 498);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 97);
			this->button2->TabIndex = 5;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UpdateOrderStatus::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 498);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 97);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UpdateOrderStatus::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(608, 367);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 97);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Mark as \'Completed\'";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &UpdateOrderStatus::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(394, 367);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(196, 97);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Mark as \'Cooking\'";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &UpdateOrderStatus::button5_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 14;
			this->lbNavigation->Text = L"Home Page  |  Update Orders > Update Order Status";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// UpdateOrderStatus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(816, 607);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpdateOrderStatus";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UpdateOrderStatus";
			this->Load += gcnew System::EventHandler(this, &UpdateOrderStatus::UpdateOrderStatus_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//completed
		if (statustype == "i")
		{
			MessageBox::Show("Current status: In-Process\nStatus first needs to be set to 'Cooking'", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else if (statustype == "d")
		{
			MessageBox::Show("Current status: Delivered\nStatus update no longer possible", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else if (textBox2->Text != "No Order Found!" && textBox2->Text != " ")
		{
			// ree goes here
			String^ datefile = this->day + "_" + this->date;
			String^ driver = "";
			String^ contactno = textBox1->Text;
			String^ filePathRead = "Orders/" + datefile + ".txt";
			String^ filePathWrite = "Orders/" + datefile + "(1).txt";
			if (File::Exists(filePathRead)) {
				StreamReader^ reader = gcnew StreamReader(filePathRead);
				StreamWriter^ writer = gcnew StreamWriter(filePathWrite, true); // true for appending

				while (!reader->EndOfStream) {

					String^ line = reader->ReadLine();
					if (line == "Cooking") {

						String^ customer = reader->ReadLine();
						array<String^>^ parts = customer->Split('#'); // customer info

						if (contactno == parts[2]) {	//found customer
							writer->WriteLine("Delivered");
							writer->WriteLine(customer);

							String^ order = reader->ReadLine();
							while (!order->Contains("price")) {	// copy order until price found
								writer->WriteLine(order);
								order = reader->ReadLine();
							}
							// order contains price
							writer->WriteLine(order);
							driver = reader->ReadLine(); // get driver info
							writer->WriteLine(driver);
							// let the rest continue as it is
						}
						else {
							writer->WriteLine(line);
							writer->WriteLine(customer);
						}
					}
					else {
						writer->WriteLine(line);
					}
				}
				reader->Close();
				writer->Close();
				File::Delete(filePathRead);
				File::Move(filePathWrite, filePathRead); // order was successfully delivered -- now update driver to FREE


				array<String^>^ matchDriverfromOrder = driver->Split('#'); //matchDriverfromOrder[1] contains CNIC
				filePathRead = "Drivers/Drivers.txt";
				filePathWrite = "Drivers/Drivers(1).txt";
				if (File::Exists(filePathRead)) {
					reader = gcnew StreamReader(filePathRead);
					writer = gcnew StreamWriter(filePathWrite, true); // true for appending

					while (!reader->EndOfStream) {

						String^ status = reader->ReadLine();
						String^ line = reader->ReadLine();
						array<String^>^ driverparts = line->Split('#');

						if (matchDriverfromOrder[1] == driverparts[1]) {
							// driver to update found -> append STATUS to (1) file
							writer->WriteLine("FREE");
							writer->WriteLine(line);
						}
						else {
							writer->WriteLine(status);
							writer->WriteLine(line);
						}

					}
					reader->Close();
					writer->Close();
					File::Delete(filePathRead);
					File::Move(filePathWrite, filePathRead);
				}

				MessageBox::Show("Order is successfully delivered.",
					"Success Message", MessageBoxButtons::OK);
			}

			//ree ends here
		}
		else
		{
			MessageBox::Show("Invalid operation, no order found!", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
		   std::string convertstring(std::string s)
		   {
			   std::string temp = "";
			   for (int i = 0; s[i] != '\0'; i++)
			   {
				   if (s[i] != ' ')
				   {
					   temp += s[i];
				   }
			   }
			   return temp;
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

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//find order
		if (textBox1->Text == "")
		{
			MessageBox::Show("Enter a valid contact number!", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else
		{
			//find order button
			//what happens when u click find order button
			//read file and find order and then cout it
			String^ datefile = "Orders/" + this->day + "_" + this->date + ".txt";
			marshal_context context;
			const char* file = context.marshal_as<const char*>(datefile);
			//const char* file = "25-11-2023.txt";
			FILE* filename = fopen(file, "r");
			ReadAndDisplayOrder(textBox1->Text, filename);
		}
	}
		   void ReadAndDisplayOrder(String^ contactNumber, FILE* filename) {
			   try {
				   bool flag = false;
				   std::ifstream fileInput(filename);
				   std::string line;
				   std::string status;
				   std::string id;
				   std::string name;
				   std::string contactt;
				   std::string remline;
				   std::string temp = "";

				   while (std::getline(fileInput, line)) {
					   if (line == "in-process" || line == "Cooking") {
						   // Read customer details
						   status = line;
						   std::getline(fileInput, id, '#');
						   std::getline(fileInput, name, '#');
						   std::getline(fileInput, contactt, '#');
						   while (std::getline(fileInput, line) && line != "") {

							   remline += line;
							   remline += " "; //" "
						   }
						   String^ contact = msclr::interop::marshal_as<String^>(contactt);
						   // Check if the contact number matches
						   if (contact == contactNumber) {
							   if (status == "in-process")
								   statustype = "i";
							   else if (status == "Cooking")
								   statustype = "c";
							   flag = true;
							   // Display order details
							   for (int i = 0; remline[i] != '\0'; i++)
							   {
								   if (remline[i] == '#')
								   {
									   temp += " ";
								   }
								   else
								   {
									   temp += remline[i];
								   }
							   }
							   remline = temp;
							   status += " ";
							   id += " ";
							   name += " ";
							   contact += " ";
							   String^ statuss = msclr::interop::marshal_as<String^>(status);
							   String^ remdata = msclr::interop::marshal_as<String^>(remline);
							   String^ id2 = msclr::interop::marshal_as<String^>(id);
							   String^ name2 = msclr::interop::marshal_as<String^>(name);
							   textBox2->AppendText(statuss);
							   textBox2->AppendText(System::Environment::NewLine);
							   textBox2->AppendText(id2);
							   textBox2->AppendText(name2);
							   textBox2->AppendText(contact);
							   textBox2->AppendText(System::Environment::NewLine);
							   textBox2->AppendText(remdata);
							   textBox2->AppendText(System::Environment::NewLine);
							   break;
						   }
						   remline = "";
					   }
				   }

				   fileInput.close();
				   if (!flag)
				   {
					   String^ output = "No Order Found!";
					   textBox2->AppendText(output);
					   textBox2->AppendText(System::Environment::NewLine);
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//cooking
		if (statustype == "c")
		{
			MessageBox::Show("Current status: Cooking\nStatus already set to 'Cooking'", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else if (statustype == "d")
		{
			MessageBox::Show("Current status: Delivered\nStatus update no longer possible", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else if (textBox2->Text != "No Order Found!" && textBox2->Text != " ")
		{
			//const char* file = "25-11-2023.txt";
			String^ datefile = "Orders/" + this->day + "_" + this->date + ".txt";
			marshal_context context;
			const char* file = context.marshal_as<const char*>(datefile);
			WriteOrder2(textBox1->Text, file);
		}
		else
		{
			MessageBox::Show("Invalid operation, no order found!", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
		   void WriteOrder2(String^ contactNumber, const char* file)
		   {
			   try {
				   //std::string outfile = getfilename2(file);
				   FILE* filename = fopen(file, "r");
				   std::ifstream fileInput(filename);
				   // std::ofstream fileoutput(outfile, std::ios::out)
				   std::string line;
				   std::string status;
				   std::string id;
				   std::string name;
				   std::string contactt;
				   std::string address;
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
						   std::getline(fileInput, id, '#');
						   std::getline(fileInput, name, '#');
						   std::getline(fileInput, contactt, '#');
						   std::getline(fileInput, address, '\n');
						   while (std::getline(fileInput, line) && line != "") {

							   remline += line;
							   remline += '\n';
						   }
						   String^ contact = msclr::interop::marshal_as<String^>(contactt);
						   // Check if the contact number matches
						   if (contact == contactNumber) {
							   temp += "Cooking\n";
							   temp += id;
							   temp += '#';
							   temp += name;
							   temp += '#';
							   temp += contactt;
							   temp += '#';
							   temp += address;
							   temp += '\n';
							   temp += remline;
							   // temp += '\n';
						   }
						   else
						   {
							   temp += status;
							   temp += '\n';
							   temp += id;
							   temp += '#';
							   temp += name;
							   temp += '#';
							   temp += contactt;
							   temp += '#';
							   temp += address;
							   temp += '\n';
							   temp += remline;
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
				   statustype = "c";
				   MessageBox::Show("Status set to 'Cooking'!", "Successful", MessageBoxButtons::OK,
					   MessageBoxIcon::Information);
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//ok
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//cancel
		this->Close();
	}

	private: System::Void UpdateOrderStatus_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};

}

