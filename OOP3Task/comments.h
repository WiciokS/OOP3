#pragma once

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for comments
	/// </summary>
	public ref class comments : public System::Windows::Forms::Form
	{
	public:
		comments(void)
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
		~comments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewCom;
	protected:





	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Idcom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usernamecom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Datecom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Commentcom;
	private: System::Windows::Forms::Label^ label2;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridViewCom = (gcnew System::Windows::Forms::DataGridView());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Idcom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usernamecom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Datecom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Commentcom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCom))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewCom
			// 
			this->dataGridViewCom->AllowUserToAddRows = false;
			this->dataGridViewCom->AllowUserToDeleteRows = false;
			this->dataGridViewCom->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewCom->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewCom->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCom->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Idcom,
					this->Usernamecom, this->Datecom, this->Commentcom
			});
			this->dataGridViewCom->Location = System::Drawing::Point(13, 76);
			this->dataGridViewCom->Name = L"dataGridViewCom";
			this->dataGridViewCom->ReadOnly = true;
			this->dataGridViewCom->RowHeadersWidth = 51;
			this->dataGridViewCom->RowTemplate->Height = 24;
			this->dataGridViewCom->Size = System::Drawing::Size(700, 333);
			this->dataGridViewCom->TabIndex = 0;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(719, 76);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(456, 182);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(719, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add Comment";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(930, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// Idcom
			// 
			this->Idcom->HeaderText = L"Id";
			this->Idcom->MinimumWidth = 6;
			this->Idcom->Name = L"Idcom";
			this->Idcom->ReadOnly = true;
			this->Idcom->Visible = false;
			// 
			// Usernamecom
			// 
			this->Usernamecom->HeaderText = L"Username";
			this->Usernamecom->MinimumWidth = 6;
			this->Usernamecom->Name = L"Usernamecom";
			this->Usernamecom->ReadOnly = true;
			// 
			// Datecom
			// 
			dataGridViewCellStyle5->Format = L"d";
			dataGridViewCellStyle5->NullValue = nullptr;
			this->Datecom->DefaultCellStyle = dataGridViewCellStyle5;
			this->Datecom->HeaderText = L"Date";
			this->Datecom->MinimumWidth = 6;
			this->Datecom->Name = L"Datecom";
			this->Datecom->ReadOnly = true;
			// 
			// Commentcom
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Commentcom->DefaultCellStyle = dataGridViewCellStyle6;
			this->Commentcom->HeaderText = L"Comment";
			this->Commentcom->MinimumWidth = 6;
			this->Commentcom->Name = L"Commentcom";
			this->Commentcom->ReadOnly = true;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1162, 60);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Comments";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comments
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 421);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->dataGridViewCom);
			this->Name = L"comments";
			this->Text = L"comments";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
