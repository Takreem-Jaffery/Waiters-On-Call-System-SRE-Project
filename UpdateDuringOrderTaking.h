#pragma once

namespace WaitersOnCall {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateDuringOrderTaking
	/// </summary>
	public ref class UpdateDuringOrderTaking : public System::Windows::Forms::Form
	{
	public:
		String^ orders;
		array<String^>^ orderLines;
	private: System::Windows::Forms::Button^ cancelbtn;
	private: System::Windows::Forms::Label^ lbNavigation;
	public:
		int linesRemoved;
		UpdateDuringOrderTaking(String^ &o)
		{
			orders = o;
			orderLines = orders->Split('\n');
			linesRemoved = 0;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DataGridViewTextBoxColumn^ multilineColumn = gcnew DataGridViewTextBoxColumn();
			multilineColumn->Name = "OrderColumn";
			multilineColumn->HeaderText = "Order";
			multilineColumn->DefaultCellStyle->WrapMode = DataGridViewTriState::True;
			//multilineColumn->Width = 300;  // Adjust the width as needed
			multilineColumn->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;

			Orderdgv->Columns->Add(multilineColumn);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateDuringOrderTaking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Orderdgv;
	private: System::Windows::Forms::Button^ removebtn;
	private: System::Windows::Forms::Button^ Donebtn;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Orderdgv = (gcnew System::Windows::Forms::DataGridView());
			this->removebtn = (gcnew System::Windows::Forms::Button());
			this->Donebtn = (gcnew System::Windows::Forms::Button());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->lbNavigation = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Orderdgv))->BeginInit();
			this->SuspendLayout();
			// 
			// Orderdgv
			// 
			this->Orderdgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Orderdgv->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->Orderdgv->Location = System::Drawing::Point(36, 66);
			this->Orderdgv->MultiSelect = false;
			this->Orderdgv->Name = L"Orderdgv";
			this->Orderdgv->RowHeadersWidth = 51;
			this->Orderdgv->RowTemplate->Height = 24;
			this->Orderdgv->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->Orderdgv->Size = System::Drawing::Size(875, 268);
			this->Orderdgv->TabIndex = 0;
			this->Orderdgv->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateDuringOrderTaking::Orderdgv_CellContentClick);
			// 
			// removebtn
			// 
			this->removebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->removebtn->BackColor = System::Drawing::Color::IndianRed;
			this->removebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->removebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removebtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->removebtn->Location = System::Drawing::Point(715, 349);
			this->removebtn->Name = L"removebtn";
			this->removebtn->Size = System::Drawing::Size(196, 97);
			this->removebtn->TabIndex = 1;
			this->removebtn->Text = L"Remove";
			this->removebtn->UseVisualStyleBackColor = false;
			this->removebtn->Click += gcnew System::EventHandler(this, &UpdateDuringOrderTaking::removebtn_Click);
			// 
			// Donebtn
			// 
			this->Donebtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Donebtn->BackColor = System::Drawing::SystemColors::Control;
			this->Donebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Donebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Donebtn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Donebtn->Location = System::Drawing::Point(715, 466);
			this->Donebtn->Name = L"Donebtn";
			this->Donebtn->Size = System::Drawing::Size(196, 97);
			this->Donebtn->TabIndex = 2;
			this->Donebtn->Text = L"Done";
			this->Donebtn->UseVisualStyleBackColor = false;
			this->Donebtn->Click += gcnew System::EventHandler(this, &UpdateDuringOrderTaking::Donebtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->cancelbtn->BackColor = System::Drawing::SystemColors::Control;
			this->cancelbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelbtn->ForeColor = System::Drawing::SystemColors::Desktop;
			this->cancelbtn->Location = System::Drawing::Point(36, 466);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(196, 97);
			this->cancelbtn->TabIndex = 3;
			this->cancelbtn->Text = L"Cancel";
			this->cancelbtn->UseVisualStyleBackColor = false;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &UpdateDuringOrderTaking::cancelbtn_Click);
			// 
			// lbNavigation
			// 
			this->lbNavigation->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNavigation->Location = System::Drawing::Point(178, 22);
			this->lbNavigation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbNavigation->Name = L"lbNavigation";
			this->lbNavigation->Size = System::Drawing::Size(575, 32);
			this->lbNavigation->TabIndex = 13;
			this->lbNavigation->Text = L"Update Order";
			this->lbNavigation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UpdateDuringOrderTaking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(942, 575);
			this->Controls->Add(this->lbNavigation);
			this->Controls->Add(this->cancelbtn);
			this->Controls->Add(this->Donebtn);
			this->Controls->Add(this->removebtn);
			this->Controls->Add(this->Orderdgv);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpdateDuringOrderTaking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UpdateDuringOrderTaking";
			this->Load += gcnew System::EventHandler(this, &UpdateDuringOrderTaking::UpdateDuringOrderTaking_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Orderdgv))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Orderdgv_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private:System::Void UpdateDataGridView()
    {
		// Clear existing rows
		Orderdgv->Rows->Clear();
		// Split the orders string into lines

	    // Add each line as a row to the DataGridView
		for each (String ^ orderLine in orderLines)
     	{
			array<Object^>^ rowData = { orderLine };
			Orderdgv->Rows->Add(rowData);
	    }
	}
	private: System::Void removebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int row = CheckSelectedRow();
		if (row == -1) {
			MessageBox::Show("Please Select a order line to remove first", "Selection Not Made", MessageBoxButtons::OK);
			return;
		}
		for (int i = 0; i < orderLines->Length-1; i++) {
			if (i == row ) {
				for (int j = i; j < orderLines->Length-linesRemoved-1; j++) {
					orderLines[j] = orderLines[j + 1];
				}
				linesRemoved++;
				break;
			}
		}
		UpdateDataGridView();

	}
	private:
		   // A method to check the selected row
		   int CheckSelectedRow()
		   {
			   if (Orderdgv->SelectedRows->Count >= 0)
			   {
				   DataGridViewRow^ selectedRow = Orderdgv->SelectedRows[0];
				   int rowIndex = selectedRow->Index;
				   return rowIndex;
				// Do something with the selected row index...
				  // MessageBox::Show("Selected Row Index: " + rowIndex);
			   }
			   return 0;
		   }
private: System::Void Donebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	orders = "";
	for (int i = 0; i < orderLines->Length-linesRemoved; i++) {
		orders += orderLines[i] + "\n";
	}
	this->Close();
}
private: System::Void UpdateDuringOrderTaking_Load(System::Object^ sender, System::EventArgs^ e) {
	UpdateDataGridView();
}
private: System::Void cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
