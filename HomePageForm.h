#pragma once
#include "RecordOrder.h"
#include "DriverForm.h"
#include "RestaurantForm.h"
#include "UpdateForm.h"
#include "SalesForm.h"
#include "ForecastSales.h"
#include "RecordOrderBackgroundForm.h"

namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomePageForm
	/// </summary>
	public ref class HomePageForm : public System::Windows::Forms::Form
	{
		String^ date;
		String^ day;
	public:
		HomePageForm(String^ name, String^ date, String^ day)
		{
			this->date = date;
			this->day = day;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbWelcome->Text = "Welcome, " + day + "_" + date;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomePageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbTitle;
	protected:

	protected:

	private: System::Windows::Forms::Button^ RecordOrderButton;
	private: System::Windows::Forms::Button^ RestaurantButton;


	private: System::Windows::Forms::Button^ DriverButton;
	private: System::Windows::Forms::Button^ OrderStatusButton;
	private: System::Windows::Forms::Button^ SalesFormsButton;
	private: System::Windows::Forms::Button^ ForecastSalesButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbWelcome;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomePageForm::typeid));
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->RecordOrderButton = (gcnew System::Windows::Forms::Button());
			this->RestaurantButton = (gcnew System::Windows::Forms::Button());
			this->DriverButton = (gcnew System::Windows::Forms::Button());
			this->OrderStatusButton = (gcnew System::Windows::Forms::Button());
			this->SalesFormsButton = (gcnew System::Windows::Forms::Button());
			this->ForecastSalesButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbTitle
			// 
			this->lbTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(345, 30);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(222, 36);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Waiters On Call";
			// 
			// RecordOrderButton
			// 
			this->RecordOrderButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RecordOrderButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RecordOrderButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RecordOrderButton.BackgroundImage")));
			this->RecordOrderButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RecordOrderButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RecordOrderButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RecordOrderButton->Location = System::Drawing::Point(23, 102);
			this->RecordOrderButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RecordOrderButton->Name = L"RecordOrderButton";
			this->RecordOrderButton->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->RecordOrderButton->Size = System::Drawing::Size(316, 226);
			this->RecordOrderButton->TabIndex = 1;
			this->RecordOrderButton->Text = L"Record Order";
			this->RecordOrderButton->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->RecordOrderButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->RecordOrderButton->UseVisualStyleBackColor = false;
			this->RecordOrderButton->Click += gcnew System::EventHandler(this, &HomePageForm::RecordOrderButton_Click);
			// 
			// RestaurantButton
			// 
			this->RestaurantButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RestaurantButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RestaurantButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RestaurantButton.BackgroundImage")));
			this->RestaurantButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->RestaurantButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RestaurantButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->RestaurantButton->Location = System::Drawing::Point(667, 102);
			this->RestaurantButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RestaurantButton->Name = L"RestaurantButton";
			this->RestaurantButton->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->RestaurantButton->Size = System::Drawing::Size(318, 226);
			this->RestaurantButton->TabIndex = 2;
			this->RestaurantButton->Text = L"Restaurant";
			this->RestaurantButton->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->RestaurantButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->RestaurantButton->UseVisualStyleBackColor = false;
			this->RestaurantButton->Click += gcnew System::EventHandler(this, &HomePageForm::RestaurantButton_Click);
			// 
			// DriverButton
			// 
			this->DriverButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DriverButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->DriverButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DriverButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DriverButton.BackgroundImage")));
			this->DriverButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DriverButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DriverButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->DriverButton->Location = System::Drawing::Point(345, 102);
			this->DriverButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DriverButton->Name = L"DriverButton";
			this->DriverButton->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->DriverButton->Size = System::Drawing::Size(316, 226);
			this->DriverButton->TabIndex = 3;
			this->DriverButton->Text = L"Driver";
			this->DriverButton->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->DriverButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->DriverButton->UseVisualStyleBackColor = false;
			this->DriverButton->Click += gcnew System::EventHandler(this, &HomePageForm::DriverButton_Click);
			// 
			// OrderStatusButton
			// 
			this->OrderStatusButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OrderStatusButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->OrderStatusButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OrderStatusButton.BackgroundImage")));
			this->OrderStatusButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->OrderStatusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderStatusButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->OrderStatusButton->Location = System::Drawing::Point(23, 332);
			this->OrderStatusButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OrderStatusButton->Name = L"OrderStatusButton";
			this->OrderStatusButton->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->OrderStatusButton->Size = System::Drawing::Size(316, 226);
			this->OrderStatusButton->TabIndex = 4;
			this->OrderStatusButton->Text = L"Order Status";
			this->OrderStatusButton->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->OrderStatusButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->OrderStatusButton->UseVisualStyleBackColor = false;
			this->OrderStatusButton->Click += gcnew System::EventHandler(this, &HomePageForm::OrderStatusButton_Click);
			// 
			// SalesFormsButton
			// 
			this->SalesFormsButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SalesFormsButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SalesFormsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SalesFormsButton.BackgroundImage")));
			this->SalesFormsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SalesFormsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SalesFormsButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->SalesFormsButton->Location = System::Drawing::Point(345, 332);
			this->SalesFormsButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SalesFormsButton->Name = L"SalesFormsButton";
			this->SalesFormsButton->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->SalesFormsButton->Size = System::Drawing::Size(316, 226);
			this->SalesFormsButton->TabIndex = 5;
			this->SalesFormsButton->Text = L"Sales Forms";
			this->SalesFormsButton->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->SalesFormsButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->SalesFormsButton->UseVisualStyleBackColor = false;
			this->SalesFormsButton->Click += gcnew System::EventHandler(this, &HomePageForm::SalesFormsButton_Click);
			// 
			// ForecastSalesButton
			// 
			this->ForecastSalesButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ForecastSalesButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ForecastSalesButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ForecastSalesButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ForecastSalesButton.BackgroundImage")));
			this->ForecastSalesButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ForecastSalesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForecastSalesButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ForecastSalesButton->Location = System::Drawing::Point(667, 332);
			this->ForecastSalesButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ForecastSalesButton->Name = L"ForecastSalesButton";
			this->ForecastSalesButton->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->ForecastSalesButton->Size = System::Drawing::Size(318, 226);
			this->ForecastSalesButton->TabIndex = 6;
			this->ForecastSalesButton->Text = L"Forecast Sales";
			this->ForecastSalesButton->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->ForecastSalesButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->ForecastSalesButton->UseVisualStyleBackColor = false;
			this->ForecastSalesButton->Click += gcnew System::EventHandler(this, &HomePageForm::ForecastSalesButton_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->RecordOrderButton, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->DriverButton, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->RestaurantButton, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->OrderStatusButton, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->SalesFormsButton, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->ForecastSalesButton, 2, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->Padding = System::Windows::Forms::Padding(20, 100, 20, 20);
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1008, 580);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 8;
			this->label1->Click += gcnew System::EventHandler(this, &HomePageForm::label1_Click_1);
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbWelcome->Location = System::Drawing::Point(0, 0);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(0, 16);
			this->lbWelcome->TabIndex = 10;
			// 
			// HomePageForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1008, 580);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"HomePageForm";
			this->Text = L"HomePageForm";
			this->Load += gcnew System::EventHandler(this, &HomePageForm::HomePageForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HomePageForm_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void RecordOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
	WaitersOnCall:RecordOrderBackgroundForm form;
		form.WindowState = FormWindowState::Maximized;
		form.Show();
		WaitersOnCall::RecordOrder orderForm(date, day);
		//orderForm.WindowState = FormWindowState::Maximized;
		orderForm.ShowDialog();

	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DriverButton_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::DriverForm Driver(date, day);
		Driver.WindowState = FormWindowState::Maximized;
		Driver.ShowDialog();
	}
	private: System::Void OrderStatusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::UpdateForm statusForm(date, day);
		statusForm.WindowState = FormWindowState::Maximized;
		statusForm.ShowDialog();
	}
	private: System::Void RestaurantButton_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::RestaurantForm resForm;
		resForm.WindowState = FormWindowState::Maximized;
		resForm.ShowDialog();
	}
	private: System::Void SalesFormsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::SalesForm Form;
		Form.WindowState = FormWindowState::Maximized;
		Form.ShowDialog();
	}
private: System::Void ForecastSalesButton_Click(System::Object^ sender, System::EventArgs^ e) {
	WaitersOnCall::ForecastSales Form(date);
	Form.WindowState = FormWindowState::Maximized;
	Form.ShowDialog();
}
};
}

