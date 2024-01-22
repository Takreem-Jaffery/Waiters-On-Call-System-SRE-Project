#pragma once
#include "AddRestaurant.h"
#include "UpdateRestaurant.h"
#include "DeleteRestaurant.h"
#include "RestaurantBackgroundForm.h"
namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RestaurantForm
	/// </summary>
	public ref class RestaurantForm : public System::Windows::Forms::Form
	{
	public:
		RestaurantForm(void)
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
		~RestaurantForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnUpdate;
	protected:

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDelete;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RestaurantForm::typeid));
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnUpdate
			// 
			this->btnUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnUpdate->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnUpdate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUpdate->Location = System::Drawing::Point(306, 2);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnUpdate->Size = System::Drawing::Size(297, 309);
			this->btnUpdate->TabIndex = 3;
			this->btnUpdate->Text = L"Update Restaurant";
			this->btnUpdate->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &RestaurantForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAdd->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAdd->Location = System::Drawing::Point(3, 2);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnAdd->Size = System::Drawing::Size(297, 309);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"Add Restaurant";
			this->btnAdd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &RestaurantForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDelete->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDelete->Location = System::Drawing::Point(609, 2);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnDelete->Size = System::Drawing::Size(297, 309);
			this->btnDelete->TabIndex = 6;
			this->btnDelete->Text = L"Delete Restaurant";
			this->btnDelete->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &RestaurantForm::btnDelete_Click);
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
			this->panel1->Size = System::Drawing::Size(997, 562);
			this->panel1->TabIndex = 7;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->btnAdd, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnUpdate, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnDelete, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(46, 143);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(909, 313);
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
			this->btnback->Click += gcnew System::EventHandler(this, &RestaurantForm::btnback_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(88, 16);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Home Page  |  Restaurant ";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// RestaurantForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1026, 592);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RestaurantForm";
			this->Text = L"Restaurant Form";
			this->Load += gcnew System::EventHandler(this, &RestaurantForm::RestaurantForm_Load);
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::RestaurantBackgroundForm back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::AddRestaurant resForm;
		resForm.ShowDialog();
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::RestaurantBackgroundForm back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::UpdateRestaurant resForm;
		//resForm.WindowState = FormWindowState::Maximized;
		resForm.ShowDialog();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::RestaurantBackgroundForm back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::DeleteRestaurant resForm;
		//resForm.WindowState = FormWindowState::Maximized;
		resForm.ShowDialog();
	}
	private: System::Void RestaurantForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
