#pragma once
//#include "UpdateandCancel.h"
#include "UpdateOrderStatus.h"
#include "UpdateBackground.h"
#include "UpdateandCancel.h"
namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateForm
	/// </summary>
	public ref class UpdateForm : public System::Windows::Forms::Form
	{
		String^ date;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
		   String^ day;
	public:
		UpdateForm(String^ date, String^ day)
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
		~UpdateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnUpdateCancel;
	protected:

	protected:


	private: System::Windows::Forms::Button^ btnUpdateOrderStatus;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbNavigation;
	private: System::Windows::Forms::Button^ btnback;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateForm::typeid));
			this->btnUpdateCancel = (gcnew System::Windows::Forms::Button());
			this->btnUpdateOrderStatus = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnUpdateCancel
			// 
			this->btnUpdateCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnUpdateCancel->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnUpdateCancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnUpdateCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateCancel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUpdateCancel->Location = System::Drawing::Point(275, 2);
			this->btnUpdateCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateCancel->Name = L"btnUpdateCancel";
			this->btnUpdateCancel->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnUpdateCancel->Size = System::Drawing::Size(267, 283);
			this->btnUpdateCancel->TabIndex = 4;
			this->btnUpdateCancel->Text = L"Update/Cancel Order";
			this->btnUpdateCancel->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnUpdateCancel->UseVisualStyleBackColor = false;
			this->btnUpdateCancel->Click += gcnew System::EventHandler(this, &UpdateForm::btnUpdateCancel_Click);
			// 
			// btnUpdateOrderStatus
			// 
			this->btnUpdateOrderStatus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnUpdateOrderStatus->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnUpdateOrderStatus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnUpdateOrderStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateOrderStatus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnUpdateOrderStatus->Location = System::Drawing::Point(3, 2);
			this->btnUpdateOrderStatus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateOrderStatus->Name = L"btnUpdateOrderStatus";
			this->btnUpdateOrderStatus->Padding = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->btnUpdateOrderStatus->Size = System::Drawing::Size(266, 283);
			this->btnUpdateOrderStatus->TabIndex = 5;
			this->btnUpdateOrderStatus->Text = L"Update Order Status";
			this->btnUpdateOrderStatus->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btnUpdateOrderStatus->UseVisualStyleBackColor = false;
			this->btnUpdateOrderStatus->Click += gcnew System::EventHandler(this, &UpdateForm::btnUpdateOrderStatus_Click);
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
			this->panel1->Size = System::Drawing::Size(635, 550);
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
			this->tableLayoutPanel1->Controls->Add(this->btnUpdateOrderStatus, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnUpdateCancel, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(44, 152);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(545, 287);
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
			this->btnback->Click += gcnew System::EventHandler(this, &UpdateForm::btnback_Click);
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
			this->lbNavigation->Text = L"Home Page  |  Update Orders ";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// UpdateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(658, 580);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UpdateForm";
			this->Text = L"Update Form";
			this->Load += gcnew System::EventHandler(this, &UpdateForm::UpdateForm_Load);
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnUpdateOrderStatus_Click(System::Object^ sender, System::EventArgs^ e) {
		WaitersOnCall::UpdateBackground back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::UpdateOrderStatus update(date, day);
		//update.WindowState = FormWindowState::Maximized;
		update.ShowDialog();
	}
	private: System::Void btnUpdateCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("This function is not ready yet.", "Function Unavailable", MessageBoxButtons::OK,MessageBoxIcon::Error);
		WaitersOnCall::UpdateBackground back;
		back.WindowState = FormWindowState::Maximized;
		back.Show();
		WaitersOnCall::UpdateandCancel update(date, day);
		//update.WindowState = FormWindowState::Maximized;
		update.ShowDialog();
	}
	private: System::Void UpdateForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
