#pragma once
#include "HomePageForm.h"
#include "GetDate.h"
namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for LogInForm
	/// </summary>
	public ref class LogInForm : public System::Windows::Forms::Form
	{
	public:
		LogInForm(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(173, 167);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LogInForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(43, 100);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(389, 30);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LogInForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Enter Passcode";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LogInForm::label1_Click);
			// 
			// LogInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(477, 287);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LogInForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Log In Page";
			this->Load += gcnew System::EventHandler(this, &LogInForm::LogInForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogInForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ passwordFromInput;  // Password entered by the user
		String^ passwordFromFile;   // Password read from file

		// Assume that you have a TextBox control where 
		// the user enters his password, named PasswordBox
		passwordFromInput = textBox1->Text;

		// Open the file and read the password
		StreamReader^ inputFile = nullptr;
		try {
			if (File::Exists("Password.txt")) {
				inputFile = File::OpenText("Password.txt");
				if (inputFile)
				{
					passwordFromFile = inputFile->ReadToEnd()->Trim();
					inputFile->Close();

					// Compare the passwords
					if (String::Compare(passwordFromInput, passwordFromFile, false) == 0)
					{
						MessageBox::Show("Successfully logged in.", "Success Message", MessageBoxButtons::OK);
						WaitersOnCall::GetDate dateform;
						dateform.ShowDialog();
						String^ date = dateform.date;
						String^ day = dateform.day;

						//add file creation here
						//creating current date driver attendance file
						String^ filePath = "Drivers\\" + "Drivers.txt";
						String^ filePath2 = "Drivers\\Driver_" + date + ".txt";
						if (!File::Exists(filePath2))
						{
							try {
								StreamWriter^ writer = File::CreateText("Drivers\\" + "Driver_" + date + ".txt");
								StreamReader^ reader = gcnew StreamReader(filePath);//open in read mode


								String^ stat;
								String^ driverinfo;

								stat = reader->ReadLine();
								driverinfo = reader->ReadLine();
								while (stat != nullptr && driverinfo != nullptr) {

									stat = "absent";
									writer->WriteLine(stat);
									writer->WriteLine(driverinfo);

									stat = reader->ReadLine();
									driverinfo = reader->ReadLine();
								}
								writer->Close();
								reader->Close();

							}
							catch (Exception^ ex) {
								MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
							}

						}
						WaitersOnCall::HomePageForm Form("Sam", date, day);
						Form.WindowState = FormWindowState::Maximized;
						Form.ShowDialog();
						this->Close();
					}
					else
					{
						MessageBox::Show("Incorrect password", "Error Message", MessageBoxButtons::OK);
						return;
					}
				}
			}
			else {
				MessageBox::Show("Password file does not exist.",
					"Error Message", MessageBoxButtons::OK);
				return;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("File Error: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		//no functionality
	}
	};
}