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

	/// <summary>
	/// Summary for UpdateRestaurant
	/// </summary>

	public ref class UpdateRestaurant : public System::Windows::Forms::Form
	{
	public:
		String^ restaurantSelected;


		UpdateRestaurant(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			InitializeComboBox(restaurantSelected);
			String^ filename = "Restaurants.txt";
			//ReadAndPopulateListBox(filename, comboBox1);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateRestaurant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
		   //private: System::Windows::Forms::ListBox^ MenuItemslb;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ rstcontact;

	private: System::Windows::Forms::TextBox^ menuitemtb;
	private: System::Windows::Forms::TextBox^ pricetb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ addmorebtn;

	private: System::Windows::Forms::Button^ enterbtn;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ rstname;
	private: System::Windows::Forms::TextBox^ rstaddress;

	private: System::Windows::Forms::Button^ updatebtn;
	private: System::Windows::Forms::Button^ cancelbtn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbNavigation;




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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rstcontact = (gcnew System::Windows::Forms::TextBox());
			this->menuitemtb = (gcnew System::Windows::Forms::TextBox());
			this->pricetb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->addmorebtn = (gcnew System::Windows::Forms::Button());
			this->enterbtn = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->rstname = (gcnew System::Windows::Forms::TextBox());
			this->rstaddress = (gcnew System::Windows::Forms::TextBox());
			this->updatebtn = (gcnew System::Windows::Forms::Button());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(197, 28);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(551, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateRestaurant::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Choose Restaurant ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 28);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contact Number";
			// 
			// rstcontact
			// 
			this->rstcontact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->rstcontact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstcontact->Location = System::Drawing::Point(186, 154);
			this->rstcontact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstcontact->Name = L"rstcontact";
			this->rstcontact->Size = System::Drawing::Size(856, 34);
			this->rstcontact->TabIndex = 3;
			this->rstcontact->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UpdateRestaurant::rstcontact_Validating);
			// 
			// menuitemtb
			// 
			this->menuitemtb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->menuitemtb->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuitemtb->Location = System::Drawing::Point(130, 325);
			this->menuitemtb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->menuitemtb->Name = L"menuitemtb";
			this->menuitemtb->ReadOnly = true;
			this->menuitemtb->Size = System::Drawing::Size(912, 34);
			this->menuitemtb->TabIndex = 5;
			// 
			// pricetb
			// 
			this->pricetb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pricetb->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pricetb->Location = System::Drawing::Point(130, 383);
			this->pricetb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pricetb->Name = L"pricetb";
			this->pricetb->Size = System::Drawing::Size(912, 34);
			this->pricetb->TabIndex = 6;
			this->pricetb->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &UpdateRestaurant::pricetb_Validating);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 28);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Menu";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 325);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 28);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Menu Item";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 386);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 28);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Price";
			// 
			// addmorebtn
			// 
			this->addmorebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addmorebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addmorebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addmorebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addmorebtn->Location = System::Drawing::Point(893, 523);
			this->addmorebtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addmorebtn->Name = L"addmorebtn";
			this->addmorebtn->Size = System::Drawing::Size(196, 97);
			this->addmorebtn->TabIndex = 11;
			this->addmorebtn->Text = L"Add more";
			this->addmorebtn->UseVisualStyleBackColor = false;
			this->addmorebtn->Click += gcnew System::EventHandler(this, &UpdateRestaurant::addmorebtn_Click);
			// 
			// enterbtn
			// 
			this->enterbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->enterbtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->enterbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enterbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterbtn->Location = System::Drawing::Point(672, 523);
			this->enterbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->enterbtn->Name = L"enterbtn";
			this->enterbtn->Size = System::Drawing::Size(196, 97);
			this->enterbtn->TabIndex = 12;
			this->enterbtn->Text = L"Enter";
			this->enterbtn->UseVisualStyleBackColor = false;
			this->enterbtn->Click += gcnew System::EventHandler(this, &UpdateRestaurant::enterbtn_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->AllowDrop = true;
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(87, 12);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(661, 36);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateRestaurant::comboBox2_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 28);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 209);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 28);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Address";
			// 
			// rstname
			// 
			this->rstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->rstname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstname->Location = System::Drawing::Point(90, 106);
			this->rstname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstname->Name = L"rstname";
			this->rstname->Size = System::Drawing::Size(952, 34);
			this->rstname->TabIndex = 16;
			// 
			// rstaddress
			// 
			this->rstaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->rstaddress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstaddress->Location = System::Drawing::Point(114, 203);
			this->rstaddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstaddress->Name = L"rstaddress";
			this->rstaddress->Size = System::Drawing::Size(928, 34);
			this->rstaddress->TabIndex = 17;
			// 
			// updatebtn
			// 
			this->updatebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->updatebtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->updatebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updatebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updatebtn->Location = System::Drawing::Point(893, 641);
			this->updatebtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->updatebtn->Name = L"updatebtn";
			this->updatebtn->Size = System::Drawing::Size(196, 97);
			this->updatebtn->TabIndex = 19;
			this->updatebtn->Text = L"Update";
			this->updatebtn->UseVisualStyleBackColor = false;
			this->updatebtn->Click += gcnew System::EventHandler(this, &UpdateRestaurant::updatebtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->cancelbtn->BackColor = System::Drawing::SystemColors::MenuBar;
			this->cancelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelbtn->Location = System::Drawing::Point(10, 641);
			this->cancelbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(196, 97);
			this->cancelbtn->TabIndex = 20;
			this->cancelbtn->Text = L"Cancel";
			this->cancelbtn->UseVisualStyleBackColor = false;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &UpdateRestaurant::cancelbtn_Click_1);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->rstaddress);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->pricetb);
			this->panel1->Controls->Add(this->rstname);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->rstcontact);
			this->panel1->Controls->Add(this->menuitemtb);
			this->panel1->Location = System::Drawing::Point(21, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1068, 436);
			this->panel1->TabIndex = 21;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Location = System::Drawing::Point(13, 251);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1029, 60);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(13, 15);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1029, 76);
			this->panel2->TabIndex = 18;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 22;
			this->lbNavigation->Text = L"Home Page  |  Restaurant > Update Restaurant";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// UpdateRestaurant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1101, 749);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->cancelbtn);
			this->Controls->Add(this->updatebtn);
			this->Controls->Add(this->enterbtn);
			this->Controls->Add(this->addmorebtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UpdateRestaurant";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UpdateRestaurant";
			this->Load += gcnew System::EventHandler(this, &UpdateRestaurant::UpdateRestaurant_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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

		//void ReadAndPopulateListBox(String^ filePath, ListBox^ listBox)
		//{
		//	listBox->Items->Clear();
		//	try
		//	{
		//		// Open the file with the specified file path
		//		StreamReader^ reader = gcnew StreamReader(filePath);

		//		// Read data line by line and add it to the ListBox
		//		while (!reader->EndOfStream)
		//		{
		//			// Read a line from the file
		//			String^ l = reader->ReadLine();
		//			std::string line = msclr::interop::marshal_as<std::string>(l);
		//			std::string menu;
		//			int count = 0;
		//			for (int i = 0; line[i] != '\0'; i++) {

		//				if (line[i] == '#') {
		//					count++;

		//					if (count == 1)
		//						menu += ". ";
		//					else if (count == 2)
		//						menu += " | Rs ";
		//				}
		//				else
		//					menu += line[i];

		//			}
		//			// Add the line to the ListBox
		//			String^ Menu = msclr::interop::marshal_as<String^>(menu);
		//			listBox->Items->Add(Menu);
		//		}

		//		// Close the file
		//		reader->Close();
		//	}
		//	catch (Exception^ e)
		//	{
		//		// Handle exceptions (e.g., file not found)
		//		MessageBox::Show("Error reading file: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//	}
		//}

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



		void PopulateMenuListBox(String^ filePath, ComboBox^ listBox)
		{
			try
			{
				// Read the existing content from the file
				String^ fileContent = File::ReadAllText(filePath);

				// Split the content into lines
				array<String^>^ lines = fileContent->Split('\n');

				// Clear the existing items in the ListBox
				listBox->Items->Clear();

				// Iterate through each line and add menu items to the ListBox
				for (int i = 0; i < lines->Length; i++)
				{
					// Split each line into parts using '#' as the delimiter
					array<String^>^ parts = lines[i]->Split('#');

					// Check if the line has enough parts
					if (parts->Length >= 3)
					{
						// Extract menu item, price, and any other relevant information
						String^ menuItem = parts[1]->Trim();
						String^ price = parts[2]->Trim();

						// Add the menu item with its price to the ListBox
						listBox->Items->Add(menuItem + " | Rs " + price);
					}
				}
			}
			catch (Exception^ ex)
			{
				// Handle exceptions, e.g., file not found or read error
				MessageBox::Show("Error reading menu from file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
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
		//ReadAndPopulateListBox(filePath, MenuItemslb);
		PopulateMenuListBox(filePath, comboBox2);

	}



	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ menuitem = comboBox2->SelectedItem != nullptr ? comboBox2->SelectedItem->ToString() : nullptr;
		String^ pricee = comboBox2->SelectedItem != nullptr ? comboBox2->SelectedItem->ToString() : nullptr;;
		std::string rest;
		int i;
		std::string temp = msclr::interop::marshal_as<std::string>(menuitem);
		for (i = 0; temp[i] != '|'; i++)
			rest += temp[i];
		menuitem = msclr::interop::marshal_as<String^>(rest);

		std::string rest2;
		std::string temp2 = msclr::interop::marshal_as<std::string>(pricee);

		i = i + 5; // to skip |RS

		for (int j = i; temp[j] != '\0'; j++)
			rest2 += temp[j];
		pricee = msclr::interop::marshal_as<String^>(rest2);

		menuitemtb->Text = menuitem;
		pricetb->Text = pricee;
	}

	private: System::Void enterbtn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			String^ location = rstaddress->Text;
			String^ Srestaurant = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : nullptr;
			String^ menu = comboBox2->SelectedItem != nullptr ? comboBox2->SelectedItem->ToString() : nullptr;
			String^ filePathRead = "Files/" + Srestaurant + ".txt";
			//String^ filePathRead = "Files/kfc.txt";
			//String^ filePathWrite = "Files/kfc(1).txt";
			String^ filePathWrite = "Files/" + Srestaurant + "(1).txt";
			if (File::Exists(filePathRead))
			{
				StreamReader^ reader = gcnew StreamReader(filePathRead);
				StreamWriter^ writer = gcnew StreamWriter(filePathWrite, true); // true for appending

				while (!reader->EndOfStream)
				{

					//String^ status = reader->ReadLine();
					String^ line = reader->ReadLine();
					// Check if the line is null before attempting to split
					if (line != nullptr)
					{
						array<String^>^ parts = line->Split('#');
						//comparing with menu previously
						if (menuitemtb->Text->Trim() == parts[1])
						{
							// driver to update found -> append new info to (1) file
							String^ restaurantData = parts[0]+"#"+menuitemtb->Text->Trim() + "#" + pricetb->Text;
							//writer->WriteLine(status);
							writer->WriteLine(restaurantData);
						}
						else
						{
							//writer->WriteLine(status);
							writer->WriteLine(line);
						}
					}
				}
				reader->Close();
				writer->Close();
				File::Delete(filePathRead);
				File::Move(filePathWrite, filePathRead);
				MessageBox::Show("Menu information successfully updated.", "Success Message", MessageBoxButtons::OK);
			}
			else
			{
				//to check if file exists
				//ISKO BAD M REMOVE KRNA H
				MessageBox::Show("Menu information not updated.", "Error Message", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error opening the file: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

	}
	private: System::Void UpdateRestaurant_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void updatebtn_Click(System::Object^ sender, System::EventArgs^ e)
	{

		try
		{
			String^ restaurant = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : nullptr;
			String^ filePathRead = "Files/Restaurants.txt";
			String^ filePathWrite = "Files/Restaurants(1).txt";
			if (File::Exists(filePathRead))
			{
				StreamReader^ reader = gcnew StreamReader(filePathRead);
				StreamWriter^ writer = gcnew StreamWriter(filePathWrite, true); // true for appending

				while (!reader->EndOfStream)
				{

					String^ status = reader->ReadLine();
					String^ line = reader->ReadLine();
					// Check if the line is null before attempting to split
					if (line != nullptr)
					{
						array<String^>^ parts = line->Split('#');
						if (restaurant == parts[1])
						{
							// driver to update found -> append new info to (1) file
							String^ restaurantData = rstname->Text + "#" + rstcontact->Text + "#" + rstaddress->Text;
							writer->WriteLine(status);
							writer->WriteLine(restaurantData);
						}
						else
						{
							writer->WriteLine(status);
							writer->WriteLine(line);
						}
					}
				}
				reader->Close();
				writer->Close();
				File::Delete(filePathRead);
				File::Move(filePathWrite, filePathRead);
				MessageBox::Show("Restaurant information was successfully updated in the database.",
					"Success Message", MessageBoxButtons::OK);
			}
			else
			{
				//to check if file exists
				//ISKO BAD M REMOVE KRNA H
				MessageBox::Show("Restaurant information was not successfully updated in the database.",
					"Error Message", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error opening the file: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		this->Close();


	}

		   bool IsNumeric(const std::string& s)
		   {
			   // Check if the string contains only numeric characters
			   return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
		   }


	private: System::Void rstcontact_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ contact = rstcontact->Text;
		std::string contactText = msclr::interop::marshal_as<std::string>(contact);

		if (!contact->StartsWith("0"))
		{
			MessageBox::Show("Contact number should start with 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			rstcontact->Text = "";
			rstcontact->Focus();
			return;
		}
		if (contact->Length != 11)
		{
			MessageBox::Show("Contact number should only have 11 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			rstcontact->Text = "";
			rstcontact->Focus();
			return;
		}
		if (!IsNumeric(contactText))
		{
			MessageBox::Show("Please enter a valid numeric value for contact number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			// Clear the invalid input
			rstcontact->Text = "";
			rstcontact->Focus();
		}
	}


	private: System::Void pricetb_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void addmorebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Clear textboxes
		menuitemtb->Clear();
		pricetb->Clear();


	}
	private: System::Void pricetb_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ priceString = pricetb->Text;
		std::string priceText = msclr::interop::marshal_as<std::string>(priceString);
		double priceValue = std::stod(priceText);


		// Validate if the input contains only numbers
		if (!IsNumeric(priceText))
		{
			// Display an error message or take appropriate action
			MessageBox::Show("Please enter a valid numeric value for price.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			// Clear the invalid input
			pricetb->Text = "";
			pricetb->Focus();
		}
		if (priceValue < 0)
		{
			// Display an error message or take appropriate action
			MessageBox::Show("Please enter a valid value for price.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			// Clear the invalid input
			pricetb->Text = "";
			pricetb->Focus();
		}
	}
	private: System::Void cancelbtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
