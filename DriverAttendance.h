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

	/// <summary>
	/// Summary for DriverAttendance
	/// </summary>
	public ref class DriverAttendance : public System::Windows::Forms::Form
	{
		String^ date;
	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Button^ button2;
		   String^ day;
	public:
		DriverAttendance(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DriverAttendance(String^ d, String^ day)
		{
			this->date = d;
			this->day = day;
			InitializeComponent();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DriverAttendance()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(69, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"CNIC:";
			this->label2->Click += gcnew System::EventHandler(this, &DriverAttendance::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(152, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(400, 30);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(445, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 97);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Mark Present";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DriverAttendance::button1_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Home Page  |  Driver > Driver Attendance";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbNavigation->Click += gcnew System::EventHandler(this, &DriverAttendance::lbNavigation_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(18, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 97);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DriverAttendance::button2_Click);
			// 
			// DriverAttendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(653, 381);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DriverAttendance";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DriverAttendance";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool checkstring(String^ s1, String^ s2)
		   {
			   std::string t1 = msclr::interop::marshal_as<std::string>(s1);
			   std::string t2 = msclr::interop::marshal_as<std::string>(s2);
			   bool flag = false;
			   bool flag2 = true;
			   if (t1.length() == t2.length())
				   flag = true;
			   if (flag)
			   {
				   for (int i = 0; t1[i] != '\0'; i++)
				   {
					   if (t1[i] != t2[i])
					   {
						   flag2 = false;
						   break;
					   }
				   }
			   }
			   return (flag && flag2);
		   }
		   bool is_digit(String^ text)
		   {
			   std::string textt = msclr::interop::marshal_as<std::string>(text);
			   int t = textt.length();
			   bool flag = true;
			   for (int i = 0; i < t; i++)
			   {
				   if (text[i] < 48 || text[i] > 57)
				   {
					   flag = false;
					   break;
				   }
			   }
			   return flag;
		   }
		   void WriteOrder(String^ cnic1, const char* file) {
			   try {
				   //for writing in current date file
				   String^ avail;
				   String^ driver;
				   String^ drivercnic;
				   bool flag = false;

				   FILE* filename = fopen(file, "r");
				   std::ifstream fileInput(filename);

				   std::string line;
				   std::string status;
				   std::string name;
				   std::string cnic;
				   std::string remline;
				   std::string temp = "";

				   String^ filePath = "Drivers\\Drivers(1).txt";
				   //filePath += getfilename(file);
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
						   /* while (std::getline(fileInput, line) && line != "") {

								remline += line;
								remline += '\n';
							}*/
						   String^ cnicc = msclr::interop::marshal_as<String^>(cnic);
						   // Check if the contact number matches
						   if (cnicc == cnic1)
						   {//&& status == "BUSY") {
							   avail = msclr::interop::marshal_as<String^>(status);
							   driver = msclr::interop::marshal_as<String^>(name + "#" + cnic + "#" + remline);
							   drivercnic = msclr::interop::marshal_as<String^>(cnic);
							   flag = true;
							   temp += "FREE";
							   temp += '\n';
							   temp += name;
							   temp += '#';
							   temp += cnic;
							   temp += '#';
							   temp += remline;
							   // temp += '\n';
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
							   //temp += '\n';
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
				   //open todays date driver file and write driver 

				   //first read file, find driver with cnic and then replace 

				   //reading
				   //String^ filePath4 = "Drivers.txt";
				   String^ filePath3 = "Drivers\\" + "Driver_" + date + ".txt";
				   if (File::Exists(filePath3))
				   {
					   try {
						   StreamReader^ reader = gcnew StreamReader(filePath3);//open in read mode

						   String^ filePath2 = "Drivers\\" + "Driver_" + date + "(1)" + ".txt";
						   StreamWriter^ writer = gcnew StreamWriter(filePath2);//open in write mode

						   String^ stat;
						   String^ driverinfo;

						   stat = reader->ReadLine();
						   driverinfo = reader->ReadLine();
						   while (stat != nullptr && driverinfo != nullptr) {
							   if (checkstring(driverinfo, driver))
							   {
								   stat = "present";
								   writer->WriteLine(stat);
								   writer->WriteLine(driverinfo);
							   }
							   else
							   {
								   writer->WriteLine(stat);
								   writer->WriteLine(driverinfo);
							   }
							   stat = reader->ReadLine();
							   driverinfo = reader->ReadLine();
						   }
						   writer->Close();
						   reader->Close();

						   File::Delete(filePath3);
						   File::Copy(filePath2, filePath3);
						   File::Delete(filePath2);
					   }
					   catch (Exception^ ex) {
						   MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   }
				   }
				   else
				   {
					   StreamWriter^ writer2 = File::CreateText("Drivers\\" + "Driver_" + date + ".txt");
					   writer2->WriteLine("present");
					   writer2->WriteLine(driver);
					   writer2->Close();
				   }

				   if (flag)
				   {
					   MessageBox::Show("Driver marked present!", "Successful", MessageBoxButtons::OK,
						   MessageBoxIcon::Information);
				   }
				   else
				   {
					   MessageBox::Show("Driver not found!", "Error", MessageBoxButtons::OK,
						   MessageBoxIcon::Error);
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
				   if (file[i] == '.' && file[i + 1] == 't')
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
		if (textBox1->Text == " ")
		{
			MessageBox::Show("Field cannot be empty!", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else if (textBox1->Text->Length < 13 || textBox1->Text->Length > 13)
		{
			MessageBox::Show("CNIC must be 13 digits long!", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else if (!is_digit(textBox1->Text))
		{
			MessageBox::Show("Enter digits only!", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		else
		{
			const char* file = "Drivers\\Drivers.txt";
			WriteOrder(textBox1->Text, file);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void lbNavigation_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
