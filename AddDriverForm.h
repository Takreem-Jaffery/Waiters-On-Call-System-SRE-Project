#include <fstream>
#include <msclr/marshal_cppstd.h>
#pragma once

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
	/// Summary for AddDriverForm
	/// </summary>
	public ref class AddDriverForm : public System::Windows::Forms::Form
	{
		ToolTip^ errorToolTip = gcnew ToolTip();
	public:
		AddDriverForm(void)
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
		~AddDriverForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbName;
	protected:
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Panel^ panelAddDriver;
	private: System::Windows::Forms::Label^ lbPhoneNo;

	private: System::Windows::Forms::TextBox^ tbCNIC;
	private: System::Windows::Forms::Label^ lbCNIC;
	private: System::Windows::Forms::Label^ lbReqFields;
	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Panel^ panelDriverInfo;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::Label^ lbDriverInfo;
	private: System::Windows::Forms::TextBox^ tbPhoneNo;
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
	private: System::Windows::Forms::ToolStrip^ toolStripAddDriver;




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
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->panelAddDriver = (gcnew System::Windows::Forms::Panel());
			this->lbReqFields = (gcnew System::Windows::Forms::Label());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panelDriverInfo = (gcnew System::Windows::Forms::Panel());
			this->toolStripAddDriver = (gcnew System::Windows::Forms::ToolStrip());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->lbDriverInfo = (gcnew System::Windows::Forms::Label());
			this->tbPhoneNo = (gcnew System::Windows::Forms::TextBox());
			this->lbPhoneNo = (gcnew System::Windows::Forms::Label());
			this->tbCNIC = (gcnew System::Windows::Forms::TextBox());
			this->lbCNIC = (gcnew System::Windows::Forms::Label());
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
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->panelAddDriver->SuspendLayout();
			this->panelDriverInfo->SuspendLayout();
			this->panelAddDriver2->SuspendLayout();
			this->panelDriverRef->SuspendLayout();
			this->panelDriverRef2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Info;
			this->tbName->Location = System::Drawing::Point(193, 84);
			this->tbName->Margin = System::Windows::Forms::Padding(4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(336, 22);
			this->tbName->TabIndex = 0;
			// 
			// lbName
			// 
			this->lbName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(36, 84);
			this->lbName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(149, 25);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Full Name*";
			// 
			// panelAddDriver
			// 
			this->panelAddDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelAddDriver->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panelAddDriver->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddDriver->Controls->Add(this->lbReqFields);
			this->panelAddDriver->Controls->Add(this->lbNavigation);
			this->panelAddDriver->Controls->Add(this->panelDriverInfo);
			this->panelAddDriver->Controls->Add(this->panelAddDriver2);
			this->panelAddDriver->Location = System::Drawing::Point(16, 15);
			this->panelAddDriver->Margin = System::Windows::Forms::Padding(4);
			this->panelAddDriver->Name = L"panelAddDriver";
			this->panelAddDriver->Size = System::Drawing::Size(1258, 511);
			this->panelAddDriver->TabIndex = 2;
			// 
			// lbReqFields
			// 
			this->lbReqFields->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbReqFields->Location = System::Drawing::Point(33, 441);
			this->lbReqFields->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbReqFields->Name = L"lbReqFields";
			this->lbReqFields->Size = System::Drawing::Size(360, 25);
			this->lbReqFields->TabIndex = 17;
			this->lbReqFields->Text = L"* are required fields";
			this->lbReqFields->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->lbNavigation->Text = L"Home Page  |  Driver > Add Driver";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelDriverInfo
			// 
			this->panelDriverInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
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
			this->panelDriverInfo->Location = System::Drawing::Point(27, 84);
			this->panelDriverInfo->Margin = System::Windows::Forms::Padding(4);
			this->panelDriverInfo->Name = L"panelDriverInfo";
			this->panelDriverInfo->Size = System::Drawing::Size(569, 321);
			this->panelDriverInfo->TabIndex = 19;
			// 
			// toolStripAddDriver
			// 
			this->toolStripAddDriver->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripAddDriver->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStripAddDriver->Location = System::Drawing::Point(0, 0);
			this->toolStripAddDriver->Name = L"toolStripAddDriver";
			this->toolStripAddDriver->Size = System::Drawing::Size(567, 25);
			this->toolStripAddDriver->TabIndex = 12;
			this->toolStripAddDriver->Text = L"Add Driver Tool Tip";
			this->toolStripAddDriver->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &AddDriverForm::toolStrip1_ItemClicked);
			// 
			// tbAddress
			// 
			this->tbAddress->BackColor = System::Drawing::SystemColors::Info;
			this->tbAddress->Location = System::Drawing::Point(193, 239);
			this->tbAddress->Margin = System::Windows::Forms::Padding(4);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(336, 22);
			this->tbAddress->TabIndex = 7;
			// 
			// lbAddress
			// 
			this->lbAddress->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAddress->Location = System::Drawing::Point(36, 239);
			this->lbAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(149, 25);
			this->lbAddress->TabIndex = 6;
			this->lbAddress->Text = L"Address*";
			// 
			// lbDriverInfo
			// 
			this->lbDriverInfo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDriverInfo->Location = System::Drawing::Point(124, 28);
			this->lbDriverInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDriverInfo->Name = L"lbDriverInfo";
			this->lbDriverInfo->Size = System::Drawing::Size(317, 25);
			this->lbDriverInfo->TabIndex = 11;
			this->lbDriverInfo->Text = L"Driver\'s Information";
			this->lbDriverInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbPhoneNo
			// 
			this->tbPhoneNo->BackColor = System::Drawing::SystemColors::Info;
			this->tbPhoneNo->Location = System::Drawing::Point(193, 188);
			this->tbPhoneNo->Margin = System::Windows::Forms::Padding(4);
			this->tbPhoneNo->Name = L"tbPhoneNo";
			this->tbPhoneNo->Size = System::Drawing::Size(336, 22);
			this->tbPhoneNo->TabIndex = 5;
			this->tbPhoneNo->TextChanged += gcnew System::EventHandler(this, &AddDriverForm::tbPhoneNo_TextChanged);
			this->tbPhoneNo->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddDriverForm::tbPhoneNo_Validating);
			// 
			// lbPhoneNo
			// 
			this->lbPhoneNo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPhoneNo->Location = System::Drawing::Point(36, 188);
			this->lbPhoneNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbPhoneNo->Name = L"lbPhoneNo";
			this->lbPhoneNo->Size = System::Drawing::Size(149, 25);
			this->lbPhoneNo->TabIndex = 4;
			this->lbPhoneNo->Text = L"Phone No.*";
			this->lbPhoneNo->Click += gcnew System::EventHandler(this, &AddDriverForm::label1_Click);
			// 
			// tbCNIC
			// 
			this->tbCNIC->BackColor = System::Drawing::SystemColors::Info;
			this->tbCNIC->Location = System::Drawing::Point(193, 137);
			this->tbCNIC->Margin = System::Windows::Forms::Padding(4);
			this->tbCNIC->Name = L"tbCNIC";
			this->tbCNIC->Size = System::Drawing::Size(336, 22);
			this->tbCNIC->TabIndex = 3;
			this->tbCNIC->TextChanged += gcnew System::EventHandler(this, &AddDriverForm::tbCNIC_TextChanged);
			this->tbCNIC->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddDriverForm::tbCNIC_Validating);
			// 
			// lbCNIC
			// 
			this->lbCNIC->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCNIC->Location = System::Drawing::Point(36, 137);
			this->lbCNIC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCNIC->Name = L"lbCNIC";
			this->lbCNIC->Size = System::Drawing::Size(149, 25);
			this->lbCNIC->TabIndex = 2;
			this->lbCNIC->Text = L"CNIC*";
			// 
			// panelAddDriver2
			// 
			this->panelAddDriver2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelAddDriver2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panelAddDriver2->Controls->Add(this->panelDriverRef);
			this->panelAddDriver2->Controls->Add(this->panelDriverRef2);
			this->panelAddDriver2->Location = System::Drawing::Point(604, 84);
			this->panelAddDriver2->Margin = System::Windows::Forms::Padding(4);
			this->panelAddDriver2->Name = L"panelAddDriver2";
			this->panelAddDriver2->Size = System::Drawing::Size(622, 321);
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
			this->panelDriverRef->Location = System::Drawing::Point(13, 11);
			this->panelDriverRef->Margin = System::Windows::Forms::Padding(4);
			this->panelDriverRef->Name = L"panelDriverRef";
			this->panelDriverRef->Size = System::Drawing::Size(601, 148);
			this->panelDriverRef->TabIndex = 10;
			// 
			// lbRef1PhoneNo
			// 
			this->lbRef1PhoneNo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRef1PhoneNo->Location = System::Drawing::Point(41, 101);
			this->lbRef1PhoneNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRef1PhoneNo->Name = L"lbRef1PhoneNo";
			this->lbRef1PhoneNo->Size = System::Drawing::Size(149, 25);
			this->lbRef1PhoneNo->TabIndex = 12;
			this->lbRef1PhoneNo->Text = L"Phone No.*";
			// 
			// tbRef1PhoneNo
			// 
			this->tbRef1PhoneNo->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef1PhoneNo->Location = System::Drawing::Point(199, 102);
			this->tbRef1PhoneNo->Margin = System::Windows::Forms::Padding(4);
			this->tbRef1PhoneNo->Name = L"tbRef1PhoneNo";
			this->tbRef1PhoneNo->Size = System::Drawing::Size(336, 22);
			this->tbRef1PhoneNo->TabIndex = 11;
			this->tbRef1PhoneNo->TextChanged += gcnew System::EventHandler(this, &AddDriverForm::tbRef1PhoneNo_TextChanged);
			this->tbRef1PhoneNo->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddDriverForm::tbRef1PhoneNo_Validating);
			// 
			// lbDriverRef
			// 
			this->lbDriverRef->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDriverRef->Location = System::Drawing::Point(171, 11);
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
			this->lbRef1->Location = System::Drawing::Point(41, 57);
			this->lbRef1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbRef1->Name = L"lbRef1";
			this->lbRef1->Size = System::Drawing::Size(149, 25);
			this->lbRef1->TabIndex = 9;
			this->lbRef1->Text = L"Name*";
			// 
			// tbRef1Name
			// 
			this->tbRef1Name->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef1Name->Location = System::Drawing::Point(199, 57);
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
			this->panelDriverRef2->Location = System::Drawing::Point(13, 167);
			this->panelDriverRef2->Margin = System::Windows::Forms::Padding(4);
			this->panelDriverRef2->Name = L"panelDriverRef2";
			this->panelDriverRef2->Size = System::Drawing::Size(601, 153);
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
			this->tbRef2PhoneNo->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef2PhoneNo->Location = System::Drawing::Point(199, 102);
			this->tbRef2PhoneNo->Margin = System::Windows::Forms::Padding(4);
			this->tbRef2PhoneNo->Name = L"tbRef2PhoneNo";
			this->tbRef2PhoneNo->Size = System::Drawing::Size(336, 22);
			this->tbRef2PhoneNo->TabIndex = 15;
			this->tbRef2PhoneNo->TextChanged += gcnew System::EventHandler(this, &AddDriverForm::tbRef2PhoneNo_TextChanged);
			this->tbRef2PhoneNo->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &AddDriverForm::tbRef2PhoneNo_Validating);
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
			this->tbRef2Name->BackColor = System::Drawing::SystemColors::Info;
			this->tbRef2Name->Location = System::Drawing::Point(199, 57);
			this->tbRef2Name->Margin = System::Windows::Forms::Padding(4);
			this->tbRef2Name->Name = L"tbRef2Name";
			this->tbRef2Name->Size = System::Drawing::Size(336, 22);
			this->tbRef2Name->TabIndex = 13;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnCancel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(28, 536);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(196, 97);
			this->btnCancel->TabIndex = 21;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddDriverForm::btnCancel_Click);
			// 
			// btnSave
			// 
			this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSave->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(1078, 536);
			this->btnSave->Margin = System::Windows::Forms::Padding(4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(196, 97);
			this->btnSave->TabIndex = 20;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &AddDriverForm::btnSave_Click);
			// 
			// AddDriverForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1298, 646);
			this->Controls->Add(this->panelAddDriver);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnCancel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AddDriverForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add Driver";
			this->Load += gcnew System::EventHandler(this, &AddDriverForm::AddDriverForm_Load);
			this->panelAddDriver->ResumeLayout(false);
			this->panelDriverInfo->ResumeLayout(false);
			this->panelDriverInfo->PerformLayout();
			this->panelAddDriver2->ResumeLayout(false);
			this->panelDriverRef->ResumeLayout(false);
			this->panelDriverRef->PerformLayout();
			this->panelDriverRef2->ResumeLayout(false);
			this->panelDriverRef2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddDriverForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->tbName->Text;
		String^ CNIC = this->tbCNIC->Text;
		String^ phoneNo = this->tbPhoneNo->Text;
		String^ address = this->tbAddress->Text;
		String^ ref1Name = this->tbRef1Name->Text;
		String^ ref1PhoneNo = this->tbRef1PhoneNo->Text;
		String^ ref2Name = this->tbRef2Name->Text;
		String^ ref2PhoneNo = this->tbRef2PhoneNo->Text;

		if (name->Trim() == "" || CNIC->Trim() == "" || phoneNo->Trim() == ""
			|| address->Trim() == "" || ref1Name->Trim() == "" || ref1PhoneNo->Trim() == "") {
			errorToolTip->Show(" * required fields can not be empty", tbName);
			return;
		}


		String^ driverData = name + "#" + CNIC + "#" + phoneNo + "#" + address + "#" + ref1Name + "#" + ref1PhoneNo + "#" + ref2Name + "#" + ref2PhoneNo;
		String^ filePath = "Drivers\\Drivers.txt";

		try {

			if (File::Exists(filePath)) {
				StreamReader^ reader = gcnew StreamReader(filePath);
				while (!reader->EndOfStream) {
					String^ line = reader->ReadLine();
					array<String^>^ parts = line->Split('#');

					if (parts->Length > 1 && parts[1] == CNIC) {
						reader->Close();
						MessageBox::Show("CNIC already exists in the file.", "Error",
							MessageBoxButtons::OK, MessageBoxIcon::Error);
						tbCNIC->Text = "";
						return;
					}
				}
				reader->Close();
			}

			StreamWriter^ writer = gcnew StreamWriter(filePath, true); // true for appending
			writer->WriteLine("FREE");
			writer->WriteLine(driverData);
			writer->Close();

			MessageBox::Show("Driver was added to the database.",
				"Success Message", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Error saving the file: " + e->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void tbCNIC_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbPhoneNo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbRef1PhoneNo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbRef2PhoneNo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void tbCNIC_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ cnicText = tbCNIC->Text;
		for (int i = 0; i < cnicText->Length; i++) {
			if (!Char::IsDigit(cnicText[i])) {
				e->Cancel = true;  // Cancel the event to keep focus on the control
				tbCNIC->Text = "";
				errorToolTip->Show("CNIC can only be numerical", tbCNIC);
				errorToolTip->AutoPopDelay = 1000;
				tbCNIC->Focus();
				return;
			}
		}
		if (cnicText->Length != 13) {
			errorToolTip->Show("CNIC can only be 13 characters long", tbCNIC);
			return;
		}
	}
	private: System::Void tbPhoneNo_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ Text = tbPhoneNo->Text;
		for (int i = 0; i < Text->Length; i++) {
			if (!Char::IsDigit(Text[i])) {
				e->Cancel = true;  // Cancel the event to keep focus on the control
				tbPhoneNo->Text = "";
				errorToolTip->Show("Phone Number can only be numerical", tbPhoneNo);
				errorToolTip->AutoPopDelay = 1000;
				tbPhoneNo->Focus();
				return;
			}
		}
	
		if (!Text->StartsWith("0"))
		{
			//MessageBox::Show("Contact number should start with 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbPhoneNo->Text = "";
			errorToolTip->Show("Phone number should start with 0", tbPhoneNo);
			errorToolTip->AutoPopDelay = 1000;
			tbPhoneNo->Focus();
			return;
		}
		if (Text->Length != 11)
		{
			//MessageBox::Show("Contact number should only have 11 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbPhoneNo->Text = "";
			errorToolTip->Show("Phone Number should only have 11 digits", tbPhoneNo);
			errorToolTip->AutoPopDelay = 1000;
			tbPhoneNo->Focus();
			return;
		}
	}
	private: System::Void tbRef1PhoneNo_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ Text = tbRef1PhoneNo->Text;
		for (int i = 0; i < Text->Length; i++) {
			if (!Char::IsDigit(Text[i])) {
				e->Cancel = true;  // Cancel the event to keep focus on the control
				tbRef1PhoneNo->Text = "";
				errorToolTip->Show("Phone Number can only be numerical", tbRef1PhoneNo);
				errorToolTip->AutoPopDelay = 1000;
				tbRef1PhoneNo->Focus();
				return;
			}
		}
		if (!Text->StartsWith("0"))
		{
			//MessageBox::Show("Contact number should start with 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbRef1PhoneNo->Text = "";
			errorToolTip->Show("Phone number should start with 0", tbRef1PhoneNo);
			errorToolTip->AutoPopDelay = 1000;
			tbRef1PhoneNo->Focus();
			return;
		}
		if (Text->Length != 11)
		{
			//MessageBox::Show("Contact number should only have 11 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbRef1PhoneNo->Text = "";
			errorToolTip->Show("Phone Number should only have 11 digits", tbRef1PhoneNo);
			errorToolTip->AutoPopDelay = 1000;
			tbRef1PhoneNo->Focus();
			return;
		}
	}
	private: System::Void tbRef2PhoneNo_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		String^ Text = tbRef2PhoneNo->Text;
		for (int i = 0; i < Text->Length; i++) {
			if (!Char::IsDigit(Text[i])) {
				e->Cancel = true;  // Cancel the event to keep focus on the control
				tbRef2PhoneNo->Text = "";
				errorToolTip->Show("Phone Number can only be numerical", tbRef2PhoneNo);
				errorToolTip->AutoPopDelay = 1000;
				tbRef2PhoneNo->Focus();
				return;
			}
		}
		if (!Text->StartsWith("0"))
		{
			//MessageBox::Show("Contact number should start with 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbRef2PhoneNo->Text = "";
			errorToolTip->Show("Phone number should start with 0", tbRef2PhoneNo);
			errorToolTip->AutoPopDelay = 1000;
			tbRef2PhoneNo->Focus();
			return;
		}
		if (Text->Length != 11)
		{
			//MessageBox::Show("Contact number should only have 11 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tbRef2PhoneNo->Text = "";
			errorToolTip->Show("Phone Number should only have 11 digits", tbRef2PhoneNo);
			errorToolTip->AutoPopDelay = 1000;
			tbRef2PhoneNo->Focus();
			return;
		}
	}
	};
}
