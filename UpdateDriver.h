#pragma once
#include <fstream>
#include <msclr/marshal_cppstd.h>

namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for UpdateDriver
	/// </summary>
	public ref class UpdateDriver : public System::Windows::Forms::Form
	{
		ToolTip^ errorToolTip = gcnew ToolTip();
	public:
		UpdateDriver(void)
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
		~UpdateDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelAddDriver;
	protected:

	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSaveChanges;

	private: System::Windows::Forms::Panel^ panelDriverInfo;
	private: System::Windows::Forms::ToolStrip^ toolStripAddDriver;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::Label^ lbDriverInfo;
	private: System::Windows::Forms::TextBox^ tbPhoneNo;
	private: System::Windows::Forms::Label^ lbPhoneNo;
	private: System::Windows::Forms::TextBox^ tbCNIC;
	private: System::Windows::Forms::Label^ lbCNIC;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Panel^ panelAddDriver2;
	private: System::Windows::Forms::Panel^ panelDriverRef;
	private: System::Windows::Forms::Label^ lbRef1PhoneNo;
	private: System::Windows::Forms::TextBox^ tbRef1PhoneNo;
	private: System::Windows::Forms::Label^ lbDriverRef;
	private: System::Windows::Forms::Label^ lbRef1;
	private: System::Windows::Forms::TextBox^ tbRef1Name;
	private: System::Windows::Forms::Panel^ panelDriverRef2;
	private: System::Windows::Forms::Label^ lbOptionalRef;
	private: System::Windows::Forms::Label^ lbRef2PhoneNo;
	private: System::Windows::Forms::TextBox^ tbRef2PhoneNo;
	private: System::Windows::Forms::Label^ lbRef2Name;
	private: System::Windows::Forms::TextBox^ tbRef2Name;
	private: System::Windows::Forms::Label^ lbSearchCNIC;
	private: System::Windows::Forms::ComboBox^ cbCNIC;
	private: System::Windows::Forms::Panel^ panelsearch;



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
			this->panelAddDriver = (gcnew System::Windows::Forms::Panel());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSaveChanges = (gcnew System::Windows::Forms::Button());
			this->panelAddDriver2 = (gcnew System::Windows::Forms::Panel());
			this->panelDriverRef = (gcnew System::Windows::Forms::Panel());
			this->lbRef1PhoneNo = (gcnew System::Windows::Forms::Label());
			this->tbRef1PhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->lbDriverRef = (gcnew System::Windows::Forms::Label());
			this->lbRef1 = (gcnew System::Windows::Forms::Label());
			this->tbRef1Name = (gcnew System::Windows::Forms::TextBox());
			this->panelDriverRef2 = (gcnew System::Windows::Forms::Panel());
			this->lbOptionalRef = (gcnew System::Windows::Forms::Label());
			this->lbRef2PhoneNo = (gcnew System::Windows::Forms::Label());
			this->tbRef2PhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->lbRef2Name = (gcnew System::Windows::Forms::Label());
			this->tbRef2Name = (gcnew System::Windows::Forms::TextBox());
			this->panelsearch = (gcnew System::Windows::Forms::Panel());
			this->lbSearchCNIC = (gcnew System::Windows::Forms::Label());
			this->cbCNIC = (gcnew System::Windows::Forms::ComboBox());
			this->panelDriverInfo = (gcnew System::Windows::Forms::Panel());
			this->toolStripAddDriver = (gcnew System::Windows::Forms::ToolStrip());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->lbDriverInfo = (gcnew System::Windows::Forms::Label());
			this->tbPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->lbPhoneNo = (gcnew System::Windows::Forms::Label());
			this->tbCNIC = (gcnew System::Windows::Forms::TextBox());
			this->lbCNIC = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->panelAddDriver->SuspendLayout();
			this->panelAddDriver2->SuspendLayout();
			this->panelDriverRef->SuspendLayout();
			this->panelDriverRef2->SuspendLayout();
			this->panelsearch->SuspendLayout();
			this->panelDriverInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelAddDriver
			// 
			this->panelAddDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelAddDriver->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelAddDriver->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddDriver->Controls->Add(this->lbNavigation);
			this->panelAddDriver->Controls->Add(this->btnCancel);
			this->panelAddDriver->Controls->Add(this->btnSaveChanges);
			this->panelAddDriver->Controls->Add(this->panelAddDriver2);
			this->panelAddDriver->Location = System::Drawing::Point(16, 15);
			this->panelAddDriver->Margin = System::Windows::Forms::Padding(4);
			this->panelAddDriver->Name = L"panelAddDriver";
			this->panelAddDriver->Size = System::Drawing::Size(1267, 616);
			this->panelAddDriver->TabIndex = 3;
			this->panelAddDriver->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UpdateDriver::panelAddDriver_Paint);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(13, 23);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 12;
			this->lbNavigation->Text = L"Home Page  |  Driver > Update Driver";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnCancel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(26, 513);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(196, 97);
			this->btnCancel->TabIndex = 21;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UpdateDriver::btnCancel_Click);
			// 
			// btnSaveChanges
			// 
			this->btnSaveChanges->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSaveChanges->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnSaveChanges->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSaveChanges->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSaveChanges->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveChanges->Location = System::Drawing::Point(1036, 513);
			this->btnSaveChanges->Margin = System::Windows::Forms::Padding(4);
			this->btnSaveChanges->Name = L"btnSaveChanges";
			this->btnSaveChanges->Size = System::Drawing::Size(196, 97);
			this->btnSaveChanges->TabIndex = 20;
			this->btnSaveChanges->Text = L"Save Changes";
			this->btnSaveChanges->UseVisualStyleBackColor = false;
			this->btnSaveChanges->Click += gcnew System::EventHandler(this, &UpdateDriver::btnSaveChanges_Click);
			// 
			// panelAddDriver2
			// 
			this->panelAddDriver2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelAddDriver2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panelAddDriver2->Controls->Add(this->panelDriverRef);
			this->panelAddDriver2->Controls->Add(this->panelDriverRef2);
			this->panelAddDriver2->Controls->Add(this->panelsearch);
			this->panelAddDriver2->Controls->Add(this->panelDriverInfo);
			this->panelAddDriver2->Location = System::Drawing::Point(27, 84);
			this->panelAddDriver2->Margin = System::Windows::Forms::Padding(4);
			this->panelAddDriver2->Name = L"panelAddDriver2";
			this->panelAddDriver2->Size = System::Drawing::Size(1205, 421);
			this->panelAddDriver2->TabIndex = 18;
			// 
			// panelDriverRef
			// 
			this->panelDriverRef->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelDriverRef->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelDriverRef->Controls->Add(this->lbRef1PhoneNo);
			this->panelDriverRef->Controls->Add(this->tbRef1PhoneNo);
			this->panelDriverRef->Controls->Add(this->lbDriverRef);
			this->panelDriverRef->Controls->Add(this->lbRef1);
			this->panelDriverRef->Controls->Add(this->tbRef1Name);
			this->panelDriverRef->Location = System::Drawing::Point(596, 97);
			this->panelDriverRef->Margin = System::Windows::Forms::Padding(4);
			this->panelDriverRef->Name = L"panelDriverRef";
			this->panelDriverRef->Size = System::Drawing::Size(601, 156);
			this->panelDriverRef->TabIndex = 10;
			// 
			// lbRef1PhoneNo
			// 
			this->lbRef1PhoneNo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRef1PhoneNo->Location = System::Drawing::Point(41, 105);
			this->lbRef1PhoneNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRef1PhoneNo->Name = L"lbRef1PhoneNo";
			this->lbRef1PhoneNo->Size = System::Drawing::Size(149, 25);
			this->lbRef1PhoneNo->TabIndex = 12;
			this->lbRef1PhoneNo->Text = L"Phone No.";
			// 
			// tbRef1PhoneNo
			// 
			this->tbRef1PhoneNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRef1PhoneNo->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef1PhoneNo->Location = System::Drawing::Point(198, 108);
			this->tbRef1PhoneNo->Margin = System::Windows::Forms::Padding(4);
			this->tbRef1PhoneNo->Name = L"tbRef1PhoneNo";
			this->tbRef1PhoneNo->Size = System::Drawing::Size(336, 22);
			this->tbRef1PhoneNo->TabIndex = 11;
			// 
			// lbDriverRef
			// 
			this->lbDriverRef->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDriverRef->Location = System::Drawing::Point(171, 15);
			this->lbDriverRef->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDriverRef->Name = L"lbDriverRef";
			this->lbDriverRef->Size = System::Drawing::Size(317, 25);
			this->lbDriverRef->TabIndex = 10;
			this->lbDriverRef->Text = L"Driver\'s Reference Information";
			this->lbDriverRef->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbRef1
			// 
			this->lbRef1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRef1->Location = System::Drawing::Point(41, 60);
			this->lbRef1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRef1->Name = L"lbRef1";
			this->lbRef1->Size = System::Drawing::Size(149, 25);
			this->lbRef1->TabIndex = 9;
			this->lbRef1->Text = L"Name";
			// 
			// tbRef1Name
			// 
			this->tbRef1Name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRef1Name->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef1Name->Location = System::Drawing::Point(199, 60);
			this->tbRef1Name->Margin = System::Windows::Forms::Padding(4);
			this->tbRef1Name->Name = L"tbRef1Name";
			this->tbRef1Name->Size = System::Drawing::Size(336, 22);
			this->tbRef1Name->TabIndex = 8;
			// 
			// panelDriverRef2
			// 
			this->panelDriverRef2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->panelDriverRef2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelDriverRef2->Controls->Add(this->lbOptionalRef);
			this->panelDriverRef2->Controls->Add(this->lbRef2PhoneNo);
			this->panelDriverRef2->Controls->Add(this->tbRef2PhoneNo);
			this->panelDriverRef2->Controls->Add(this->lbRef2Name);
			this->panelDriverRef2->Controls->Add(this->tbRef2Name);
			this->panelDriverRef2->Location = System::Drawing::Point(595, 263);
			this->panelDriverRef2->Margin = System::Windows::Forms::Padding(4);
			this->panelDriverRef2->Name = L"panelDriverRef2";
			this->panelDriverRef2->Size = System::Drawing::Size(601, 139);
			this->panelDriverRef2->TabIndex = 17;
			// 
			// lbOptionalRef
			// 
			this->lbOptionalRef->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbOptionalRef->Location = System::Drawing::Point(171, 11);
			this->lbOptionalRef->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbOptionalRef->Name = L"lbOptionalRef";
			this->lbOptionalRef->Size = System::Drawing::Size(317, 25);
			this->lbOptionalRef->TabIndex = 13;
			this->lbOptionalRef->Text = L"Optional Reference ";
			this->lbOptionalRef->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbRef2PhoneNo
			// 
			this->lbRef2PhoneNo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRef2PhoneNo->Location = System::Drawing::Point(41, 101);
			this->lbRef2PhoneNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRef2PhoneNo->Name = L"lbRef2PhoneNo";
			this->lbRef2PhoneNo->Size = System::Drawing::Size(149, 25);
			this->lbRef2PhoneNo->TabIndex = 16;
			this->lbRef2PhoneNo->Text = L"Phone No.";
			// 
			// tbRef2PhoneNo
			// 
			this->tbRef2PhoneNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRef2PhoneNo->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef2PhoneNo->Location = System::Drawing::Point(199, 102);
			this->tbRef2PhoneNo->Margin = System::Windows::Forms::Padding(4);
			this->tbRef2PhoneNo->Name = L"tbRef2PhoneNo";
			this->tbRef2PhoneNo->Size = System::Drawing::Size(336, 22);
			this->tbRef2PhoneNo->TabIndex = 15;
			// 
			// lbRef2Name
			// 
			this->lbRef2Name->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRef2Name->Location = System::Drawing::Point(41, 57);
			this->lbRef2Name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRef2Name->Name = L"lbRef2Name";
			this->lbRef2Name->Size = System::Drawing::Size(149, 25);
			this->lbRef2Name->TabIndex = 14;
			this->lbRef2Name->Text = L"Name";
			// 
			// tbRef2Name
			// 
			this->tbRef2Name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRef2Name->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef2Name->Location = System::Drawing::Point(199, 57);
			this->tbRef2Name->Margin = System::Windows::Forms::Padding(4);
			this->tbRef2Name->Name = L"tbRef2Name";
			this->tbRef2Name->Size = System::Drawing::Size(336, 22);
			this->tbRef2Name->TabIndex = 13;
			// 
			// panelsearch
			// 
			this->panelsearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelsearch->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panelsearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelsearch->Controls->Add(this->lbSearchCNIC);
			this->panelsearch->Controls->Add(this->cbCNIC);
			this->panelsearch->Location = System::Drawing::Point(4, 4);
			this->panelsearch->Margin = System::Windows::Forms::Padding(4);
			this->panelsearch->Name = L"panelsearch";
			this->panelsearch->Size = System::Drawing::Size(1192, 83);
			this->panelsearch->TabIndex = 19;
			// 
			// lbSearchCNIC
			// 
			this->lbSearchCNIC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSearchCNIC->Location = System::Drawing::Point(36, 30);
			this->lbSearchCNIC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbSearchCNIC->Name = L"lbSearchCNIC";
			this->lbSearchCNIC->Size = System::Drawing::Size(149, 25);
			this->lbSearchCNIC->TabIndex = 13;
			this->lbSearchCNIC->Text = L"Search CNIC";
			// 
			// cbCNIC
			// 
			this->cbCNIC->AllowDrop = true;
			this->cbCNIC->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCNIC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbCNIC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCNIC->FormattingEnabled = true;
			this->cbCNIC->Location = System::Drawing::Point(193, 23);
			this->cbCNIC->Margin = System::Windows::Forms::Padding(4);
			this->cbCNIC->Name = L"cbCNIC";
			this->cbCNIC->Size = System::Drawing::Size(337, 31);
			this->cbCNIC->TabIndex = 18;
			this->cbCNIC->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateDriver::cbCNIC_SelectedIndexChanged);
			// 
			// panelDriverInfo
			// 
			this->panelDriverInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelDriverInfo->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panelDriverInfo->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelDriverInfo->Controls->Add(this->toolStripAddDriver);
			this->panelDriverInfo->Controls->Add(this->tbAddress);
			this->panelDriverInfo->Controls->Add(this->lbAddress);
			this->panelDriverInfo->Controls->Add(this->lbDriverInfo);
			this->panelDriverInfo->Controls->Add(this->tbPhoneNo);
			this->panelDriverInfo->Controls->Add(this->lbPhoneNo);
			this->panelDriverInfo->Controls->Add(this->tbCNIC);
			this->panelDriverInfo->Controls->Add(this->lbCNIC);
			this->panelDriverInfo->Controls->Add(this->lbName);
			this->panelDriverInfo->Controls->Add(this->tbName);
			this->panelDriverInfo->Location = System::Drawing::Point(4, 96);
			this->panelDriverInfo->Margin = System::Windows::Forms::Padding(4);
			this->panelDriverInfo->Name = L"panelDriverInfo";
			this->panelDriverInfo->Size = System::Drawing::Size(584, 306);
			this->panelDriverInfo->TabIndex = 19;
			// 
			// toolStripAddDriver
			// 
			this->toolStripAddDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolStripAddDriver->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStripAddDriver->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripAddDriver->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStripAddDriver->Location = System::Drawing::Point(0, 0);
			this->toolStripAddDriver->Name = L"toolStripAddDriver";
			this->toolStripAddDriver->Size = System::Drawing::Size(112, 25);
			this->toolStripAddDriver->TabIndex = 12;
			this->toolStripAddDriver->Text = L"Add Driver Tool Tip";
			// 
			// tbAddress
			// 
			this->tbAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbAddress->BackColor = System::Drawing::SystemColors::Info;
			this->tbAddress->Location = System::Drawing::Point(193, 241);
			this->tbAddress->Margin = System::Windows::Forms::Padding(4);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(355, 22);
			this->tbAddress->TabIndex = 7;
			// 
			// lbAddress
			// 
			this->lbAddress->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAddress->Location = System::Drawing::Point(36, 241);
			this->lbAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(149, 25);
			this->lbAddress->TabIndex = 6;
			this->lbAddress->Text = L"Address";
			// 
			// lbDriverInfo
			// 
			this->lbDriverInfo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDriverInfo->Location = System::Drawing::Point(124, 31);
			this->lbDriverInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDriverInfo->Name = L"lbDriverInfo";
			this->lbDriverInfo->Size = System::Drawing::Size(317, 25);
			this->lbDriverInfo->TabIndex = 11;
			this->lbDriverInfo->Text = L"Driver\'s Information";
			this->lbDriverInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbPhoneNo
			// 
			this->tbPhoneNo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPhoneNo->BackColor = System::Drawing::SystemColors::Info;
			this->tbPhoneNo->Location = System::Drawing::Point(193, 191);
			this->tbPhoneNo->Margin = System::Windows::Forms::Padding(4);
			this->tbPhoneNo->Name = L"tbPhoneNo";
			this->tbPhoneNo->Size = System::Drawing::Size(355, 22);
			this->tbPhoneNo->TabIndex = 5;
			// 
			// lbPhoneNo
			// 
			this->lbPhoneNo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPhoneNo->Location = System::Drawing::Point(36, 191);
			this->lbPhoneNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbPhoneNo->Name = L"lbPhoneNo";
			this->lbPhoneNo->Size = System::Drawing::Size(149, 25);
			this->lbPhoneNo->TabIndex = 4;
			this->lbPhoneNo->Text = L"Phone No.";
			// 
			// tbCNIC
			// 
			this->tbCNIC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbCNIC->BackColor = System::Drawing::SystemColors::Info;
			this->tbCNIC->Location = System::Drawing::Point(193, 139);
			this->tbCNIC->Margin = System::Windows::Forms::Padding(4);
			this->tbCNIC->Name = L"tbCNIC";
			this->tbCNIC->Size = System::Drawing::Size(355, 22);
			this->tbCNIC->TabIndex = 3;
			// 
			// lbCNIC
			// 
			this->lbCNIC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCNIC->Location = System::Drawing::Point(36, 139);
			this->lbCNIC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCNIC->Name = L"lbCNIC";
			this->lbCNIC->Size = System::Drawing::Size(149, 25);
			this->lbCNIC->TabIndex = 2;
			this->lbCNIC->Text = L"CNIC";
			// 
			// lbName
			// 
			this->lbName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(36, 86);
			this->lbName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(149, 25);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Full Name";
			// 
			// tbName
			// 
			this->tbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbName->BackColor = System::Drawing::SystemColors::Info;
			this->tbName->Location = System::Drawing::Point(193, 86);
			this->tbName->Margin = System::Windows::Forms::Padding(4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(355, 22);
			this->tbName->TabIndex = 0;
			// 
			// UpdateDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1298, 646);
			this->Controls->Add(this->panelAddDriver);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UpdateDriver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Update Driver";
			this->Load += gcnew System::EventHandler(this, &UpdateDriver::UpdateDriver_Load);
			this->panelAddDriver->ResumeLayout(false);
			this->panelAddDriver2->ResumeLayout(false);
			this->panelDriverRef->ResumeLayout(false);
			this->panelDriverRef->PerformLayout();
			this->panelDriverRef2->ResumeLayout(false);
			this->panelDriverRef2->PerformLayout();
			this->panelsearch->ResumeLayout(false);
			this->panelDriverInfo->ResumeLayout(false);
			this->panelDriverInfo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panelAddDriver_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void cbCNIC_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ selectedCNIC = cbCNIC->SelectedItem->ToString();
			String^ filePath = "Drivers\\Drivers.txt";
			if (File::Exists(filePath)) {
				StreamReader^ reader = gcnew StreamReader(filePath);
				while (!reader->EndOfStream) {
					String^ extra = reader->ReadLine();
					String^ line = reader->ReadLine();
					array<String^>^ parts = line->Split('#');
					if (selectedCNIC == parts[1]) {
						tbName->Text = parts[0];
						tbCNIC->Text = parts[1];
						tbPhoneNo->Text = parts[2];
						tbAddress->Text = parts[3];
						tbRef1Name->Text = parts[4];
						tbRef1PhoneNo->Text = parts[5];
						if (parts->Length > 6) {
							tbRef2Name->Text = parts[6];
							tbRef2PhoneNo->Text = parts[7];
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
	private: System::Void UpdateDriver_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ filePath = "Drivers\\Drivers.txt";
			if (File::Exists(filePath)) {
				StreamReader^ reader = gcnew StreamReader(filePath);
				while (!reader->EndOfStream) {
					String^ extra = reader->ReadLine();
					String^ line = reader->ReadLine();
					array<String^>^ parts = line->Split('#');
					cbCNIC->Items->Add(parts[1]);
					//extra = reader->ReadLine();
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
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnSaveChanges_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cbCNIC->Text == "") {
			errorToolTip->Show("Please select a CNIC", cbCNIC);
			errorToolTip->AutoPopDelay = 1000;
			return;
		}
		try {
			String^ selectedCNIC = cbCNIC->SelectedItem->ToString();
			String^ filePathRead = "Drivers\\Drivers.txt";
			String^ filePathWrite = "Drivers\\Drivers(1).txt";
			if (File::Exists(filePathRead)) {
				StreamReader^ reader = gcnew StreamReader(filePathRead);
				StreamWriter^ writer = gcnew StreamWriter(filePathWrite, true); // true for appending

				while (!reader->EndOfStream) {

					String^ status = reader->ReadLine();
					String^ line = reader->ReadLine();
					array<String^>^ parts = line->Split('#');

					if (selectedCNIC == parts[1]) {
						// driver to update found -> append new info to (1) file
						String^ driverData = tbName->Text + "#" + tbCNIC->Text + "#" + tbPhoneNo->Text + "#" + tbAddress->Text + "#" + tbRef1Name->Text + "#" + tbRef1PhoneNo->Text + "#" + tbRef2Name->Text + "#" + tbRef2PhoneNo->Text;
						writer->WriteLine(status);
						writer->WriteLine(driverData);
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
				MessageBox::Show("Driver information was successfully updated in the database.",
					"Success Message", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error opening the file: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	};
}
