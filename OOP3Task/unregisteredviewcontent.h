#pragma once

#include "sqlcategories.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for unregisteredviewcontent
	/// </summary>
	public ref class unregisteredviewcontent : public System::Windows::Forms::Form
	{
	public:
		unregisteredviewcontent(void)
		{
			InitializeComponent();
			fillgrid();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~unregisteredviewcontent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Idunreg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoriesunreg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nameunreg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descriptionunreg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Priceunreg;
	private: System::Windows::Forms::DataGridViewImageColumn^ Pictureunreg;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Commentsunreg;




































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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Idunreg = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoriesunreg = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nameunreg = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descriptionunreg = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Priceunreg = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pictureunreg = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Commentsunreg = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 8);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(939, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Only View Content";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &unregisteredviewcontent::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Idunreg,
					this->Categoriesunreg, this->Nameunreg, this->Descriptionunreg, this->Priceunreg, this->Pictureunreg, this->Commentsunreg
			});
			this->dataGridView1->Location = System::Drawing::Point(17, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(930, 432);
			this->dataGridView1->TabIndex = 1;
			// 
			// Idunreg
			// 
			this->Idunreg->HeaderText = L"Id";
			this->Idunreg->MinimumWidth = 6;
			this->Idunreg->Name = L"Idunreg";
			this->Idunreg->ReadOnly = true;
			this->Idunreg->Visible = false;
			// 
			// Categoriesunreg
			// 
			this->Categoriesunreg->HeaderText = L"Categories";
			this->Categoriesunreg->MinimumWidth = 6;
			this->Categoriesunreg->Name = L"Categoriesunreg";
			this->Categoriesunreg->ReadOnly = true;
			// 
			// Nameunreg
			// 
			this->Nameunreg->HeaderText = L"Name";
			this->Nameunreg->MinimumWidth = 6;
			this->Nameunreg->Name = L"Nameunreg";
			this->Nameunreg->ReadOnly = true;
			// 
			// Descriptionunreg
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Descriptionunreg->DefaultCellStyle = dataGridViewCellStyle1;
			this->Descriptionunreg->HeaderText = L"Description";
			this->Descriptionunreg->MinimumWidth = 6;
			this->Descriptionunreg->Name = L"Descriptionunreg";
			this->Descriptionunreg->ReadOnly = true;
			// 
			// Priceunreg
			// 
			dataGridViewCellStyle2->Format = L"C2";
			dataGridViewCellStyle2->NullValue = nullptr;
			this->Priceunreg->DefaultCellStyle = dataGridViewCellStyle2;
			this->Priceunreg->HeaderText = L"Price";
			this->Priceunreg->MinimumWidth = 6;
			this->Priceunreg->Name = L"Priceunreg";
			this->Priceunreg->ReadOnly = true;
			// 
			// Pictureunreg
			// 
			this->Pictureunreg->HeaderText = L"Picture";
			this->Pictureunreg->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->Pictureunreg->MinimumWidth = 6;
			this->Pictureunreg->Name = L"Pictureunreg";
			this->Pictureunreg->ReadOnly = true;
			// 
			// Commentsunreg
			// 
			this->Commentsunreg->HeaderText = L"Comments";
			this->Commentsunreg->MinimumWidth = 6;
			this->Commentsunreg->Name = L"Commentsunreg";
			this->Commentsunreg->ReadOnly = true;
			this->Commentsunreg->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Commentsunreg->Text = L"Comments";
			this->Commentsunreg->UseColumnTextForButtonValue = true;
			// 
			// unregisteredviewcontent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(959, 516);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
			this->Name = L"unregisteredviewcontent";
			this->Text = L"unregisteredviewcontent";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Only View Content";
	}
	private: void fillgrid(void) {
		std::vector<std::vector<std::string>> data;
		sqlcategory get;
		get.getproduct(data);
		for (int i = 0; i < data.size(); i++)
		{
			String^ id = msclr::interop::marshal_as<String^>(data[i][0]);
			String^ categories = msclr::interop::marshal_as<String^>(data[i][1]);
			String^ name = msclr::interop::marshal_as<String^>(data[i][2]);
			String^ description = msclr::interop::marshal_as<String^>(data[i][3]);
			String^ price = msclr::interop::marshal_as<String^>(data[i][4]);
			String^ picture = msclr::interop::marshal_as<String^>(data[i][5]);
			dataGridView1->Rows->Add(id, categories, name, description, price, Image::FromFile(picture));
			//listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
		}
	}
	};
}
