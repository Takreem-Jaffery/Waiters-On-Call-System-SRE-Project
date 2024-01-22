#pragma once
#include "DriverAttendance.h"
#include "AddDriverForm.h"
#include "UpdateDriver.h"
#include "DeleteDriver.h"
#include "DriverBackgroundForm.h"
namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DriverForm
	/// </summary>
	public ref class DriverForm : public System::Windows::Forms::Form
	{
		String^ date;
		String^ day;
	public:
		DriverForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DriverForm(String^ date, String^ day)
		{
			this->date = date;
			this->day = day;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DriverForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnUpdateDriver;
	protected:

	private: System::Windows::Forms::Button^ btnAddDriver;
	protected:

	private: System::Windows::Forms::Button^ btnDriverAttendance;
	private: System::Windows::Forms::Button^ btnDeleteDriver;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Button^ btnback;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DriverForm::typeid));
			this->btnUpdateDriver = (gcnew System::Windows::Forms::Button());
			this->btnAddDriver = (gcnew System::Windows::Forms::Button());
			this->btnDriverAttendance = (gcnew System::Windows::Forms::Button());
			this->btnDeleteDriver = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnUpdateDriver
			// 
			this->btnUpdateDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnUpdateDriver->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnUpdateDriver->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnUpdateDriver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateDriver->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUpdateDriver->Location = System::Drawing::Point(3, 207);
			this->btnUpdateDriver->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateDriver->Name = L"btnUpdateDriver";
			this->btnUpdateDriver->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnUpdateDriver->Size = System::Drawing::Size(291, 202);
			this->btnUpdateDriver->TabIndex = 3;
			this->btnUpdateDriver->Text = L"Update Driver";
			this->btnUpdateDriver->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnUpdateDriver->UseVisualStyleBackColor = false;
			this->btnUpdateDriver->Click += gcnew System::EventHandler(this, &DriverForm::btnUpdateDriver_Click);
			// 
			// btnAddDriver
			// 
			this->btnAddDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAddDriver->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnAddDriver->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAddDriver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddDriver->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAddDriver->Location = System::Drawing::Point(300, 2);
			this->btnAddDriver->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddDriver->Name = L"btnAddDriver";
			this->btnAddDriver->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnAddDriver->Size = System::Drawing::Size(292, 201);
			this->btnAddDriver->TabIndex = 4;
			this->btnAddDriver->Text = L"Add Driver";
			this->btnAddDriver->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnAddDriver->UseVisualStyleBackColor = false;
			this->btnAddDriver->Click += gcnew System::EventHandler(this, &DriverForm::btnAddDriver_Click);
			// 
			// btnDriverAttendance
			// 
			this->btnDriverAttendance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDriverAttendance->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnDriverAttendance->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnDriverAttendance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDriverAttendance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDriverAttendance->Location = System::Drawing::Point(3, 2);
			this->btnDriverAttendance->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDriverAttendance->Name = L"btnDriverAttendance";
			this->btnDriverAttendance->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnDriverAttendance->Size = System::Drawing::Size(291, 201);
			this->btnDriverAttendance->TabIndex = 5;
			this->btnDriverAttendance->Text = L"Driver Attendance";
			this->btnDriverAttendance->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnDriverAttendance->UseVisualStyleBackColor = false;
			this->btnDriverAttendance->Click += gcnew System::EventHandler(this, &DriverForm::btnDriverAttendance_Click);
			// 
			// btnDeleteDriver
			// 
			this->btnDeleteDriver->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteDriver->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnDeleteDriver->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDeleteDriver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteDriver->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDeleteDriver->Location = System::Drawing::Point(300, 207);
			this->btnDeleteDriver->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteDriver->Name = L"btnDeleteDriver";
			this->btnDeleteDriver->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnDeleteDriver->Size = System::Drawing::Size(292, 202);
			this->btnDeleteDriver->TabIndex = 6;
			this->btnDeleteDriver->Text = L"Delete Driver";
			this->btnDeleteDriver->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnDeleteDriver->UseVisualStyleBackColor = false;
			this->btnDeleteDriver->Click += gcnew System::EventHandler(this, &DriverForm::btnDeleteDriver_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Controls->Add(this->btnback);
			this->panel1->Controls->Add(this->lbNavigation);
			this->panel1->Location = System::Drawing::Point(16, 15);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(674, 571);
			this->panel1->TabIndex = 7;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnDriverAttendance, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnAddDriver, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnDeleteDriver, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnUpdateDriver, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(42, 120);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(595, 411);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// btnback
			// 
			this->btnback->BackColor = System::Drawing::Color::Transparent;
			this->btnback->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnback.BackgroundImage")));
			this->btnback->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnback->FlatAppearance->BorderSize = 0;
			this->btnback->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnback->Location = System::Drawing::Point(7, 5);
			this->btnback->Margin = System::Windows::Forms::Padding(4);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(68, 60);
			this->btnback->TabIndex = 14;
			this->btnback->UseVisualStyleBackColor = false;
			this->btnback->Click += gcnew System::EventHandler(this, &DriverForm::btnback_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(78, 16);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Home Page  |  Driver ";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// DriverForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(714, 609);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DriverForm";
			this->Text = L"Driver Form";
			this->Load += gcnew System::EventHandler(this, &DriverForm::DriverForm_Load);
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnDriverAttendance_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::DriverBackgroundForm back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::DriverAttendance Driver(date, day);
		//Driver.WindowState = FormWindowState::Maximized;
		Driver.ShowDialog();
	}
	private: System::Void btnAddDriver_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::DriverBackgroundForm back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::AddDriverForm addDriver;
		//addDriver.WindowState = FormWindowState::Maximized;
		addDriver.ShowDialog();
	}
	private: System::Void btnUpdateDriver_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::DriverBackgroundForm back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::UpdateDriver Driver;
		//Driver.WindowState = FormWindowState::Maximized;
		Driver.ShowDialog();
	}
	private: System::Void btnDeleteDriver_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::DriverBackgroundForm back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::DeleteDriver Driver;
		//Driver.WindowState = FormWindowState::Maximized;
		Driver.ShowDialog();
	}
	private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void DriverForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
