#pragma once
#include"DailySalesReport.h"
#include"WeeklyRestaurantPayments.h"
#include"MonthlySalesReport.h"
#include"WeeklySales.h"
#include "SalesFormBackground.h"
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
	public ref class SalesForm : public System::Windows::Forms::Form
	{
		String^ date;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
		   String^ day;
	public:
		SalesForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SalesForm(String^ date, String^ day)
		{
			InitializeComponent();
			this->date = date;
			this->day = day;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SalesForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
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
			this->tableLayoutPanel1->Controls->Add(this->button4, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(62, 131);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(568, 386);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(287, 196);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(278, 187);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Monthly Sales Report";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SalesForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(3, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(278, 187);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Weekly Sales Report";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SalesForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(287, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(278, 187);
			this->button2->TabIndex = 1;
			this->button2->Text = L"End-of-week Restaurant Payments";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SalesForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(278, 187);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Daily Sales Report";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SalesForm::button1_Click);
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
			this->btnback->Click += gcnew System::EventHandler(this, &SalesForm::btnback_Click);
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
			this->lbNavigation->Text = L"Home Page  |  Sales";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// SalesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(714, 609);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SalesForm";
			this->Text = L"Sales Forms";
			this->Load += gcnew System::EventHandler(this, &SalesForm::SalesForm_Load);
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::SalesFormBackground back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::DailySalesReport daily(date, day);
		//daily.WindowState = FormWindowState::Maximized;
		daily.ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::SalesFormBackground back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::WeeklyRestaurantPayments payments;
		//payments.WindowState = FormWindowState::Maximized;
		payments.ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::SalesFormBackground back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::WeeklySales weekly;//(date, day);
		//weekly.WindowState = FormWindowState::Maximized;
		weekly.ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::SalesFormBackground back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::MonthlySalesReport monthly(date, day);
	//	monthly.WindowState = FormWindowState::Maximized;
		monthly.ShowDialog();
	}
	private: System::Void SalesForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
