#pragma once


#include <Windows.h>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h> // Include this for string conversions
#include <vector>
#include <iostream>
#include <algorithm>


namespace WaitersOnCall
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	//using namespace std;



	/// <summary>
	/// Summary for WeeklyRestaurantPayments
	/// </summary>
	public ref class WeeklyRestaurantPayments : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Label^ lbNavigation;
	public:

	public:
		String^ restaurauntSelected;
		WeeklyRestaurantPayments(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			InitializeComboBox(restaurauntSelected);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WeeklyRestaurantPayments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ StartdatePicker;
	private: System::Windows::Forms::DateTimePicker^ EnddatePicker;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ rstname;
	private: System::Windows::Forms::TextBox^ weeklysalestb;
	private: System::Windows::Forms::Button^ calculatebtn;
	private: System::Windows::Forms::Button^ okbtn;
	private: System::Windows::Forms::Button^ cancelbtn;





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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StartdatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->EnddatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->rstname = (gcnew System::Windows::Forms::TextBox());
			this->weeklysalestb = (gcnew System::Windows::Forms::TextBox());
			this->calculatebtn = (gcnew System::Windows::Forms::Button());
			this->okbtn = (gcnew System::Windows::Forms::Button());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choose Restaurant";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(227, 87);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(601, 31);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &WeeklyRestaurantPayments::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Set Date";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Start";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(473, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"End";
			// 
			// StartdatePicker
			// 
			this->StartdatePicker->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartdatePicker->Location = System::Drawing::Point(121, 171);
			this->StartdatePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->StartdatePicker->Name = L"StartdatePicker";
			this->StartdatePicker->Size = System::Drawing::Size(334, 30);
			this->StartdatePicker->TabIndex = 7;
			this->StartdatePicker->ValueChanged += gcnew System::EventHandler(this, &WeeklyRestaurantPayments::StartdatePicker_ValueChanged);
			// 
			// EnddatePicker
			// 
			this->EnddatePicker->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnddatePicker->Location = System::Drawing::Point(536, 171);
			this->EnddatePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EnddatePicker->Name = L"EnddatePicker";
			this->EnddatePicker->Size = System::Drawing::Size(334, 30);
			this->EnddatePicker->TabIndex = 8;
			this->EnddatePicker->Value = System::DateTime(2023, 12, 12, 0, 0, 0, 0);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 23);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Name";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 281);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 23);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Weekly Sales";
			// 
			// rstname
			// 
			this->rstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rstname->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstname->Location = System::Drawing::Point(78, 226);
			this->rstname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstname->Name = L"rstname";
			this->rstname->ReadOnly = true;
			this->rstname->Size = System::Drawing::Size(812, 30);
			this->rstname->TabIndex = 12;
			// 
			// weeklysalestb
			// 
			this->weeklysalestb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->weeklysalestb->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weeklysalestb->Location = System::Drawing::Point(147, 278);
			this->weeklysalestb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->weeklysalestb->Name = L"weeklysalestb";
			this->weeklysalestb->Size = System::Drawing::Size(743, 30);
			this->weeklysalestb->TabIndex = 13;
			// 
			// calculatebtn
			// 
			this->calculatebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->calculatebtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->calculatebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calculatebtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calculatebtn->Location = System::Drawing::Point(694, 329);
			this->calculatebtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->calculatebtn->Name = L"calculatebtn";
			this->calculatebtn->Size = System::Drawing::Size(196, 97);
			this->calculatebtn->TabIndex = 14;
			this->calculatebtn->Text = L"Calculate";
			this->calculatebtn->UseVisualStyleBackColor = false;
			this->calculatebtn->Click += gcnew System::EventHandler(this, &WeeklyRestaurantPayments::calculatebtn_Click);
			// 
			// okbtn
			// 
			this->okbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->okbtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->okbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okbtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okbtn->Location = System::Drawing::Point(694, 472);
			this->okbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->okbtn->Name = L"okbtn";
			this->okbtn->Size = System::Drawing::Size(196, 97);
			this->okbtn->TabIndex = 15;
			this->okbtn->Text = L"Ok";
			this->okbtn->UseVisualStyleBackColor = false;
			this->okbtn->Click += gcnew System::EventHandler(this, &WeeklyRestaurantPayments::okbtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->cancelbtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->cancelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelbtn->Location = System::Drawing::Point(12, 472);
			this->cancelbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(196, 97);
			this->cancelbtn->TabIndex = 16;
			this->cancelbtn->Text = L"Cancel";
			this->cancelbtn->UseVisualStyleBackColor = false;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &WeeklyRestaurantPayments::cancelbtn_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(743, 32);
			this->lbNavigation->TabIndex = 17;
			this->lbNavigation->Text = L"Home Page  |  Sales Forms > Weekly Restaurant Payments";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// WeeklyRestaurantPayments
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(902, 580);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->cancelbtn);
			this->Controls->Add(this->okbtn);
			this->Controls->Add(this->calculatebtn);
			this->Controls->Add(this->weeklysalestb);
			this->Controls->Add(this->rstname);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->EnddatePicker);
			this->Controls->Add(this->StartdatePicker);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"WeeklyRestaurantPayments";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" WeeklyRestaurantPayments";
			this->Load += gcnew System::EventHandler(this, &WeeklyRestaurantPayments::WeeklyRestaurantPayments_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void InitializeComboBox(String^ restaurantSelected)
		{

			// Read data from file and populate ComboBox (Restaurant)
			//String^ restaurantSelected;

			List<String^>^ items = ReadFromFile("Files/Restaurants.txt", restaurantSelected);
			comboBox1->Items->AddRange(items->ToArray());
			comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;

		}


		//THIS STUFF OVER HERE IS READING FROM RESTAURANTS.TXT TO MY COMBO BOX 
		List<String^>^ ReadFromFile(String^ fileName, String^& restaurantSelected)
		{
			List<String^>^ dataList = gcnew List<String^>();

			StreamReader^ reader = gcnew StreamReader(fileName);

			try
			{
				// Open the file
				StreamReader^ reader = gcnew StreamReader(fileName);

				// Read data line by line
				while (!reader->EndOfStream)
				{
					String^ l = reader->ReadLine();
					std::string line = msclr::interop::marshal_as<std::string>(l);
					//line += '\0';
					std::string rest; //= gcnew String();
					int count = 0;
					for (int i = 0; line[i] != '\0'; i++) {

						if (line[i] == '#') {
							count++;
							if (count != 1 && count != 2)
								rest += ',';
							if (count == 2)
								restaurantSelected = msclr::interop::marshal_as<String^>(rest);
						}
						else if (count == 1 || count == 3) {
							rest += line[i];
						}

					}
					String^ restaurant = msclr::interop::marshal_as<String^>(rest);
					dataList->Add(restaurant);
				}

				// Close the file
				reader->Close();
			}
			catch (Exception^ e)
			{
				// Handle exceptions (e.g., file not found)
				MessageBox::Show("Error reading file: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally
			{
				// Ensure that the file is closed even if an exception occurred
				if (reader != nullptr)
				{
					reader->Close();
				}
			}

			return dataList;
		}

		String^ ReadRestaurantnameFromFile(String^ filePath, String^ selectedRestaurant)
		{
			String^ Rstname = "";  // Default value in case of any issue

			try
			{
				// Open the file for reading
				StreamReader^ reader = gcnew StreamReader(filePath);

				// Read the file line by line
				while (!reader->EndOfStream)
				{
					String^ line = reader->ReadLine();
					array<String^>^ parts = line->Split('#');

					// Check if the line has enough parts
					if (parts->Length >= 3)
					{
						String^ restaurantName = parts[1]->Trim();

						// Check if the current line corresponds to the selected restaurant
						if (String::Equals(restaurantName, selectedRestaurant, StringComparison::OrdinalIgnoreCase))
						{
							// The contact number is at the third position (index 2)
							Rstname = parts[1];
							break;  // Exit the loop since we found the contact number for the selected restaurant
						}
					}
				}

				// Close the file
				reader->Close();
			}
			catch (Exception^ ex)
			{
				// Handle exceptions, e.g., file not found or read error
				MessageBox::Show("Error reading contact number from file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			return Rstname;
		}

		bool IsDateInRange(String^ dateToCheck, DateTime startDate, DateTime endDate)
		{
			DateTime date = DateTime::ParseExact(dateToCheck, "dd-MM-yyyy", nullptr);
			endDate = endDate.Date.AddHours(23).AddMinutes(59).AddSeconds(59);
			//MessageBox::Show("Start Date: " + startDate.ToString("yyyy-MM-d")+ "End Date: " + endDate.ToString("yyyy-MM-d"));
			return (date >= startDate && date <= endDate);
		}


		double calculateWeeklyPayments(String^ restaurantName, DateTime startDate, DateTime endDate)
		{
			// File path for the delivered orders data
			String^ filePath = "Sales/deliveredorders.txt";

			double totalPayment = 0;

			try
			{
				// Read all lines from the file
				array<String^>^ lines = File::ReadAllLines(filePath);

				// Loop through each line and parse the data
				for each (String ^ line in lines)
				{
					array<String^>^ fields = line->Split('#');

					// Check if the line has the correct format and matches the selected restaurant
					if (fields->Length == 4 && fields[1] == restaurantName && IsDateInRange(fields[2], startDate, endDate))
					{
						// Assuming the order amount is in the fourth field
						double orderAmount = Convert::ToDouble(fields[3]);
						totalPayment += orderAmount;
					}
				}
			}
			catch (IOException^ ex)
			{
				// Handle file IO exception (e.g., file not found)
				// You might want to display an error message or log the exception
				MessageBox::Show(ex->Message);
			}

			// Assuming a week is seven days
			double weeklyPayment = totalPayment;
			return weeklyPayment;
		}

#pragma endregion



	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		//Read Data from file and populate ListBox (Menu)
		String^ restaurant = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : nullptr;
		std::string rest;
		std::string temp = msclr::interop::marshal_as<std::string>(restaurant);
		for (int i = 0; temp[i] != ','; i++)
			rest += temp[i];
		restaurant = msclr::interop::marshal_as<String^>(rest);
		String^ filePath1 = "Files/Restaurants.txt";
		String^ rstName = ReadRestaurantnameFromFile(filePath1, restaurant);
		rstname->Text = rstName;


	}


	private: System::Void StartdatePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

		DateTime startDate = StartdatePicker->Value;
		DateTime endDate = EnddatePicker->Value;

		EnddatePicker->Value = startDate.AddDays(6);
	}
	private: System::Void okbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void calculatebtn_Click(System::Object^ sender, System::EventArgs^ e)
	{

		// Replace "SelectedRestaurant" with the actual name of the selected restaurant
		String^ selectedRestaurant = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : nullptr;
		DateTime startDate = StartdatePicker->Value;
		DateTime endDate = EnddatePicker->Value;
		EnddatePicker->Value = startDate.AddDays(6);

		double weeklyPayment = calculateWeeklyPayments(selectedRestaurant, startDate, endDate);
		weeklysalestb->Text = String::Format("Rs {0} ", weeklyPayment);
	}

	private: System::Void WeeklyRestaurantPayments_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	};
}

