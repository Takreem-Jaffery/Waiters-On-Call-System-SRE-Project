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
	/// Summary for MonthlySalesReport
	/// </summary>
	public ref class MonthlySalesReport : public System::Windows::Forms::Form
	{
		String^ date;
	private: System::Windows::Forms::Label^ lbNavigation;
		   String^ day;
	public:
		MonthlySalesReport(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MonthlySalesReport(String^ date, String^ day)
		{
			this->date = date;
			this->day = day;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MonthlySalesReport()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private:	   int currentdate = 5;
	private:	   int currentmonth = 12;
	private:	   int currentyear = 2023;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Month:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(184, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MonthlySalesReport::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Year:   ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(184, 180);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MonthlySalesReport::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(184, 261);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(551, 111);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(694, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 97);
			this->button1->TabIndex = 6;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MonthlySalesReport::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 471);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 97);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MonthlySalesReport::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(568, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 97);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Find Sales";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MonthlySalesReport::button3_Click);
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
			this->lbNavigation->Text = L"Home Page  |  Sales > Monthly Sales";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// MonthlySalesReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(902, 580);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MonthlySalesReport";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MonthlySalesReport";
			this->Load += gcnew System::EventHandler(this, &MonthlySalesReport::MonthlySalesReport_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//ok
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//cancel
		this->Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//find sales
		// if the month has ended when report is being generated
		//first if file is not empty, check if given month is in it?
		//if not open that months files seperately and find total sales and write in monthly file
		//if entered month is not yet finished
		//if month has not ended when report is generated, only display sales not write in monthly.txt
		if (currentmonth >= std::stoi(msclr::interop::marshal_as<std::string>(textBox1->Text))
			|| currentyear >= std::stoi(msclr::interop::marshal_as<std::string>(textBox2->Text)))
		{
			bool flag = false;
			String^ file = "Sales/Monthly.txt";
			//String^ date = "1";
			//file = getfilename(date, textBox1->Text, textBox2->Text);
			StreamReader^ sr = gcnew StreamReader(file);
			// Read the entire file content
			String^ fileContent = sr->ReadLine();
			while (fileContent != nullptr)
			{
				if (checkmonth(fileContent))
				{
					flag = true;

					textBox3->AppendText("Total Sales for ");
					textBox3->AppendText(textBox1->Text);
					textBox3->AppendText("-");
					textBox3->AppendText(textBox2->Text);
					textBox3->AppendText("=");
					textBox3->AppendText(getsales(fileContent));
					textBox3->AppendText(System::Environment::NewLine);
					break;
				}
				fileContent = "";
				fileContent = sr->ReadLine();
			}
			// Close the StreamReader
			sr->Close();
			if (!flag)
			{
				String^ finalp;
				int total = 0;
				String^ datee;
				int t = getlastday(std::stoi(msclr::interop::marshal_as<std::string>(textBox1->Text)),
					std::stoi(msclr::interop::marshal_as<std::string>(textBox2->Text)));
				for (int i = 1; i <= t; i++)
				{
					datee = "";
					if (i < 10)
						datee = "0";
					datee += msclr::interop::marshal_as<String^>(std::to_string(i));
					total += readprice("Orders/" + getfilename(datee, textBox1->Text, textBox2->Text));
				}
				finalp = msclr::interop::marshal_as<String^>(std::to_string(total));

				if (total != 0)
				{
					String^ filePath = "Sales/Monthly.txt";
					StreamWriter^ sw = gcnew StreamWriter(filePath, true); // 'true' for appending

					// Text to be appended
					String^ textToAppend;;

					textToAppend += textBox1->Text;
					textToAppend += "-";
					textToAppend += textBox2->Text;
					textToAppend += "#";
					textToAppend += finalp;

					// Append the text to the file
					sw->WriteLine(textToAppend);
					// Close the StreamWriter
					sw->Close();

					textBox3->AppendText("Total Sales for ");
					textBox3->AppendText(textBox1->Text);
					textBox3->AppendText("-");
					textBox3->AppendText(textBox2->Text);
					textBox3->AppendText("=");
					textBox3->AppendText(finalp);
					textBox3->AppendText(System::Environment::NewLine);
				}
				else
				{
					/*textBox3->AppendText("Total Sales for ");
					textBox3->AppendText(textBox1->Text);
					textBox3->AppendText("-");
					textBox3->AppendText(textBox2->Text);
					textBox3->AppendText(" not found!");
					textBox3->AppendText(System::Environment::NewLine);*/
					MessageBox::Show("Record for month not found!", "Error", MessageBoxButtons::OK,
						MessageBoxIcon::Error);
				}
			}
		}
		else
		{
			/*textBox3->AppendText("Total Sales for ");
			textBox3->AppendText(textBox1->Text);
			textBox3->AppendText("-");
			textBox3->AppendText(textBox2->Text);
			textBox3->AppendText(" not found!");
			textBox3->AppendText(System::Environment::NewLine);*/
			MessageBox::Show("Record for month not found!", "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
		   int readprice(String^ file)
		   {
			   String^ temp;
			   int p = 0;
			   try {
				   StreamReader^ sr = gcnew StreamReader(file);
				   // Read the entire file content
				   String^ fileContent = sr->ReadLine();
				   while (fileContent != nullptr)
				   {
					   if (ishash(fileContent))
					   {
						   temp = getprice(fileContent);
						   if (temp != nullptr)
						   {
							   std::string tem = msclr::interop::marshal_as<std::string>(temp);
							   p += std::stoi(tem);//p contains the sum of prices in one file
						   }
					   }

					   temp = "";
					   fileContent = "";
					   fileContent = sr->ReadLine();
				   }
				   // Close the StreamReader
				   sr->Close();
				   return p;
			   }
			   catch (FileNotFoundException^ ex) {
				   //// Handle the case where the file does not exist
				   //Console::WriteLine("File not found: " + ex->Message);
				   return 0;
			   }
			   catch (Exception^ ex) {
				   //// Handle other exceptions
				   //Console::WriteLine("Error: " + ex->Message);
				   return 0;
			   }
		   }
		   String^ getprice(String^ line)
		   {
			   int sum = 0;
			   bool flag1 = true;
			   bool flag2 = false;
			   String^ ret = nullptr;
			   std::string temp = "";
			   std::string linee = msclr::interop::marshal_as<std::string>(line);
			   for (int i = 0; linee[i] != '\0'; i++)
			   {
				   if (flag2)
				   {
					   if (linee[i] != '#')
						   temp += linee[i];
					   else
					   {
						   sum += stoi(temp);
						   temp = "";
					   }
				   }
				   if (linee[i] == '#' && flag1)
				   {
					   flag1 = false;
					   if (temp == "price")
					   {
						   flag2 = true;
						   temp = "";
					   }
					   else
					   {
						   ret = nullptr;
						   break;
					   }
				   }
				   if (flag1)
					   temp += linee[i];
			   }
			   if (ret != nullptr)
				   sum += stoi(temp);
			   if (sum != 0)
			   {
				   ret = msclr::interop::marshal_as<String^>(std::to_string(sum));
			   }
			   return ret;
		   }
		   bool ishash(String^ line)
		   {
			   bool flag = false;
			   std::string linee = msclr::interop::marshal_as<std::string>(line);
			   for (int i = 0; linee[i] != '\0'; i++)
			   {
				   if (linee[i] == '#')
				   {
					   flag = true;
					   break;
				   }
			   }
			   return flag;
		   }
		   String^ getsales(String^ line)
		   {
			   bool flag = false;
			   std::string tem = "";
			   std::string linee = msclr::interop::marshal_as<std::string>(line);
			   for (int i = 0; linee[i] != '\0'; i++)
			   {
				   if (linee[i] == '#')
				   {
					   flag = true;
				   }
				   else if (flag)
				   {
					   tem += linee[i];
				   }
			   }
			   String^ ret = msclr::interop::marshal_as<String^>(tem);
			   return ret;
		   }
		   bool checkmonth(String^ line)
		   {
			   bool temp = false;
			   std::string tem = "";
			   std::string linee = msclr::interop::marshal_as<std::string>(line);
			   for (int i = 0; linee[i] != '\0'; i++)
			   {
				   if (linee[i] == '-')
				   {
					   /*tem += line[i + 1];
					   if (line[i + 2] != '-')
						   tem += line[i + 2];*/
					   break;
				   }
				   tem += linee[i];
			   }
			   String^ ret = msclr::interop::marshal_as<String^>(tem);
			   if (ret == textBox1->Text)
				   temp = true;
			   return temp;
		   }
		   bool isLeapYear(int year) {
			   // Leap year is divisible by 4
			   // But years divisible by 100 are not leap years unless they are also divisible by 400
			   return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		   }
		   int getlastday(int month, int year)
		   {
			   int last;
			   if (month > 0 && month <= 7)
			   {
				   if (month == 2)
				   {
					   if (!isLeapYear(year))
						   last = 28;
					   else
						   last = 29;
				   }
				   else
				   {
					   if (month % 2 == 0)
					   {
						   last = 30;
					   }
					   else
						   last = 31;
				   }
			   }
			   else
			   {
				   if (month % 2 == 0)
				   {
					   last = 31;
				   }
				   else
					   last = 30;
			   }
			   return last;
		   }
		   int zellersCongruence(int year, int month, int day) {
			   if (month < 3) {
				   month += 12;
				   year--;
			   }

			   int K = year % 100;
			   int J = year / 100;

			   int h = (day + (13 * (month + 1)) / 5 + K + K / 4 + J / 4 - 2 * J) % 7;

			   // Adjust to have Sunday as 0, Monday as 1, ..., Saturday as 6
			   return (h + 5) % 7;
		   }
		   String^ getfilename(String^ d, String^ m, String^ y)
		   {
			   std::string temp = "";
			   std::string dayy;
			   std::string date = msclr::interop::marshal_as<std::string>(d);
			   std::string month = msclr::interop::marshal_as<std::string>(m);
			   std::string year = msclr::interop::marshal_as<std::string>(y);
			   int dayOfWeek = zellersCongruence(std::stoi(year), std::stoi(month), std::stoi(date));
			   switch (dayOfWeek) {
			   case 5:
				   dayy = "Saturday";
				   break;
			   case 6:
				   dayy = "Sunday";
				   break;
			   case 0:
				   dayy = "Monday";
				   break;
			   case 1:
				   dayy = "Tuesday";
				   break;
			   case 2:
				   dayy = "Wednesday";
				   break;
			   case 3:
				   dayy = "Thursday";
				   break;
			   case 4:
				   dayy = "Friday";
				   break;
			   }
			   temp += dayy;
			   temp += "_";
			   temp += date;
			   temp += "-";
			   temp += month;
			   temp += "-";
			   temp += year;
			   temp += ".txt";
			   String^ ret = msclr::interop::marshal_as<String^>(temp);
			   return ret;
		   }
	private: System::Void MonthlySalesReport_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
