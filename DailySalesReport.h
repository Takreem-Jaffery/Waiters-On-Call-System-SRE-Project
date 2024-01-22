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
	/// Summary for DailySalesReport
	/// </summary>
	public ref class DailySalesReport : public System::Windows::Forms::Form
	{
		String^ date;
	private: System::Windows::Forms::Panel^ panelBG;
	private: System::Windows::Forms::Panel^ panelweekly;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Label^ lbtotalsales;
	private: System::Windows::Forms::TextBox^ tbsales;
	private: System::Windows::Forms::ListBox^ listboxdate;
	private: System::Windows::Forms::Label^ lbdaily;
	private: System::Windows::Forms::Button^ btnback;
	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Panel^ panelsearch;
	private: System::Windows::Forms::Label^ labeldate;
	private: System::Windows::Forms::Label^ labelday;
	private: System::Windows::Forms::TextBox^ tbdate;
	private: System::Windows::Forms::TextBox^ tbday;
	private: System::Windows::Forms::Label^ lbdate;
	private: System::Windows::Forms::DateTimePicker^ datePicker;
		   String^ day;
	public:
		DailySalesReport(String^ date, String^ day)
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
		~DailySalesReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGenerateSlip;
	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DailySalesReport::typeid));
			this->btnGenerateSlip = (gcnew System::Windows::Forms::Button());
			this->panelBG = (gcnew System::Windows::Forms::Panel());
			this->panelweekly = (gcnew System::Windows::Forms::Panel());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->lbtotalsales = (gcnew System::Windows::Forms::Label());
			this->tbsales = (gcnew System::Windows::Forms::TextBox());
			this->listboxdate = (gcnew System::Windows::Forms::ListBox());
			this->lbdaily = (gcnew System::Windows::Forms::Label());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panelsearch = (gcnew System::Windows::Forms::Panel());
			this->labeldate = (gcnew System::Windows::Forms::Label());
			this->labelday = (gcnew System::Windows::Forms::Label());
			this->tbdate = (gcnew System::Windows::Forms::TextBox());
			this->tbday = (gcnew System::Windows::Forms::TextBox());
			this->lbdate = (gcnew System::Windows::Forms::Label());
			this->datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->panelBG->SuspendLayout();
			this->panelweekly->SuspendLayout();
			this->panelsearch->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGenerateSlip
			// 
			this->btnGenerateSlip->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerateSlip->Location = System::Drawing::Point(140, 263);
			this->btnGenerateSlip->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGenerateSlip->Name = L"btnGenerateSlip";
			this->btnGenerateSlip->Size = System::Drawing::Size(245, 38);
			this->btnGenerateSlip->TabIndex = 4;
			this->btnGenerateSlip->Text = L"Generate Deposit Slip";
			this->btnGenerateSlip->UseVisualStyleBackColor = true;
			this->btnGenerateSlip->Click += gcnew System::EventHandler(this, &DailySalesReport::btnGenerateSlip_Click);
			// 
			// panelBG
			// 
			this->panelBG->Controls->Add(this->panelweekly);
			this->panelBG->Controls->Add(this->btnback);
			this->panelBG->Controls->Add(this->lbNavigation);
			this->panelBG->Controls->Add(this->panelsearch);
			this->panelBG->Location = System::Drawing::Point(16, 15);
			this->panelBG->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelBG->Name = L"panelBG";
			this->panelBG->Size = System::Drawing::Size(875, 398);
			this->panelBG->TabIndex = 7;
			// 
			// panelweekly
			// 
			this->panelweekly->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelweekly->Controls->Add(this->btnOK);
			this->panelweekly->Controls->Add(this->lbtotalsales);
			this->panelweekly->Controls->Add(this->tbsales);
			this->panelweekly->Controls->Add(this->listboxdate);
			this->panelweekly->Controls->Add(this->lbdaily);
			this->panelweekly->Location = System::Drawing::Point(428, 71);
			this->panelweekly->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelweekly->Name = L"panelweekly";
			this->panelweekly->Size = System::Drawing::Size(438, 320);
			this->panelweekly->TabIndex = 28;
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(307, 267);
			this->btnOK->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(105, 34);
			this->btnOK->TabIndex = 40;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &DailySalesReport::btnOK_Click);
			// 
			// lbtotalsales
			// 
			this->lbtotalsales->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbtotalsales->Location = System::Drawing::Point(77, 220);
			this->lbtotalsales->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbtotalsales->Name = L"lbtotalsales";
			this->lbtotalsales->Size = System::Drawing::Size(113, 25);
			this->lbtotalsales->TabIndex = 38;
			this->lbtotalsales->Text = L"Total Sales";
			// 
			// tbsales
			// 
			this->tbsales->BackColor = System::Drawing::SystemColors::Info;
			this->tbsales->Enabled = false;
			this->tbsales->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsales->Location = System::Drawing::Point(199, 220);
			this->tbsales->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbsales->Name = L"tbsales";
			this->tbsales->Size = System::Drawing::Size(212, 30);
			this->tbsales->TabIndex = 38;
			// 
			// listboxdate
			// 
			this->listboxdate->Enabled = false;
			this->listboxdate->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listboxdate->FormattingEnabled = true;
			this->listboxdate->ItemHeight = 18;
			this->listboxdate->Location = System::Drawing::Point(19, 64);
			this->listboxdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listboxdate->Name = L"listboxdate";
			this->listboxdate->Size = System::Drawing::Size(392, 112);
			this->listboxdate->TabIndex = 39;
			// 
			// lbdaily
			// 
			this->lbdaily->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdaily->Location = System::Drawing::Point(125, 17);
			this->lbdaily->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbdaily->Name = L"lbdaily";
			this->lbdaily->Size = System::Drawing::Size(208, 25);
			this->lbdaily->TabIndex = 38;
			this->lbdaily->Text = L"Daily Report";
			this->lbdaily->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnback
			// 
			this->btnback->BackColor = System::Drawing::Color::Transparent;
			this->btnback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnback.BackgroundImage")));
			this->btnback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnback->FlatAppearance->BorderSize = 0;
			this->btnback->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnback->Location = System::Drawing::Point(9, 4);
			this->btnback->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(68, 60);
			this->btnback->TabIndex = 27;
			this->btnback->UseVisualStyleBackColor = false;
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(85, 15);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Home Page  |  Sales > Daily Sales";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelsearch
			// 
			this->panelsearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelsearch->Controls->Add(this->labeldate);
			this->panelsearch->Controls->Add(this->btnGenerateSlip);
			this->panelsearch->Controls->Add(this->labelday);
			this->panelsearch->Controls->Add(this->tbdate);
			this->panelsearch->Controls->Add(this->tbday);
			this->panelsearch->Controls->Add(this->lbdate);
			this->panelsearch->Controls->Add(this->datePicker);
			this->panelsearch->Location = System::Drawing::Point(9, 71);
			this->panelsearch->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelsearch->Name = L"panelsearch";
			this->panelsearch->Size = System::Drawing::Size(409, 320);
			this->panelsearch->TabIndex = 22;
			// 
			// labeldate
			// 
			this->labeldate->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldate->Location = System::Drawing::Point(32, 190);
			this->labeldate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labeldate->Name = L"labeldate";
			this->labeldate->Size = System::Drawing::Size(113, 25);
			this->labeldate->TabIndex = 37;
			this->labeldate->Text = L"Date";
			// 
			// labelday
			// 
			this->labelday->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelday->Location = System::Drawing::Point(32, 140);
			this->labelday->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelday->Name = L"labelday";
			this->labelday->Size = System::Drawing::Size(113, 25);
			this->labelday->TabIndex = 33;
			this->labelday->Text = L"Day";
			// 
			// tbdate
			// 
			this->tbdate->BackColor = System::Drawing::SystemColors::Info;
			this->tbdate->Enabled = false;
			this->tbdate->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbdate->Location = System::Drawing::Point(153, 190);
			this->tbdate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbdate->Name = L"tbdate";
			this->tbdate->Size = System::Drawing::Size(212, 26);
			this->tbdate->TabIndex = 35;
			// 
			// tbday
			// 
			this->tbday->BackColor = System::Drawing::SystemColors::Info;
			this->tbday->Enabled = false;
			this->tbday->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbday->Location = System::Drawing::Point(153, 140);
			this->tbday->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tbday->Name = L"tbday";
			this->tbday->Size = System::Drawing::Size(212, 26);
			this->tbday->TabIndex = 34;
			// 
			// lbdate
			// 
			this->lbdate->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdate->Location = System::Drawing::Point(13, 63);
			this->lbdate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbdate->Name = L"lbdate";
			this->lbdate->Size = System::Drawing::Size(132, 32);
			this->lbdate->TabIndex = 29;
			this->lbdate->Text = L"Select Date";
			this->lbdate->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// datePicker
			// 
			this->datePicker->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->datePicker->CustomFormat = L"dd-MM-yyyy";
			this->datePicker->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->datePicker->Location = System::Drawing::Point(164, 63);
			this->datePicker->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->datePicker->Name = L"datePicker";
			this->datePicker->Size = System::Drawing::Size(201, 30);
			this->datePicker->TabIndex = 28;
			this->datePicker->Value = System::DateTime(2023, 12, 5, 23, 26, 0, 0);
			this->datePicker->ValueChanged += gcnew System::EventHandler(this, &DailySalesReport::datePicker_ValueChanged);
			// 
			// DailySalesReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(907, 436);
			this->Controls->Add(this->panelBG);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DailySalesReport";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Deposit Slip";
			this->panelBG->ResumeLayout(false);
			this->panelweekly->ResumeLayout(false);
			this->panelweekly->PerformLayout();
			this->panelsearch->ResumeLayout(false);
			this->panelsearch->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnGenerateSlip_Click(System::Object^ sender, System::EventArgs^ e) {
		if (datePicker == nullptr) {
			MessageBox::Show("Please select a Date.",
				"Error Message", MessageBoxButtons::OK);
			return;
		}
		DateTime selectedDate = datePicker->Value;
		DayOfWeek selectedDay = selectedDate.DayOfWeek;

		String^ filepath = "Orders/" + Convert::ToString(selectedDay) + "_" + selectedDate.ToString("dd-MM-yyyy") + ".txt";

		StreamReader^ input_file = gcnew StreamReader(filepath);

		int count = 1;
		int dailySUM = 0;
		String^ line;

		if (File::Exists(filepath)) {
			FileInfo^ info = gcnew FileInfo(filepath);
			if (info->Length != 0) {
				listboxdate->Items->Clear();
				listboxdate->Items->Add(filepath);
				while (!input_file->EndOfStream) {
					line = input_file->ReadLine();
					try {
						if (line->Contains("Delivered")) {

							line = input_file->ReadLine();
							array<String^>^ customer = line->Split('#'); // customer info
							while (!line->Contains("price")) {
								line = input_file->ReadLine();
							}
							array<String^>^ parts = line->Split('#'); // price info
							listboxdate->Items->Add(Convert::ToString(count) + "#" + customer[1] + "#" + parts[4]);
							count++;
							dailySUM += Convert::ToInt32(parts[4]);
						}
					}
					catch (Exception^ e) {
						MessageBox::Show("Error saving the file: " + e->Message, "Error",
							MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}
				}
				input_file->Close();
				StreamWriter^ writer = gcnew StreamWriter("Sales/Daily.txt", true);
				writer->WriteLine(Convert::ToString(selectedDay) + "_" + selectedDate.ToString("dd-MM-yyyy") + "#" + Convert::ToString(dailySUM));
				tbsales->Text = Convert::ToString(dailySUM);
				writer->Close();
			}
			else {
				MessageBox::Show("No orders on " + input_file + " exist.",
					"Empty File Error Message", MessageBoxButtons::OK);
			}
		}
		else {
			MessageBox::Show("No orders on " + input_file + " exist.",
				"Daily Report Generation Error Message", MessageBoxButtons::OK);
		}

		input_file->Close();
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void datePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		DateTime selectedDate = datePicker->Value;
		DayOfWeek selectedDay = selectedDate.DayOfWeek;

		tbdate->Text = datePicker->Text;
		tbday->Text = Convert::ToString(selectedDay);
	}
	};
}


