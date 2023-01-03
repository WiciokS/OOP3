#pragma once

#include "sqlcategories.h"
#include "sqlcom.h"
#include "sqlwish.h"
#include "registereduser.h"
#include "adminuser.h"
#include "comments.h"
#include "sqlcart.h"
#include "sqlsale.h"
#include "shopinghistory.h"
#include "financieruser.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for usershopinghistory
	/// </summary>
	public ref class usershopinghistory : public System::Windows::Forms::Form
	{
	public:
		usershopinghistory(void)
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
		~usershopinghistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewShopingHistory;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ idsh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ useridsh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productidsh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productnamesh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pricesh;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ timesh;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewShopingHistory = (gcnew System::Windows::Forms::DataGridView());
			this->idsh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->useridsh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productidsh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productnamesh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pricesh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->timesh = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewShopingHistory))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(880, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Shoping History";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &usershopinghistory::label1_Click);
			// 
			// dataGridViewShopingHistory
			// 
			this->dataGridViewShopingHistory->AllowUserToAddRows = false;
			this->dataGridViewShopingHistory->AllowUserToDeleteRows = false;
			this->dataGridViewShopingHistory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewShopingHistory->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewShopingHistory->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewShopingHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewShopingHistory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->idsh,
					this->useridsh, this->productidsh, this->productnamesh, this->pricesh, this->timesh
			});
			this->dataGridViewShopingHistory->Location = System::Drawing::Point(12, 78);
			this->dataGridViewShopingHistory->Name = L"dataGridViewShopingHistory";
			this->dataGridViewShopingHistory->ReadOnly = true;
			this->dataGridViewShopingHistory->RowHeadersWidth = 51;
			this->dataGridViewShopingHistory->RowTemplate->Height = 24;
			this->dataGridViewShopingHistory->Size = System::Drawing::Size(881, 317);
			this->dataGridViewShopingHistory->TabIndex = 1;
			// 
			// idsh
			// 
			this->idsh->HeaderText = L"Id";
			this->idsh->MinimumWidth = 6;
			this->idsh->Name = L"idsh";
			this->idsh->ReadOnly = true;
			this->idsh->Visible = false;
			// 
			// useridsh
			// 
			this->useridsh->HeaderText = L"UserID";
			this->useridsh->MinimumWidth = 6;
			this->useridsh->Name = L"useridsh";
			this->useridsh->ReadOnly = true;
			this->useridsh->Visible = false;
			// 
			// productidsh
			// 
			this->productidsh->HeaderText = L"ProductID";
			this->productidsh->MinimumWidth = 6;
			this->productidsh->Name = L"productidsh";
			this->productidsh->ReadOnly = true;
			this->productidsh->Visible = false;
			// 
			// productnamesh
			// 
			this->productnamesh->HeaderText = L"Product Name";
			this->productnamesh->MinimumWidth = 6;
			this->productnamesh->Name = L"productnamesh";
			this->productnamesh->ReadOnly = true;
			// 
			// pricesh
			// 
			this->pricesh->HeaderText = L"Price";
			this->pricesh->MinimumWidth = 6;
			this->pricesh->Name = L"pricesh";
			this->pricesh->ReadOnly = true;
			// 
			// timesh
			// 
			this->timesh->HeaderText = L"Time";
			this->timesh->MinimumWidth = 6;
			this->timesh->Name = L"timesh";
			this->timesh->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Export to json file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &usershopinghistory::button1_Click);
			// 
			// usershopinghistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 466);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridViewShopingHistory);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"usershopinghistory";
			this->Text = L"usershopinghistory";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewShopingHistory))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Shoping History";
	}
private: void fillgrid(void) {
	dataGridViewShopingHistory->Rows->Clear();
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	sqlcommands getdata;
	getdata.getuserdata(id, name, surname, username, password, admin);

	std::vector<std::vector<std::string>> data;
	sqlshopinghistory get;
	if (admin != "2")
	{
		button1->Visible = false;
		dataGridViewShopingHistory->Columns["idsh"]->Visible = false;
		dataGridViewShopingHistory->Columns["useridsh"]->Visible = false;
		dataGridViewShopingHistory->Columns["productidsh"]->Visible = false;
		get.getusersaledata(data, std::to_string(id));
		for (int i = 0; i < data.size(); i++)
		{
			String^ id = nullptr;
			String^ userid = nullptr;
			String^ productid = nullptr;
			String^ productname = msclr::interop::marshal_as<String^>(data[i][0]);
			String^ productprice = msclr::interop::marshal_as<String^>(data[i][1]);
			String^ producttime = msclr::interop::marshal_as<String^>(data[i][2]);
			dataGridViewShopingHistory->Rows->Add(id, userid, productid, productname, productprice, producttime);
			//listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
		}
	}
	else
	{
		button1->Visible = true;
		dataGridViewShopingHistory->Columns["idsh"]->Visible = true;
		dataGridViewShopingHistory->Columns["useridsh"]->Visible = true;
		dataGridViewShopingHistory->Columns["productidsh"]->Visible = true;
		get.getallusersaledata(data);
		for (int i = 0; i < data.size(); i++)
		{
			String^ id = msclr::interop::marshal_as<String^>(data[i][0]);;
			String^ userid = msclr::interop::marshal_as<String^>(data[i][1]);;
			String^ productid = msclr::interop::marshal_as<String^>(data[i][2]);;
			String^ productname = msclr::interop::marshal_as<String^>(data[i][3]);
			String^ productprice = msclr::interop::marshal_as<String^>(data[i][4]);
			String^ producttime = msclr::interop::marshal_as<String^>(data[i][5]);
			dataGridViewShopingHistory->Rows->Add(id, userid, productid, productname, productprice, producttime);
			//listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
		}
	}
	
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string filetext;
		std::string filename = "shopinghistory.json";
		financieruser fin;
		fin.historyout(filetext);
		fin.outtofiledata(filename, filetext);
		MessageBox::Show("Data successfully exported to file",
			"To file", MessageBoxButtons::OK);
	}
};
}
