#pragma once

namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for UpdateandCancel
	/// </summary>
	public ref class UpdateandCancel : public System::Windows::Forms::Form
	{
		String^ date;
	private: System::Windows::Forms::Button^ button1;


		   String^ day;
	public:
		UpdateandCancel(String^ date, String^ day)
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
		~UpdateandCancel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnUpdate;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panelBG;





	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Label^ lbSearch;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbContactNo;
	private: System::Windows::Forms::Panel^ panelCustomer;

	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Panel^ panelsearch;
	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::Panel^ panelorder;







	private: System::Windows::Forms::Label^ lborder;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::Label^ lbContact;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::TextBox^ tbContact;
	private: System::Windows::Forms::ListBox^ listBoxOrder;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ tbItem;

	private: System::Windows::Forms::TextBox^ tbRestaurantName;
	private: System::Windows::Forms::Label^ lbRestaurant;
	private: System::Windows::Forms::TextBox^ tbItemPrice;
	private: System::Windows::Forms::Label^ lbPrice;
	private: System::Windows::Forms::Label^ lbItem;


	private: System::Windows::Forms::NumericUpDown^ numericUpQty;
	private: System::Windows::Forms::Label^ lbQty;










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
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->panelBG = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelorder = (gcnew System::Windows::Forms::Panel());
			this->lbQty = (gcnew System::Windows::Forms::Label());
			this->lbPrice = (gcnew System::Windows::Forms::Label());
			this->lbItem = (gcnew System::Windows::Forms::Label());
			this->numericUpQty = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbRestaurant = (gcnew System::Windows::Forms::Label());
			this->tbItemPrice = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->tbItem = (gcnew System::Windows::Forms::TextBox());
			this->tbRestaurantName = (gcnew System::Windows::Forms::TextBox());
			this->listBoxOrder = (gcnew System::Windows::Forms::ListBox());
			this->lborder = (gcnew System::Windows::Forms::Label());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panelCustomer = (gcnew System::Windows::Forms::Panel());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->lbContact = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbContact = (gcnew System::Windows::Forms::TextBox());
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelsearch = (gcnew System::Windows::Forms::Panel());
			this->cbContactNo = (gcnew System::Windows::Forms::ComboBox());
			this->lbSearch = (gcnew System::Windows::Forms::Label());
			this->panelBG->SuspendLayout();
			this->panelorder->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpQty))->BeginInit();
			this->panelCustomer->SuspendLayout();
			this->panelsearch->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(388, 188);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(153, 61);
			this->btnUpdate->TabIndex = 1;
			this->btnUpdate->Text = L"Update Order";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &UpdateandCancel::btnUpdate_Click);
			// 
			// panelBG
			// 
			this->panelBG->Controls->Add(this->button1);
			this->panelBG->Controls->Add(this->panelorder);
			this->panelBG->Controls->Add(this->lbNavigation);
			this->panelBG->Controls->Add(this->panelCustomer);
			this->panelBG->Controls->Add(this->panelsearch);
			this->panelBG->Location = System::Drawing::Point(16, 15);
			this->panelBG->Margin = System::Windows::Forms::Padding(4);
			this->panelBG->Name = L"panelBG";
			this->panelBG->Size = System::Drawing::Size(1039, 571);
			this->panelBG->TabIndex = 5;
			this->panelBG->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UpdateandCancel::panel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(9, 468);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 97);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateandCancel::button1_Click);
			// 
			// panelorder
			// 
			this->panelorder->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelorder->Controls->Add(this->lbQty);
			this->panelorder->Controls->Add(this->lbPrice);
			this->panelorder->Controls->Add(this->lbItem);
			this->panelorder->Controls->Add(this->numericUpQty);
			this->panelorder->Controls->Add(this->lbRestaurant);
			this->panelorder->Controls->Add(this->tbItemPrice);
			this->panelorder->Controls->Add(this->btnCancel);
			this->panelorder->Controls->Add(this->btnUpdate);
			this->panelorder->Controls->Add(this->tbItem);
			this->panelorder->Controls->Add(this->tbRestaurantName);
			this->panelorder->Controls->Add(this->listBoxOrder);
			this->panelorder->Controls->Add(this->lborder);
			this->panelorder->Location = System::Drawing::Point(463, 153);
			this->panelorder->Margin = System::Windows::Forms::Padding(4);
			this->panelorder->Name = L"panelorder";
			this->panelorder->Size = System::Drawing::Size(571, 412);
			this->panelorder->TabIndex = 26;
			// 
			// lbQty
			// 
			this->lbQty->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbQty->Location = System::Drawing::Point(27, 348);
			this->lbQty->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbQty->Name = L"lbQty";
			this->lbQty->Size = System::Drawing::Size(113, 25);
			this->lbQty->TabIndex = 33;
			this->lbQty->Text = L"Quantity";
			// 
			// lbPrice
			// 
			this->lbPrice->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPrice->Location = System::Drawing::Point(27, 304);
			this->lbPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbPrice->Name = L"lbPrice";
			this->lbPrice->Size = System::Drawing::Size(113, 25);
			this->lbPrice->TabIndex = 32;
			this->lbPrice->Text = L"Price";
			// 
			// lbItem
			// 
			this->lbItem->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbItem->Location = System::Drawing::Point(27, 255);
			this->lbItem->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbItem->Name = L"lbItem";
			this->lbItem->Size = System::Drawing::Size(113, 25);
			this->lbItem->TabIndex = 31;
			this->lbItem->Text = L"Item";
			// 
			// numericUpQty
			// 
			this->numericUpQty->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpQty->Location = System::Drawing::Point(148, 347);
			this->numericUpQty->Margin = System::Windows::Forms::Padding(4);
			this->numericUpQty->Name = L"numericUpQty";
			this->numericUpQty->Size = System::Drawing::Size(97, 29);
			this->numericUpQty->TabIndex = 30;
			// 
			// lbRestaurant
			// 
			this->lbRestaurant->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRestaurant->Location = System::Drawing::Point(27, 206);
			this->lbRestaurant->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRestaurant->Name = L"lbRestaurant";
			this->lbRestaurant->Size = System::Drawing::Size(113, 25);
			this->lbRestaurant->TabIndex = 26;
			this->lbRestaurant->Text = L"Restaurant";
			// 
			// tbItemPrice
			// 
			this->tbItemPrice->BackColor = System::Drawing::SystemColors::Info;
			this->tbItemPrice->Enabled = false;
			this->tbItemPrice->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbItemPrice->Location = System::Drawing::Point(148, 304);
			this->tbItemPrice->Margin = System::Windows::Forms::Padding(4);
			this->tbItemPrice->Name = L"tbItemPrice";
			this->tbItemPrice->ReadOnly = true;
			this->tbItemPrice->Size = System::Drawing::Size(96, 26);
			this->tbItemPrice->TabIndex = 29;
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::IndianRed;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCancel->Location = System::Drawing::Point(388, 268);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(153, 61);
			this->btnCancel->TabIndex = 18;
			this->btnCancel->Text = L"Cancel Order";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UpdateandCancel::btnCancel_Click);
			// 
			// tbItem
			// 
			this->tbItem->BackColor = System::Drawing::SystemColors::Info;
			this->tbItem->Enabled = false;
			this->tbItem->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbItem->Location = System::Drawing::Point(148, 255);
			this->tbItem->Margin = System::Windows::Forms::Padding(4);
			this->tbItem->Name = L"tbItem";
			this->tbItem->Size = System::Drawing::Size(212, 26);
			this->tbItem->TabIndex = 27;
			// 
			// tbRestaurantName
			// 
			this->tbRestaurantName->BackColor = System::Drawing::SystemColors::Info;
			this->tbRestaurantName->Enabled = false;
			this->tbRestaurantName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbRestaurantName->Location = System::Drawing::Point(148, 206);
			this->tbRestaurantName->Margin = System::Windows::Forms::Padding(4);
			this->tbRestaurantName->Name = L"tbRestaurantName";
			this->tbRestaurantName->Size = System::Drawing::Size(212, 26);
			this->tbRestaurantName->TabIndex = 26;
			// 
			// listBoxOrder
			// 
			this->listBoxOrder->BackColor = System::Drawing::SystemColors::MenuBar;
			this->listBoxOrder->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxOrder->FormattingEnabled = true;
			this->listBoxOrder->ItemHeight = 23;
			this->listBoxOrder->Location = System::Drawing::Point(44, 54);
			this->listBoxOrder->Margin = System::Windows::Forms::Padding(4);
			this->listBoxOrder->Name = L"listBoxOrder";
			this->listBoxOrder->Size = System::Drawing::Size(497, 96);
			this->listBoxOrder->TabIndex = 17;
			this->listBoxOrder->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateandCancel::listBoxOrder_SelectedIndexChanged);
			// 
			// lborder
			// 
			this->lborder->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lborder->Location = System::Drawing::Point(160, 15);
			this->lborder->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lborder->Name = L"lborder";
			this->lborder->Size = System::Drawing::Size(253, 25);
			this->lborder->TabIndex = 16;
			this->lborder->Text = L"Order Details";
			this->lborder->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(17, 12);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Home Page  |  Order Status > Update Order";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelCustomer
			// 
			this->panelCustomer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelCustomer->Controls->Add(this->lbAddress);
			this->panelCustomer->Controls->Add(this->lbContact);
			this->panelCustomer->Controls->Add(this->tbAddress);
			this->panelCustomer->Controls->Add(this->tbContact);
			this->panelCustomer->Controls->Add(this->lbname);
			this->panelCustomer->Controls->Add(this->tbName);
			this->panelCustomer->Controls->Add(this->label2);
			this->panelCustomer->Location = System::Drawing::Point(9, 153);
			this->panelCustomer->Margin = System::Windows::Forms::Padding(4);
			this->panelCustomer->Name = L"panelCustomer";
			this->panelCustomer->Size = System::Drawing::Size(445, 233);
			this->panelCustomer->TabIndex = 21;
			// 
			// lbAddress
			// 
			this->lbAddress->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAddress->Location = System::Drawing::Point(25, 162);
			this->lbAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(127, 25);
			this->lbAddress->TabIndex = 25;
			this->lbAddress->Text = L"Address";
			// 
			// lbContact
			// 
			this->lbContact->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbContact->Location = System::Drawing::Point(20, 117);
			this->lbContact->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbContact->Name = L"lbContact";
			this->lbContact->Size = System::Drawing::Size(132, 25);
			this->lbContact->TabIndex = 24;
			this->lbContact->Text = L"Contact No.";
			// 
			// tbAddress
			// 
			this->tbAddress->BackColor = System::Drawing::SystemColors::Info;
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAddress->Location = System::Drawing::Point(160, 161);
			this->tbAddress->Margin = System::Windows::Forms::Padding(4);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(261, 26);
			this->tbAddress->TabIndex = 23;
			// 
			// tbContact
			// 
			this->tbContact->BackColor = System::Drawing::SystemColors::Info;
			this->tbContact->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbContact->Location = System::Drawing::Point(160, 116);
			this->tbContact->Margin = System::Windows::Forms::Padding(4);
			this->tbContact->Name = L"tbContact";
			this->tbContact->Size = System::Drawing::Size(261, 26);
			this->tbContact->TabIndex = 22;
			// 
			// lbname
			// 
			this->lbname->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(25, 74);
			this->lbname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(127, 25);
			this->lbname->TabIndex = 21;
			this->lbname->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Info;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(160, 71);
			this->tbName->Margin = System::Windows::Forms::Padding(4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(261, 26);
			this->tbName->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(108, 15);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(253, 25);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Customer Details";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panelsearch
			// 
			this->panelsearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelsearch->Controls->Add(this->cbContactNo);
			this->panelsearch->Controls->Add(this->lbSearch);
			this->panelsearch->Location = System::Drawing::Point(9, 68);
			this->panelsearch->Margin = System::Windows::Forms::Padding(4);
			this->panelsearch->Name = L"panelsearch";
			this->panelsearch->Size = System::Drawing::Size(1025, 76);
			this->panelsearch->TabIndex = 22;
			// 
			// cbContactNo
			// 
			this->cbContactNo->AllowDrop = true;
			this->cbContactNo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbContactNo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbContactNo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbContactNo->FormattingEnabled = true;
			this->cbContactNo->Location = System::Drawing::Point(285, 23);
			this->cbContactNo->Margin = System::Windows::Forms::Padding(4);
			this->cbContactNo->Name = L"cbContactNo";
			this->cbContactNo->Size = System::Drawing::Size(389, 31);
			this->cbContactNo->TabIndex = 19;
			this->cbContactNo->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateandCancel::cbContactNo_SelectedIndexChanged);
			// 
			// lbSearch
			// 
			this->lbSearch->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSearch->Location = System::Drawing::Point(24, 27);
			this->lbSearch->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbSearch->Name = L"lbSearch";
			this->lbSearch->Size = System::Drawing::Size(253, 25);
			this->lbSearch->TabIndex = 14;
			this->lbSearch->Text = L"Customer\'s Contact No.";
			// 
			// UpdateandCancel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1097, 621);
			this->Controls->Add(this->panelBG);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UpdateandCancel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UpdateandCancel";
			this->Load += gcnew System::EventHandler(this, &UpdateandCancel::UpdateandCancel_Load);
			this->panelBG->ResumeLayout(false);
			this->panelorder->ResumeLayout(false);
			this->panelorder->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpQty))->EndInit();
			this->panelCustomer->ResumeLayout(false);
			this->panelCustomer->PerformLayout();
			this->panelsearch->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		if (cbContactNo->Text == "") {
			MessageBox::Show("Please select a Contact Number.",
				"Error Message", MessageBoxButtons::OK);
			return;
		}
		if (listBoxOrder == nullptr || listBoxOrder->SelectedItem == nullptr) {
			MessageBox::Show("Please select an item.",
				"Error Message", MessageBoxButtons::OK);
			return;
		}

		StreamReader^ input_file = gcnew StreamReader("Orders/" + day + "_" + date + ".txt");
		StreamWriter^ write_file = gcnew StreamWriter("Orders/" + day + "_" + date + ".txt(1)");
		try {

			String^ order = "Food";
			int oldprice = 0;;
			int oldqty = 0;
			int newprice = 0;
			int newqty = 0;
			while (!input_file->EndOfStream) {
				String^ getline = input_file->ReadLine();

				if (getline == "in-process") { // to make sure order is processing
					write_file->WriteLine(getline); // has order status
					String^ line = input_file->ReadLine();
					array<String^>^ parts = line->Split('#');

					if (cbContactNo->Text == parts[2]) {	//found order

						String^ customerData = parts[0] + "#" + tbName->Text + "#" + tbContact->Text + "#" + tbAddress->Text;

						write_file->WriteLine(customerData);
						order = input_file->ReadLine();
						while (!order->Contains("price")) { // until we're calculating meal price

							array<String^>^ orderparts = listBoxOrder->Text->Split('_');
							String^ matchorder = orderparts[0] + "#" + orderparts[1] + "#" + orderparts[2] + "#" + orderparts[3];

							if (order == matchorder) { // MEAL found - listbox chosen order found in file, replace it

								oldprice = Convert::ToInt32(orderparts[2]);
								oldqty = Convert::ToInt32(orderparts[3]);
								newprice = Convert::ToInt32(tbItemPrice->Text);
								newqty = Convert::ToInt32(numericUpQty->Text);
								write_file->WriteLine(tbRestaurantName->Text + "#" + tbItem->Text + "#" + tbItemPrice->Text + "#" + numericUpQty->Text);
								// update the order
							}
							else {
								write_file->WriteLine(order); // copying orders that arent edited
							}
							order = input_file->ReadLine();
						}
						// we're still dealing with the same order so:
						// order has price line, change it 

						if (order->Contains("price")) {

							array<String^>^ priceparts = order->Split('#');
							int TOTAL = Convert::ToInt32(priceparts[4]); // final total
							int restotal = Convert::ToInt32(priceparts[1]); // restaurant total
							int oldtax = Convert::ToInt32(priceparts[2]);
							restotal = restotal - (oldprice * oldqty); // subtract old
							TOTAL = TOTAL - (oldprice * oldqty) - oldtax;
							restotal = restotal + (newprice * newqty); // add new stuff
							int newtax = restotal * 0.1; // 10% tax STORED AS <INT>
							TOTAL = TOTAL + (newprice * newqty) + newtax;

							// write these into file
							order = "price#" + Convert::ToString(restotal) + "#" + Convert::ToString(newtax) + "#500#" + Convert::ToString(TOTAL);
							write_file->WriteLine(order);
							line = input_file->ReadLine(); // copy driver info
							write_file->WriteLine(line);
						}
					}
					else {
						write_file->WriteLine(line);
					}
				}
				else {
					write_file->WriteLine(getline);
				}
			}
			input_file->Close();
			write_file->Close();
			File::Delete("Orders/" + this->day + "_" + date + ".txt");
			File::Move("Orders/" + this->day + "_" + date + ".txt(1)", "Orders/" + this->day + "_" + date + ".txt");
			MessageBox::Show("Order was successfully updated.",
				"Success Message", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			input_file->Close();
			write_file->Close();
			MessageBox::Show("Error on Reading/Writing to file: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void UpdateandCancel_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ filePath = "Orders/" + day + "_" + date + ".txt";

			if (File::Exists(filePath)) {
				StreamReader^ reader = gcnew StreamReader(filePath);

				while (!reader->EndOfStream) {
					String^ line = reader->ReadLine();
					if (line == "in-process") {
						String^ customer = reader->ReadLine();
						array<String^>^ parts = customer->Split('#');
						cbContactNo->Items->Add(parts[2]);
					}
				}
				reader->Close();
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error opening the file: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void cbContactNo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			listBoxOrder->Items->Clear();
			String^ selectedContact = cbContactNo->SelectedItem->ToString();
			String^ order = "Food";
			String^ filePath = "Orders/" + day + "_" + date + ".txt";

			if (File::Exists(filePath)) {
				StreamReader^ reader = gcnew StreamReader(filePath);

				while (!reader->EndOfStream) {
					String^ line = reader->ReadLine();

					if (line == "in-process") {
						String^ customer = reader->ReadLine();
						array<String^>^ parts = customer->Split('#');
						if (selectedContact == parts[2]) {
							tbName->Text = parts[1];
							tbContact->Text = parts[2];
							tbAddress->Text = parts[3];
							while (!order->Contains("price")) {
								order = reader->ReadLine();
								if (order->Contains("price"))
									break;
								array<String^>^ part = order->Split('#');
								listBoxOrder->Items->Add(part[0] + "_" + part[1] + "_" + part[2] + "_" + part[3]);
							}
							break;
						}
					}
				}
				reader->Close();
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void listBoxOrder_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ selectedItem = listBoxOrder->SelectedItem->ToString();
			array<String^>^ parts = selectedItem->Split('_');
			tbRestaurantName->Text = parts[0];
			tbItem->Text = parts[1];
			tbItemPrice->Text = parts[2];
			numericUpQty->Value = Convert::ToDecimal(parts[3]);
		}
		catch (Exception^ e) {
			MessageBox::Show("Error: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {

		if (cbContactNo->Text == "") {
			MessageBox::Show("Please select a Contact Number.",
				"Error Message", MessageBoxButtons::OK);
			return;
		}

		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to cancel the order?",
			"Cancel Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::No)
			return;
		// deletion code here
		try {
			StreamReader^ input_file = gcnew StreamReader("Orders/" + day + "_" + date + ".txt");
			StreamWriter^ write_file = gcnew StreamWriter("Orders/" + day + "_" + date + ".txt(1)");

			while (!input_file->EndOfStream) {
				String^ line = input_file->ReadLine();

				if (line == "in-process") { // to make sure order is processing
					String^ nextline = input_file->ReadLine();
					array<String^>^ parts = nextline->Split('#');
					if (cbContactNo->Text == parts[2]) {	//found order
						write_file->WriteLine("Cancelled");
						write_file->WriteLine(nextline);
					}
					else {
						write_file->WriteLine(line);
						write_file->WriteLine(nextline);
					}
				}
				else {
					write_file->WriteLine(line);
				}
			}
			input_file->Close();
			write_file->Close();
			File::Delete("Orders/" + this->day + "_" + date + ".txt");
			File::Move("Orders/" + this->day + "_" + date + ".txt(1)", "Orders/" + this->day + "_" + date + ".txt");
			MessageBox::Show("Order was successfully cancelled.",
				"Success Message", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error on Reading/Writing to file: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		this->Close();
	}
	private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}