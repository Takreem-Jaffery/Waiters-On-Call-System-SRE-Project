#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>//use this for string to String^ comversion
#include "GetCustomerData.h"
#include "UpdateDuringOrderTaking.h"

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
	/// Summary for RecordOrder
	/// </summary>
	/// 

	public ref class RecordOrder : public System::Windows::Forms::Form
	{
	public:

		String^ restaurantSelected;
		List<String^>^ CompleteOrder;
		int Count;
	private: System::Windows::Forms::Label^ OrderItemslb;
	private: System::Windows::Forms::ListBox^ QTYcmb;
	private: System::Windows::Forms::Button^ editOrderbtn;

	public:
		List<String^>^ OrderDataToStoreInFile;
		List<int>^ orderprices;
		int totalprice;
		String^ date;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbNavigation;
	public:
		String^ day;
		//void InitializeComboBox(String^);
		RecordOrder(String^ date, String^ day)
		{
			InitializeComponent();
			this->date = date;
			this->day = day;
			OrderDataToStoreInFile = gcnew List<String^>();
			orderprices = gcnew List<int>();
			Count = 0;
			//
			//TODO: Add the constructor code here
			//
			InitializeComboBox(restaurantSelected);


			//DataGridViewTextBoxColumn^ orderColumn = gcnew DataGridViewTextBoxColumn();
			//orderColumn->Name = "OrderColumn";
			//orderColumn->HeaderText = "Order";
			//orderColumn->DataPropertyName = "OrderText";  // This should match the property name in your data source
			//Orderdgv->Columns->Add(orderColumn);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RecordOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Cancelbtn;
	protected:

	private: System::Windows::Forms::Button^ AddItembtn;
	private: System::Windows::Forms::Button^ Completebtn;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::ComboBox^ Restaurantcmb;

	private: System::Windows::Forms::ListBox^ MenuItemslb;






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
			this->Cancelbtn = (gcnew System::Windows::Forms::Button());
			this->AddItembtn = (gcnew System::Windows::Forms::Button());
			this->Completebtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Restaurantcmb = (gcnew System::Windows::Forms::ComboBox());
			this->MenuItemslb = (gcnew System::Windows::Forms::ListBox());
			this->OrderItemslb = (gcnew System::Windows::Forms::Label());
			this->QTYcmb = (gcnew System::Windows::Forms::ListBox());
			this->editOrderbtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Cancelbtn
			// 
			this->Cancelbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Cancelbtn->BackColor = System::Drawing::SystemColors::Control;
			this->Cancelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancelbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancelbtn->Location = System::Drawing::Point(12, 466);
			this->Cancelbtn->Name = L"Cancelbtn";
			this->Cancelbtn->Padding = System::Windows::Forms::Padding(10);
			this->Cancelbtn->Size = System::Drawing::Size(196, 97);
			this->Cancelbtn->TabIndex = 0;
			this->Cancelbtn->Text = L"Cancel";
			this->Cancelbtn->UseVisualStyleBackColor = false;
			this->Cancelbtn->Click += gcnew System::EventHandler(this, &RecordOrder::Cancelbtn_Click);
			// 
			// AddItembtn
			// 
			this->AddItembtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->AddItembtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->AddItembtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddItembtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddItembtn->Location = System::Drawing::Point(539, 363);
			this->AddItembtn->Name = L"AddItembtn";
			this->AddItembtn->Padding = System::Windows::Forms::Padding(10);
			this->AddItembtn->Size = System::Drawing::Size(196, 97);
			this->AddItembtn->TabIndex = 1;
			this->AddItembtn->Text = L"Add Item";
			this->AddItembtn->UseVisualStyleBackColor = false;
			this->AddItembtn->Click += gcnew System::EventHandler(this, &RecordOrder::AddItembtn_Click);
			// 
			// Completebtn
			// 
			this->Completebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Completebtn->BackColor = System::Drawing::SystemColors::Control;
			this->Completebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Completebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Completebtn->Location = System::Drawing::Point(752, 466);
			this->Completebtn->Name = L"Completebtn";
			this->Completebtn->Padding = System::Windows::Forms::Padding(10);
			this->Completebtn->Size = System::Drawing::Size(196, 97);
			this->Completebtn->TabIndex = 2;
			this->Completebtn->Text = L"Complete";
			this->Completebtn->UseVisualStyleBackColor = false;
			this->Completebtn->Click += gcnew System::EventHandler(this, &RecordOrder::Completebtn_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Restaurant";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Menu Item";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(76, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(76, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Order";
			// 
			// Restaurantcmb
			// 
			this->Restaurantcmb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Restaurantcmb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Restaurantcmb->FormattingEnabled = true;
			this->Restaurantcmb->Location = System::Drawing::Point(228, 143);
			this->Restaurantcmb->Name = L"Restaurantcmb";
			this->Restaurantcmb->Size = System::Drawing::Size(574, 33);
			this->Restaurantcmb->TabIndex = 8;
			this->Restaurantcmb->SelectedIndexChanged += gcnew System::EventHandler(this, &RecordOrder::Restaurantcmb_SelectedIndexChanged);
			// 
			// MenuItemslb
			// 
			this->MenuItemslb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->MenuItemslb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuItemslb->FormattingEnabled = true;
			this->MenuItemslb->ItemHeight = 25;
			this->MenuItemslb->Location = System::Drawing::Point(228, 184);
			this->MenuItemslb->Name = L"MenuItemslb";
			this->MenuItemslb->Size = System::Drawing::Size(574, 29);
			this->MenuItemslb->TabIndex = 9;
			// 
			// OrderItemslb
			// 
			this->OrderItemslb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OrderItemslb->AutoSize = true;
			this->OrderItemslb->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->OrderItemslb->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderItemslb->Location = System::Drawing::Point(224, 26);
			this->OrderItemslb->Name = L"OrderItemslb";
			this->OrderItemslb->Size = System::Drawing::Size(0, 24);
			this->OrderItemslb->TabIndex = 11;
			this->OrderItemslb->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// QTYcmb
			// 
			this->QTYcmb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->QTYcmb->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QTYcmb->FormattingEnabled = true;
			this->QTYcmb->ItemHeight = 24;
			this->QTYcmb->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10"
			});
			this->QTYcmb->Location = System::Drawing::Point(228, 224);
			this->QTYcmb->Name = L"QTYcmb";
			this->QTYcmb->Size = System::Drawing::Size(97, 28);
			this->QTYcmb->TabIndex = 12;
			// 
			// editOrderbtn
			// 
			this->editOrderbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->editOrderbtn->BackColor = System::Drawing::SystemColors::Control;
			this->editOrderbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editOrderbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editOrderbtn->Location = System::Drawing::Point(752, 363);
			this->editOrderbtn->Name = L"editOrderbtn";
			this->editOrderbtn->Padding = System::Windows::Forms::Padding(10);
			this->editOrderbtn->Size = System::Drawing::Size(196, 97);
			this->editOrderbtn->TabIndex = 13;
			this->editOrderbtn->Text = L"Edit Order";
			this->editOrderbtn->UseVisualStyleBackColor = false;
			this->editOrderbtn->Click += gcnew System::EventHandler(this, &RecordOrder::editOrderbtn_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel1->Controls->Add(this->QTYcmb);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->MenuItemslb);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Restaurantcmb);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->OrderItemslb);
			this->panel1->Location = System::Drawing::Point(29, 75);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(919, 282);
			this->panel1->TabIndex = 13;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(713, 32);
			this->lbNavigation->TabIndex = 16;
			this->lbNavigation->Text = L"Home Page  |  Record Order";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// RecordOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(977, 575);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Completebtn);
			this->Controls->Add(this->AddItembtn);
			this->Controls->Add(this->Cancelbtn);
			this->Controls->Add(this->editOrderbtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RecordOrder";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RecordOrder";
			this->Load += gcnew System::EventHandler(this, &RecordOrder::RecordOrder_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}

		void InitializeComboBox(String^ restaurantSelected)
		{

			// Read data from file and populate ComboBox (Restaurant)
			//String^ restaurantSelected;

			List<String^>^ items = ReadFromFile("Files/Restaurants.txt", restaurantSelected);
			Restaurantcmb->Items->AddRange(items->ToArray());
			Restaurantcmb->DropDownStyle = ComboBoxStyle::DropDownList;



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
					std::string location;
					int count = 0;
					for (int i = 0; line[i] != '\0'; i++) {

						if (line[i] == '#') {
							count++;
							if (count == 3)
								rest += ',';
							if (count == 2)
								restaurantSelected = msclr::interop::marshal_as<String^>(rest);
						}
						else if (count == 1 || count == 3) {
							rest += line[i];
							/*if (count == 3)
								location += line[i];*/
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

		void ReadAndPopulateListBox(String^ filePath, ListBox^ listBox)
		{
			listBox->Items->Clear();
			try
			{
				// Open the file with the specified file path
				StreamReader^ reader = gcnew StreamReader(filePath);

				// Read data line by line and add it to the ListBox
				while (!reader->EndOfStream)
				{
					// Read a line from the file
					String^ l = reader->ReadLine();
					std::string line = msclr::interop::marshal_as<std::string>(l);
					std::string menu;
					int count = 0;
					for (int i = 0; line[i] != '\0'; i++) {

						if (line[i] == '#') {
							count++;

							if (count == 1)
								menu += ". ";
							else if (count == 2)
								menu += " | Rs ";
						}
						else
							menu += line[i];

					}
					// Add the line to the ListBox
					String^ Menu = msclr::interop::marshal_as<String^>(menu);
					listBox->Items->Add(Menu);
				}

				// Close the file
				reader->Close();
			}
			catch (Exception^ e)
			{
				// Handle exceptions (e.g., file not found)
				MessageBox::Show("Error reading file: " + e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

#pragma endregion
	private: System::Void RecordOrder_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddItembtn_Click(System::Object^ sender, System::EventArgs^ e) {

		if ((MenuItemslb->SelectedIndex == -1) || (Restaurantcmb->SelectedIndex == -1) || (QTYcmb->SelectedIndex == -1)) {
			MessageBox::Show("Please Select from all categories.", "Missing input", MessageBoxButtons::OK);
			return;
		}

		String^ restaurant = Restaurantcmb->SelectedItem != nullptr ? Restaurantcmb->SelectedItem->ToString() : nullptr;
		std::string restInfo;
		std::string temp = msclr::interop::marshal_as<std::string>(restaurant);
		int count = 0;

		String^ Menu = MenuItemslb->SelectedItem != nullptr ? MenuItemslb->SelectedItem->ToString() : nullptr;
		std::string menuInfo;
		temp = msclr::interop::marshal_as<std::string>(Menu);
		count = 0;
		bool okay = false;
		int count2 = 0, skip = 0; //this one counts spaces and int to skip (I want to skip RS)
		for (int i = 0; temp[i] != '\0'; i++) {
			if (temp[i] == '.' || temp[i] == '|') {
				count++;
				if (temp[i] == '.')
					okay = true;
				if (count == 2)
					menuInfo += '#';
				if (temp[i] == '|')
					skip = 3;
			}
			else if (skip == 0 && temp[i] != ' ' && okay == true)
				menuInfo += temp[i];
			else if (skip > 0)
				skip--;
		}
		Menu = msclr::interop::marshal_as<String^>(menuInfo);


		String^ qty = QTYcmb->SelectedItem != nullptr ? QTYcmb->SelectedItem->ToString() : nullptr;

		String^ order = restaurant + "#" + Menu + "#" + qty;

		//BIGMAC#1200
		//calculate item*qty and store
		int itemprice = calculateItemCost(Menu, qty);
		orderprices->Add(itemprice);
		totalprice += itemprice;
		//add calculation to total price value
		//use a function to do the first
		OrderDataToStoreInFile->Add(order);
		std::string orderrr;
		temp = msclr::interop::marshal_as<std::string>(order);
		for (int i = 0; temp[i] != '\0'; i++) {
			if (temp[i] == '#')
				orderrr += " | ";
			else
				orderrr += temp[i];
		}
		String^ displayOrder = msclr::interop::marshal_as<String^>(orderrr);

		Count++;
		OrderItemslb->Text += Count + ". " + displayOrder + "\n";

		QTYcmb->SelectedIndex = -1;
		MenuItemslb->SelectedIndex = -1;
	}
	private: System::Void Restaurantcmb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//Read Data from file and populate ListBox (Menu)
		String^ restaurant = Restaurantcmb->SelectedItem != nullptr ? Restaurantcmb->SelectedItem->ToString() : nullptr;
		std::string rest = msclr::interop::marshal_as<std::string>(restaurant);
		//std::string temp = msclr::interop::marshal_as<std::string>(restaurant);
		/*for (int i = 0; temp[i] != ','; i++)
			rest += temp[i];*/
		restaurant = msclr::interop::marshal_as<String^>(rest);
		String^ filePath = "Files/" + restaurant + ".txt";
		ReadAndPopulateListBox(filePath, MenuItemslb);

	}

		   int calculateItemCost(String^ menu, String^ qty) {
			   //int cost;
			   int itemprice;
			   std::string temp = msclr::interop::marshal_as<std::string>(menu);
			   std::string price;
			   std::string quantity = msclr::interop::marshal_as<std::string>(qty);

			   bool p = 0;
			   for (int i = 0; temp[i] != '\0'; i++) {
				   if (temp[i] == '#') {
					   p = true;
					   continue;
				   }
				   if (p == 1) {
					   price += temp[i];
				   }
			   }

			   itemprice = stoi(price) * stoi(quantity);
			   return itemprice;
		   }
	private: System::Void Cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void Completebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ customerInfoDummy;// = "1#mehak khurram#03214992059#30 b karim block Allama iqbal town lahore";
		if (OrderItemslb->Text == "") {
			MessageBox::Show("Please record an order before continuing", "Order Not Placed", MessageBoxButtons::OK);
			return;
		}
		else
		{
			WaitersOnCall::GetCustomerData customerdataform(OrderDataToStoreInFile, orderprices, totalprice, date, day);
			//customerdataform.WindowState = FormWindowState::Maximized;
			customerdataform.ShowDialog();
			this->Close();
		}

	}
	private: System::Void QTYcmb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Restaurantcmb->SelectedIndex == -1)
		{
			// Display an error message in the label
			MessageBox::Show("Please Select a Restaurant First", "Restaurant Selection Not Made", MessageBoxButtons::OK);
			//errorLabel->Text = "Please select an item from the ComboBox.";
			QTYcmb->SelectedIndex = -1;
		}
		else
		{

		}
	}
	private: System::Void editOrderbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ orders = OrderItemslb->Text;
		WaitersOnCall::UpdateDuringOrderTaking updateForm(orders);
		updateForm.ShowDialog();
		OrderItemslb->Text = updateForm.orders;
		totalprice = 0;
		orderprices->Clear();

		List<String^>^ OrderDataFile = gcnew List<String^>();
		String^ order;
		std::string fix, updatedorder;
		int toStore = updateForm.orderLines->Length - updateForm.linesRemoved - 1;
		for (int x = 0; x < updateForm.orderLines->Length - updateForm.linesRemoved - 1; x++) {
			order = updateForm.orderLines[x];
			updatedorder = msclr::interop::marshal_as<std::string>(order);
			fix = "";
			for (int i = 3; updatedorder[i] != '\0'; i++) {
				fix += updatedorder[i];
			}
			for each (String ^ orderr in OrderDataToStoreInFile)
			{
				std::string orderrr = msclr::interop::marshal_as<std::string>(orderr);
				std::string temp2 = "";

				for (int i = 0; orderrr[i] != '\0'; i++) {
					if (orderrr[i] == '#')
						temp2 += " | ";
					else
						temp2 += orderrr[i];
				}
				if (fix == temp2) {
					OrderDataFile->Add(orderr);
					toStore--;

					//recalculating the price
					std::string price = "";
					std::string quantity = "";
					int countHash = 0;
					for (int i = 0; orderrr[i] != '\0'; i++) {
						if (orderrr[i] == '#')
						{
							countHash++;
							continue;
						}
						if (countHash == 1 || countHash == 2) {
							if (countHash == 2 && orderrr[i - 1] == '#')
								price += "#";
							price += orderrr[i];
						}
						if (countHash == 3) {
							quantity += orderrr[i];
						}
					}
					String^ orderprice = msclr::interop::marshal_as<String^>(price);
					String^ qty = msclr::interop::marshal_as<String^>(quantity);
					int itemprice = calculateItemCost(orderprice, qty);
					orderprices->Add(itemprice);
					totalprice += itemprice;
					if (toStore == 0) {
						break;
					}
				}
			}

		}

		OrderDataToStoreInFile = OrderDataFile;


	}
	};


}
