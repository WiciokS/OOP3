#pragma once

#include "sqlwish.h"
#include "sqlcom.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for wishlist
	/// </summary>
	public ref class wishlist : public System::Windows::Forms::Form
	{
	public:
		wishlist(void)
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
		~wishlist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewWish;
	protected:






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Idwish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Iduserwish;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Namewish;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Deletewish;







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
			this->dataGridViewWish = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Idwish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Iduserwish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Namewish = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Deletewish = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewWish))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewWish
			// 
			this->dataGridViewWish->AllowUserToAddRows = false;
			this->dataGridViewWish->AllowUserToDeleteRows = false;
			this->dataGridViewWish->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewWish->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewWish->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewWish->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Idwish,
					this->Iduserwish, this->Namewish, this->Deletewish
			});
			this->dataGridViewWish->Location = System::Drawing::Point(13, 77);
			this->dataGridViewWish->Name = L"dataGridViewWish";
			this->dataGridViewWish->ReadOnly = true;
			this->dataGridViewWish->RowHeadersWidth = 51;
			this->dataGridViewWish->RowTemplate->Height = 24;
			this->dataGridViewWish->Size = System::Drawing::Size(886, 401);
			this->dataGridViewWish->TabIndex = 0;
			this->dataGridViewWish->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &wishlist::dataGridViewWish_CellContentClick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(886, 61);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WishList";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &wishlist::label1_Click);
			// 
			// Idwish
			// 
			this->Idwish->HeaderText = L"Id";
			this->Idwish->MinimumWidth = 6;
			this->Idwish->Name = L"Idwish";
			this->Idwish->ReadOnly = true;
			this->Idwish->Visible = false;
			// 
			// Iduserwish
			// 
			this->Iduserwish->HeaderText = L"iduser";
			this->Iduserwish->MinimumWidth = 6;
			this->Iduserwish->Name = L"Iduserwish";
			this->Iduserwish->ReadOnly = true;
			this->Iduserwish->Visible = false;
			// 
			// Namewish
			// 
			this->Namewish->HeaderText = L"Name";
			this->Namewish->MinimumWidth = 6;
			this->Namewish->Name = L"Namewish";
			this->Namewish->ReadOnly = true;
			// 
			// Deletewish
			// 
			this->Deletewish->HeaderText = L"Delete";
			this->Deletewish->MinimumWidth = 6;
			this->Deletewish->Name = L"Deletewish";
			this->Deletewish->ReadOnly = true;
			this->Deletewish->Text = L"Delete";
			this->Deletewish->UseColumnTextForButtonValue = true;
			// 
			// wishlist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 490);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewWish);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"wishlist";
			this->Text = L"wishlist";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewWish))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridViewWish_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "WishList";
}
private: void fillgrid(void) {
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	sqlcommands getdata;
	getdata.getuserdata(id, name, surname, username, password, admin);

	std::vector<std::vector<std::string>> data;
	sqlwishlist get;
	get.getuserwishprod(data, std::to_string(id));
	for (int i = 0; i < data.size(); i++)
	{
		String^ id = msclr::interop::marshal_as<String^>(data[i][0]);
		String^ userid = msclr::interop::marshal_as<String^>(data[i][1]);
		String^ productid = msclr::interop::marshal_as<String^>(data[i][2]);
		String^ productname = msclr::interop::marshal_as<String^>(data[i][3]);
		dataGridViewWish->Rows->Add(id, productid, productname);
		//listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
	}
}
};
}
