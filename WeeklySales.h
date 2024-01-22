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
	/// Summary for WeeklySales
	/// </summary>
	public ref class WeeklySales : public System::Windows::Forms::Form
	{
	public:
		WeeklySales(void)
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
		~WeeklySales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelBG;
	protected:

	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Panel^ panelsearch;
	private: System::Windows::Forms::DateTimePicker^ datePicker;
	private: System::Windows::Forms::Label^ lbdate;
	private: System::Windows::Forms::Panel^ panelweekly;

	private: System::Windows::Forms::Label^ labeldate;
	private: System::Windows::Forms::Label^ labelday;



	private: System::Windows::Forms::TextBox^ tbdate;

	private: System::Windows::Forms::TextBox^ tbday;
	private: System::Windows::Forms::Label^ lbweekly;
	private: System::Windows::Forms::Label^ lbtotalsales;

	private: System::Windows::Forms::TextBox^ tbsales;
	private: System::Windows::Forms::ListBox^ listboxdate;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnGenerateReport;
	private: System::Windows::Forms::Button^ button1;









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
			this->panelBG = (gcnew System::Windows::Forms::Panel());
			this->panelweekly = (gcnew System::Windows::Forms::Panel());
			this->lbtotalsales = (gcnew System::Windows::Forms::Label());
			this->tbsales = (gcnew System::Windows::Forms::TextBox());
			this->listboxdate = (gcnew System::Windows::Forms::ListBox());
			this->lbweekly = (gcnew System::Windows::Forms::Label());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panelsearch = (gcnew System::Windows::Forms::Panel());
			this->btnGenerateReport = (gcnew System::Windows::Forms::Button());
			this->labeldate = (gcnew System::Windows::Forms::Label());
			this->labelday = (gcnew System::Windows::Forms::Label());
			this->tbdate = (gcnew System::Windows::Forms::TextBox());
			this->tbday = (gcnew System::Windows::Forms::TextBox());
			this->lbdate = (gcnew System::Windows::Forms::Label());
			this->datePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panelBG->SuspendLayout();
			this->panelweekly->SuspendLayout();
			this->panelsearch->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelBG
			// 
			this->panelBG->Controls->Add(this->panelweekly);
			this->panelBG->Controls->Add(this->lbNavigation);
			this->panelBG->Controls->Add(this->panelsearch);
			this->panelBG->Location = System::Drawing::Point(16, 15);
			this->panelBG->Margin = System::Windows::Forms::Padding(4);
			this->panelBG->Name = L"panelBG";
			this->panelBG->Size = System::Drawing::Size(873, 435);
			this->panelBG->TabIndex = 6;
			this->panelBG->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &WeeklySales::panelBG_Paint);
			// 
			// panelweekly
			// 
			this->panelweekly->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelweekly->Controls->Add(this->lbtotalsales);
			this->panelweekly->Controls->Add(this->tbsales);
			this->panelweekly->Controls->Add(this->listboxdate);
			this->panelweekly->Controls->Add(this->lbweekly);
			this->panelweekly->Location = System::Drawing::Point(421, 87);
			this->panelweekly->Margin = System::Windows::Forms::Padding(4);
			this->panelweekly->Name = L"panelweekly";
			this->panelweekly->Size = System::Drawing::Size(437, 320);
			this->panelweekly->TabIndex = 28;
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
			this->tbsales->Margin = System::Windows::Forms::Padding(4);
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
			this->listboxdate->Margin = System::Windows::Forms::Padding(4);
			this->listboxdate->Name = L"listboxdate";
			this->listboxdate->Size = System::Drawing::Size(392, 112);
			this->listboxdate->TabIndex = 39;
			// 
			// lbweekly
			// 
			this->lbweekly->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbweekly->Location = System::Drawing::Point(125, 17);
			this->lbweekly->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbweekly->Name = L"lbweekly";
			this->lbweekly->Size = System::Drawing::Size(208, 25);
			this->lbweekly->TabIndex = 38;
			this->lbweekly->Text = L"Weekly Report";
			this->lbweekly->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->lbNavigation->Text = L"Home Page  |  Sales > Weekly Sales";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panelsearch
			// 
			this->panelsearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelsearch->Controls->Add(this->btnGenerateReport);
			this->panelsearch->Controls->Add(this->labeldate);
			this->panelsearch->Controls->Add(this->labelday);
			this->panelsearch->Controls->Add(this->tbdate);
			this->panelsearch->Controls->Add(this->tbday);
			this->panelsearch->Controls->Add(this->lbdate);
			this->panelsearch->Controls->Add(this->datePicker);
			this->panelsearch->Location = System::Drawing::Point(4, 87);
			this->panelsearch->Margin = System::Windows::Forms::Padding(4);
			this->panelsearch->Name = L"panelsearch";
			this->panelsearch->Size = System::Drawing::Size(409, 320);
			this->panelsearch->TabIndex = 22;
			// 
			// btnGenerateReport
			// 
			this->btnGenerateReport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnGenerateReport->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btnGenerateReport->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGenerateReport->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnGenerateReport->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerateReport->Location = System::Drawing::Point(164, 267);
			this->btnGenerateReport->Margin = System::Windows::Forms::Padding(4);
			this->btnGenerateReport->Name = L"btnGenerateReport";
			this->btnGenerateReport->Size = System::Drawing::Size(203, 34);
			this->btnGenerateReport->TabIndex = 41;
			this->btnGenerateReport->Text = L"Generate Report";
			this->btnGenerateReport->UseVisualStyleBackColor = false;
			this->btnGenerateReport->Click += gcnew System::EventHandler(this, &WeeklySales::btnGenerateReport_Click);
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
			this->tbdate->Margin = System::Windows::Forms::Padding(4);
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
			this->tbday->Margin = System::Windows::Forms::Padding(4);
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
			this->datePicker->ValueChanged += gcnew System::EventHandler(this, &WeeklySales::datePicker_ValueChanged);
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->BackColor = System::Drawing::SystemColors::MenuBar;
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(693, 470);
			this->btnOK->Margin = System::Windows::Forms::Padding(4);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(196, 97);
			this->btnOK->TabIndex = 40;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &WeeklySales::btnOK_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(13, 470);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 97);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WeeklySales::button1_Click);
			// 
			// WeeklySales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(902, 580);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panelBG);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"WeeklySales";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WeeklySales";
			this->Load += gcnew System::EventHandler(this, &WeeklySales::WeeklySales_Load);
			this->panelBG->ResumeLayout(false);
			this->panelweekly->ResumeLayout(false);
			this->panelweekly->PerformLayout();
			this->panelsearch->ResumeLayout(false);
			this->panelsearch->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void datePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		DateTime selectedDate = datePicker->Value;
		DayOfWeek selectedDay = selectedDate.DayOfWeek;

		tbdate->Text = datePicker->Text;
		tbday->Text = Convert::ToString(selectedDay);

	}
	private: System::Void btnGenerateReport_Click(System::Object^ sender, System::EventArgs^ e) {
		if (datePicker == nullptr) {
			MessageBox::Show("Please select a Date.",
				"Error Message", MessageBoxButtons::OK);
			return;
		}

		DateTime selectedDate = datePicker->Value;
		DayOfWeek selectedDay = selectedDate.DayOfWeek;

		// Calculate the difference in days between the requested day and the actual day,
		// considering Monday as the first day of the week
		int difference = ((int)selectedDay - (int)DayOfWeek::Monday + 7) % 7;

		// Subtract the difference from the input date to get the beginning of the week
		DateTime beginningOfWeek = selectedDate.AddDays(-difference);
		// beginning of week always starts with monday so;
		String^ filename = "Orders/Monday_" + beginningOfWeek.ToString("dd-MM-yyyy");
		//MessageBox::Show("BeginingOfWeek Date:" + filename, "Check Message", MessageBoxButtons::OK);

		StreamWriter^ writer = gcnew StreamWriter("Sales/weeklysales.txt", true);
		String^ line;
		int weeklySUM = 0;
		int dailySUM = 0;
		while (selectedDate >= beginningOfWeek)
		{
			filename = "Orders/"+Convert::ToString(selectedDay) + "_" + selectedDate.ToString("dd-MM-yyyy");

			if (File::Exists(filename + ".txt")) {
				dailySUM = 0;
				StreamReader^ reader = gcnew StreamReader(filename + ".txt");
				listboxdate->Items->Add(filename + ".txt");

				while (!reader->EndOfStream) {
					line = reader->ReadLine();
					if (line->Contains("Delivered")) {
						while (!line->Contains("price")) {
							line = reader->ReadLine();
						}
						array<String^>^ parts = line->Split('#');
						dailySUM += Convert::ToInt32(parts[4]);
					}
				}
				writer->WriteLine(Convert::ToString(selectedDay) + "_" + selectedDate.ToString("dd-MM-yyyy") + "#" + Convert::ToString(dailySUM));
				weeklySUM += dailySUM;
				reader->Close();
			}
			selectedDate = selectedDate.AddDays(-1);
			selectedDay = selectedDate.DayOfWeek;
			//MessageBox::Show("Prev Date: " + Convert::ToString(selectedDay) + "_" + selectedDate.ToString("dd-MM-yyyy"), "Check Message", MessageBoxButtons::OK);

		}
		writer->WriteLine("SUM#" + Convert::ToString(weeklySUM));
		tbsales->Text = Convert::ToString(weeklySUM);
		writer->WriteLine();
		writer->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void panelBG_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void WeeklySales_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
