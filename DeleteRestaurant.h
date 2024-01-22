#pragma once

#include <Windows.h>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h> // Include this for string conversions
#include <vector>
#include <iostream>
#include <algorithm>

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
	/// Summary for DeleteRestaurant
	/// </summary>
	public ref class DeleteRestaurant : public System::Windows::Forms::Form
	{
	public:
		String^ restaurantSelected;
		DeleteRestaurant(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			InitializeComboBox(restaurantSelected);
			String^ filename = "Restaurants.txt";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteRestaurant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ chooserst;
	private: System::Windows::Forms::Label^ name;
	protected:


	protected:

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ address;

	private: System::Windows::Forms::Label^ contact;
	private: System::Windows::Forms::TextBox^ rstname;
	private: System::Windows::Forms::TextBox^ rstcontact;
	private: System::Windows::Forms::TextBox^ rstaddress;
	private: System::Windows::Forms::Button^ deletebtn;
	private: System::Windows::Forms::Button^ cancelbtn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lbNavigation;






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
			this->chooserst = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->address = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::Label());
			this->rstname = (gcnew System::Windows::Forms::TextBox());
			this->rstcontact = (gcnew System::Windows::Forms::TextBox());
			this->rstaddress = (gcnew System::Windows::Forms::TextBox());
			this->deletebtn = (gcnew System::Windows::Forms::Button());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// chooserst
			// 
			this->chooserst->AutoSize = true;
			this->chooserst->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chooserst->Location = System::Drawing::Point(8, 25);
			this->chooserst->Name = L"chooserst";
			this->chooserst->Size = System::Drawing::Size(182, 28);
			this->chooserst->TabIndex = 0;
			this->chooserst->Text = L"Choose Restaurant";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(8, 2);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(66, 28);
			this->name->TabIndex = 1;
			this->name->Text = L"Name";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(221, 22);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(813, 36);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteRestaurant::comboBox1_SelectedIndexChanged);
			// 
			// address
			// 
			this->address->AutoSize = true;
			this->address->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->address->Location = System::Drawing::Point(8, 151);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(85, 28);
			this->address->TabIndex = 3;
			this->address->Text = L"Address";
			// 
			// contact
			// 
			this->contact->AutoSize = true;
			this->contact->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(8, 72);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(81, 28);
			this->contact->TabIndex = 4;
			this->contact->Text = L"Contact";
			// 
			// rstname
			// 
			this->rstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rstname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstname->Location = System::Drawing::Point(7, 30);
			this->rstname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstname->Name = L"rstname";
			this->rstname->Size = System::Drawing::Size(1041, 34);
			this->rstname->TabIndex = 5;
			// 
			// rstcontact
			// 
			this->rstcontact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rstcontact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstcontact->Location = System::Drawing::Point(7, 110);
			this->rstcontact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstcontact->Name = L"rstcontact";
			this->rstcontact->Size = System::Drawing::Size(1041, 34);
			this->rstcontact->TabIndex = 6;
			// 
			// rstaddress
			// 
			this->rstaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rstaddress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstaddress->Location = System::Drawing::Point(7, 179);
			this->rstaddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstaddress->Name = L"rstaddress";
			this->rstaddress->Size = System::Drawing::Size(1041, 34);
			this->rstaddress->TabIndex = 7;
			// 
			// deletebtn
			// 
			this->deletebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->deletebtn->BackColor = System::Drawing::Color::IndianRed;
			this->deletebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebtn->Location = System::Drawing::Point(893, 641);
			this->deletebtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deletebtn->Name = L"deletebtn";
			this->deletebtn->Size = System::Drawing::Size(196, 97);
			this->deletebtn->TabIndex = 8;
			this->deletebtn->Text = L"Delete";
			this->deletebtn->UseVisualStyleBackColor = false;
			this->deletebtn->Click += gcnew System::EventHandler(this, &DeleteRestaurant::deletebtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->cancelbtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->cancelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelbtn->Location = System::Drawing::Point(11, 641);
			this->cancelbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(196, 97);
			this->cancelbtn->TabIndex = 9;
			this->cancelbtn->Text = L"Cancel";
			this->cancelbtn->UseVisualStyleBackColor = false;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &DeleteRestaurant::cancelbtn_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel1->Controls->Add(this->rstname);
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->address);
			this->panel1->Controls->Add(this->rstaddress);
			this->panel1->Controls->Add(this->contact);
			this->panel1->Controls->Add(this->rstcontact);
			this->panel1->Location = System::Drawing::Point(7, 95);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1061, 290);
			this->panel1->TabIndex = 10;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->chooserst);
			this->panel2->Location = System::Drawing::Point(7, 7);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1061, 81);
			this->panel2->TabIndex = 11;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Location = System::Drawing::Point(11, 71);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1077, 402);
			this->panel3->TabIndex = 12;
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
			this->lbNavigation->Text = L"Home Page  |  Restaurant > Delete Restaurant";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// DeleteRestaurant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1101, 749);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->cancelbtn);
			this->Controls->Add(this->deletebtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DeleteRestaurant";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DeleteRestaurant";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

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

		String^ ReadContactNumberFromFile(String^ filePath, String^ selectedRestaurant)
		{
			String^ contactNumber = "";  // Default value in case of any issue

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
							contactNumber = parts[2];
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

			return contactNumber;
		}

		String^ ReadLocationFromFile(String^ filePath, String^ selectedRestaurant)
		{
			String^ Location = "";  // Default value in case of any issue

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
							Location = parts[3];
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

			return Location;
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
		String^ location = ReadLocationFromFile(filePath1, restaurant);
		String^ filePath = "Files/" + restaurant + "," + location + ".txt";
		String^ rstName = ReadRestaurantnameFromFile(filePath1, restaurant);
		String^ contactNumber = ReadContactNumberFromFile(filePath1, restaurant);

		rstname->Text = rstName;
		rstcontact->Text = contactNumber;
		rstaddress->Text = location;
	}


	private: System::Void deletebtn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ location = rstaddress->Text;

		if (comboBox1->Text == "")
		{
			MessageBox::Show("Select restaurant please. ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete Restaurant from database?",
			"Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{

			try {
				String^ selectedrestaurant = comboBox1->SelectedItem->ToString();
				String^ filePathRead = "C:\\Users\\RAFFAT\\source\\repos\\waiters on call project\\waiters on call project\\Files\\Restaurants.txt";
				String^ filePathWrite = "C:\\Users\\RAFFAT\\source\\repos\\waiters on call project\\waiters on call project\\Files\\Restaurants(1).txt";

				if (File::Exists(filePathRead))
				{
					StreamReader^ reader = gcnew StreamReader(filePathRead);
					StreamWriter^ writer = gcnew StreamWriter(filePathWrite, true); // true for appending

					while (!reader->EndOfStream)
					{

						String^ status = reader->ReadLine();
						String^ line = reader->ReadLine();
						array<String^>^ parts = line->Split('#');

						if (selectedrestaurant != parts[1])
						{
							writer->WriteLine(status);
							writer->WriteLine(line);
						}

					}
					reader->Close();
					writer->Close();
					File::Delete(filePathRead);
					File::Move(filePathWrite, filePathRead);

					// deleting menu file
					File::Delete("Files/" + selectedrestaurant + "," + location + ".txt");

					MessageBox::Show("Restaurant was successfully deleted from the database.",
						"Success Message", MessageBoxButtons::OK);
				}
			}
			catch (Exception^ e) {
				MessageBox::Show("Error opening the file: " + e->Message, "Error",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		else
			this->Close();


		this->Close();

	}
	private: System::Void cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	};
}
