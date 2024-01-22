#pragma once

#include <Windows.h>
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h> // Include this header for string conversion
#include <algorithm>

namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddRestaurant
	/// </summary>
	public ref class AddRestaurant : public System::Windows::Forms::Form
	{
	public:
		AddRestaurant(void)
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
		~AddRestaurant()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ rstname;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ rstaddress;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ rstcontact;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ item1;
	private: System::Windows::Forms::TextBox^ itemp1;




	private: System::Windows::Forms::Button^ addmoremenu;
	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::Button^ entermenu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbNavigation;

	private: System::ComponentModel::IContainer^ components;





	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->rstname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rstaddress = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rstcontact = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->item1 = (gcnew System::Windows::Forms::TextBox());
			this->itemp1 = (gcnew System::Windows::Forms::TextBox());
			this->addmoremenu = (gcnew System::Windows::Forms::Button());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->entermenu = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// rstname
			// 
			this->rstname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rstname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstname->Location = System::Drawing::Point(14, 38);
			this->rstname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstname->Name = L"rstname";
			this->rstname->Size = System::Drawing::Size(1052, 34);
			this->rstname->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 28);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Address";
			// 
			// rstaddress
			// 
			this->rstaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rstaddress->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstaddress->Location = System::Drawing::Point(14, 161);
			this->rstaddress->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstaddress->Name = L"rstaddress";
			this->rstaddress->Size = System::Drawing::Size(1052, 34);
			this->rstaddress->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 28);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Contact Number";
			// 
			// rstcontact
			// 
			this->rstcontact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rstcontact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rstcontact->Location = System::Drawing::Point(14, 99);
			this->rstcontact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rstcontact->Name = L"rstcontact";
			this->rstcontact->Size = System::Drawing::Size(1052, 34);
			this->rstcontact->TabIndex = 6;
			this->rstcontact->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddRestaurant::rstcontact_Validating);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 28);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Add Menu";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(14, 231);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1052, 26);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(529, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 26);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Price";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Menu Item";
			// 
			// item1
			// 
			this->item1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->item1->Location = System::Drawing::Point(14, 262);
			this->item1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->item1->Name = L"item1";
			this->item1->Size = System::Drawing::Size(619, 34);
			this->item1->TabIndex = 9;
			// 
			// itemp1
			// 
			this->itemp1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->itemp1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemp1->Location = System::Drawing::Point(639, 262);
			this->itemp1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->itemp1->Name = L"itemp1";
			this->itemp1->Size = System::Drawing::Size(427, 34);
			this->itemp1->TabIndex = 10;
			// 
			// addmoremenu
			// 
			this->addmoremenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->addmoremenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->addmoremenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addmoremenu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addmoremenu->Location = System::Drawing::Point(893, 418);
			this->addmoremenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addmoremenu->Name = L"addmoremenu";
			this->addmoremenu->Size = System::Drawing::Size(196, 97);
			this->addmoremenu->TabIndex = 15;
			this->addmoremenu->Text = L"Add More";
			this->addmoremenu->UseVisualStyleBackColor = false;
			this->addmoremenu->Click += gcnew System::EventHandler(this, &AddRestaurant::addmoremenu_Click);
			// 
			// submit
			// 
			this->submit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->submit->BackColor = System::Drawing::SystemColors::MenuBar;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->Location = System::Drawing::Point(893, 641);
			this->submit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(196, 97);
			this->submit->TabIndex = 16;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &AddRestaurant::submit_Click);
			// 
			// cancel
			// 
			this->cancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->cancel->BackColor = System::Drawing::SystemColors::MenuBar;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel->Location = System::Drawing::Point(12, 641);
			this->cancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(196, 97);
			this->cancel->TabIndex = 17;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &AddRestaurant::cancel_Click);
			// 
			// entermenu
			// 
			this->entermenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->entermenu->BackColor = System::Drawing::SystemColors::MenuBar;
			this->entermenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->entermenu->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->entermenu->Location = System::Drawing::Point(679, 418);
			this->entermenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->entermenu->Name = L"entermenu";
			this->entermenu->Size = System::Drawing::Size(196, 97);
			this->entermenu->TabIndex = 18;
			this->entermenu->Text = L"Enter";
			this->entermenu->UseVisualStyleBackColor = false;
			this->entermenu->Click += gcnew System::EventHandler(this, &AddRestaurant::entermenu_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel1->Controls->Add(this->rstname);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->rstaddress);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->itemp1);
			this->panel1->Controls->Add(this->rstcontact);
			this->panel1->Controls->Add(this->item1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(12, 86);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1081, 316);
			this->panel1->TabIndex = 19;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 20;
			this->lbNavigation->Text = L"Home Page  |  Restaurant > Add New Restaurant";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// AddRestaurant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1101, 749);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->entermenu);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->addmoremenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimumSize = System::Drawing::Size(773, 578);
			this->Name = L"AddRestaurant";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddRestaurant";
			this->Load += gcnew System::EventHandler(this, &AddRestaurant::AddRestaurant_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void addmoremenu_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ menuItem = item1->Text;
		String^ priceString = itemp1->Text;
		String^ restaurantName = rstname->Text;


		// Clear textboxes
		item1->Clear();
		itemp1->Clear();

	}

	private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = rstname->Text;
		String^ address = rstaddress->Text;
		String^ contact = rstcontact->Text;

		if (name->Trim() == "" || contact->Trim() == "" || address->Trim() == "") {
			MessageBox::Show("Please enter all required information.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		//// Check if the contact number meets the criteria
		//if (contact->Length != 11 && !contact->StartsWith("0"))
		//{
		//	MessageBox::Show("Please enter a valid contact number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//	String^ contact = rstcontact->Text;
		//	while (contact->Length != 11 && !contact->StartsWith("0"))
		//	{
		//		MessageBox::Show("Please enter a valid contact number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//		String^ contact = rstcontact->Text;
		//	}
		//}


		// Construct the filename
		String^ filename = "Files/Restaurants.txt";

		// Convert managed strings to unmanaged strings
		std::string unmanagedFilename = msclr::interop::marshal_as<std::string>(filename);
		std::string unmanagedContactNumber = msclr::interop::marshal_as<std::string>(contact);
		std::string unmanagedAddress = msclr::interop::marshal_as<std::string>(address);
		std::string unmanagedrestaurantname = msclr::interop::marshal_as<std::string>(name);

		// Write restaurant information to the file
		std::ofstream outputFile(unmanagedFilename, std::ios::app); // Open the file in append mode

		if (!outputFile.is_open())
		{
			MessageBox::Show("Error opening the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int itemNumber = 1;
		std::ifstream inputFile(unmanagedFilename);
		std::string line;
		while (std::getline(inputFile, line))
		{
			itemNumber++;
		}

		// Write the formatted line to the file
		outputFile << itemNumber << "#" << unmanagedrestaurantname << "#" << unmanagedContactNumber << "#" << unmanagedAddress << std::endl;

		// Close the file
		outputFile.close();

		MessageBox::Show("Restaurant information successfully added to the file.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = "";
		String^ address = "";
		String^ contact = "";
		String^ menuItem = "";
		String^ priceString = "";

		this->Close();
	}

	private: System::Void entermenu_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ menuItem = item1->Text;
		String^ priceString = itemp1->Text;
		String^ restaurantName = rstname->Text;
		//TJ EDIT HERE
		String^ location = rstaddress->Text;

		double price;
		if (!Double::TryParse(priceString, price))
		{
			MessageBox::Show("Invalid price. Please enter a valid number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		//TJ EDIT HERE
		String^ filename = "Files/" + restaurantName + "," + location + ".txt";

		// Convert managed string to unmanaged string
		std::string unmanagedFilename = msclr::interop::marshal_as<std::string>(filename);

		// Write to the file
		std::ofstream outputFile(unmanagedFilename, std::ios::app); // Open the file in append mode

		if (!outputFile.is_open()) {
			MessageBox::Show("Error opening the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Generate a unique item number based on the current file content
		int itemNumber = 1;
		std::ifstream inputFile(unmanagedFilename);
		std::string line;
		while (std::getline(inputFile, line))
		{
			itemNumber++;
		}

		// Write the formatted line to the file
		outputFile << itemNumber << "#" << msclr::interop::marshal_as<std::string>(menuItem) << "#" << price << std::endl;

		// Close the file
		outputFile.close();

		// Clear textboxes
		//item1->Clear();
		//itemp1->Clear();

		MessageBox::Show("Menu item and price successfully added to the file.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

		   bool IsNumeric(const std::string& s)
		   {
			   // Check if the string contains only numeric characters
			   return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
		   }

	private: System::Void rstcontact_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
	{
		String^ contact = rstcontact->Text;
		std::string contactText = msclr::interop::marshal_as<std::string>(contact);
		//for (int i = 0; i < contact->Length; i++) {
		//	if (!Char::IsDigit(contact[i])) {
		//		e->Cancel = true;  // Cancel the event to keep focus on the control
		//		rstcontact->Text = "";
		//		//errorToolTip->Show("CNIC can only be numerical", rstcontact);
		//		MessageBox::Show("Contact number should only have 11 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//		//errorToolTip->AutoPopDelay = 1000;
		//		rstcontact->Focus();
		//		return;
		//	}
		//}
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



	private: System::Void itemp1_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
	{
		String^ priceString = itemp1->Text;
		std::string priceText = msclr::interop::marshal_as<std::string>(priceString);
		double priceValue = std::stod(priceText);


		// Validate if the input contains only numbers
		if (!IsNumeric(priceText))
		{
			// Display an error message or take appropriate action
			MessageBox::Show("Please enter a valid numeric value for price.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			// Clear the invalid input
			itemp1->Text = "";
			itemp1->Focus();
		}
		if (priceValue < 0)
		{
			// Display an error message or take appropriate action
			MessageBox::Show("Please enter a valid value for price.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			// Clear the invalid input
			itemp1->Text = "";
			itemp1->Focus();
		}
	}
	private: System::Void AddRestaurant_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
