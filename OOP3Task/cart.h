#pragma once

#include "sqlcategories.h"
#include "sqlcom.h"
#include "sqlwish.h"
#include "registereduser.h"
#include "adminuser.h"
#include "comments.h"
#include "sqlcart.h"
#include "sqlsale.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cart
	/// </summary>
	public ref class cart : public System::Windows::Forms::Form
	{
	public:
		cart(void)
		{
			InitializeComponent();
			fillgrid();
			pricecalc();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewCart;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Idc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ useridc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productidc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productnamec;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pricec;
	private: System::Windows::Forms::DataGridViewButtonColumn^ deletec;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnbuy;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;







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
			this->dataGridViewCart = (gcnew System::Windows::Forms::DataGridView());
			this->Idc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->useridc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productidc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productnamec = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pricec = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->deletec = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnbuy = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCart))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1026, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cart";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &cart::label1_Click);
			// 
			// dataGridViewCart
			// 
			this->dataGridViewCart->AllowUserToAddRows = false;
			this->dataGridViewCart->AllowUserToDeleteRows = false;
			this->dataGridViewCart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewCart->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewCart->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewCart->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCart->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Idc,
					this->useridc, this->productidc, this->productnamec, this->pricec, this->deletec
			});
			this->dataGridViewCart->Location = System::Drawing::Point(21, 84);
			this->dataGridViewCart->Name = L"dataGridViewCart";
			this->dataGridViewCart->ReadOnly = true;
			this->dataGridViewCart->RowHeadersWidth = 51;
			this->dataGridViewCart->RowTemplate->Height = 24;
			this->dataGridViewCart->Size = System::Drawing::Size(1019, 319);
			this->dataGridViewCart->TabIndex = 1;
			this->dataGridViewCart->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &cart::dataGridViewCart_CellContentClick);
			// 
			// Idc
			// 
			this->Idc->HeaderText = L"Id";
			this->Idc->MinimumWidth = 6;
			this->Idc->Name = L"Idc";
			this->Idc->ReadOnly = true;
			this->Idc->Visible = false;
			// 
			// useridc
			// 
			this->useridc->HeaderText = L"Userid";
			this->useridc->MinimumWidth = 6;
			this->useridc->Name = L"useridc";
			this->useridc->ReadOnly = true;
			this->useridc->Visible = false;
			// 
			// productidc
			// 
			this->productidc->HeaderText = L"Productid";
			this->productidc->MinimumWidth = 6;
			this->productidc->Name = L"productidc";
			this->productidc->ReadOnly = true;
			this->productidc->Visible = false;
			// 
			// productnamec
			// 
			this->productnamec->HeaderText = L"ProductName";
			this->productnamec->MinimumWidth = 6;
			this->productnamec->Name = L"productnamec";
			this->productnamec->ReadOnly = true;
			// 
			// pricec
			// 
			this->pricec->HeaderText = L"Price";
			this->pricec->MinimumWidth = 6;
			this->pricec->Name = L"pricec";
			this->pricec->ReadOnly = true;
			// 
			// deletec
			// 
			this->deletec->HeaderText = L"Delete";
			this->deletec->MinimumWidth = 6;
			this->deletec->Name = L"deletec";
			this->deletec->ReadOnly = true;
			this->deletec->Text = L"Delete";
			this->deletec->UseColumnTextForButtonValue = true;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(16, 444);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 33);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Total Price: ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Click += gcnew System::EventHandler(this, &cart::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(134, 448);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnbuy
			// 
			this->btnbuy->Location = System::Drawing::Point(858, 439);
			this->btnbuy->Name = L"btnbuy";
			this->btnbuy->Size = System::Drawing::Size(181, 52);
			this->btnbuy->TabIndex = 4;
			this->btnbuy->Text = L"Buy";
			this->btnbuy->UseVisualStyleBackColor = true;
			this->btnbuy->Click += gcnew System::EventHandler(this, &cart::btnbuy_Click);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 406);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 33);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Price:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Click += gcnew System::EventHandler(this, &cart::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(134, 410);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label5";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(585, 466);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(329, 418);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 25);
			this->label7->TabIndex = 8;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(334, 444);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 25);
			this->label8->TabIndex = 9;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// cart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1052, 503);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnbuy);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridViewCart);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"cart";
			this->Text = L"cart";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Cart";
	}
private: void fillgrid(void) {
	dataGridViewCart->Rows->Clear();
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	sqlcommands getdata;
	getdata.getuserdata(id, name, surname, username, password, admin);

	std::vector<std::vector<std::string>> data;
	sqlcart get;
	get.getusercartproduct(data, std::to_string(id));
	for (int i = 0; i < data.size(); i++)
	{
		String^ id = msclr::interop::marshal_as<String^>(data[i][0]);
		String^ userid = msclr::interop::marshal_as<String^>(data[i][1]);
		String^ productid = msclr::interop::marshal_as<String^>(data[i][2]);
		String^ productname = msclr::interop::marshal_as<String^>(data[i][3]);
		String^ productprice = msclr::interop::marshal_as<String^>(data[i][4]);
		dataGridViewCart->Rows->Add(id, userid, productid, productname,productprice);
		//listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
	}
}
private: void pricecalc(void) {

	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	std::string status;
	sqlcommands getdata;
	getdata.getuserdata(id, name, surname, username, password, admin);
	sqlsale sel;
	sel.allowedsale(std::to_string(id), status);

	int price = 0;
	for (int i = 0; i < dataGridViewCart->Rows->Count; i++)
	{
		String^ pr = dataGridViewCart->Rows[i]->Cells[4]->Value->ToString();
		std::string prnorm = msclr::interop::marshal_as<std::string>(pr);
		price += std::stoi(prnorm);
	}
	label5->Text = price.ToString();
	if (status == "allow")
	{
		price = price * 0.9;
	}
	label3->Text = price.ToString();
	//dataGridViewCart->Rows[i]->Cells[4]->Value->ToString();
}
private: System::Void dataGridViewCart_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	sqlcommands data;
	data.getuserdata(id, name, surname, username, password, admin);

	if (e->RowIndex > -1)		//Ignore clicks of the column headers
	{
		if (e->ColumnIndex == 5)
		{
			String^ prodid = dataGridViewCart->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			std::string idi = msclr::interop::marshal_as<std::string>(prodid);

			registereduser reg;
			reg.deletefromcart(idi);

			fillgrid();
			pricecalc();
			this->Refresh();
		}
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnbuy_Click(System::Object^ sender, System::EventArgs^ e) {
	label6->Text = "(" + DateTime::Now + ")";
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	std::string status;
	std::string disc = "0.9";
	sqlcommands getdata;
	getdata.getuserdata(id, name, surname, username, password, admin);
	sqlsale sel;
	sel.allowedsale(std::to_string(id), status);
	String^ time = label6->Text;
	std::string timestr = msclr::interop::marshal_as<std::string>(time);
	std::vector<std::vector<std::string>> data;
	sqlcart get;
	get.getusercartproduct(data, std::to_string(id));
	for (int i = 0; i < data.size(); i++)
	{
		std::string idi = data[i][0];
		std::string userid = data[i][1];
		std::string productid = data[i][2];
		std::string productname = data[i][3];
		std::string productprice = data[i][4];
		label7->Text = msclr::interop::marshal_as<String^>(productprice);
		float pr = std::stof(productprice);
		float ds = std::stof(disc);
		float res = sel.setsale(status, pr, ds);
		int a = (int)res;
		
		productprice = std::to_string(a);
		label8->Text = msclr::interop::marshal_as<String^>(productprice);
		registereduser reg;
		reg.buy(std::to_string(id), productid, productname, productprice, timestr);
		reg.deletefromcart(idi);
	}
	sel.endsale(std::to_string(id));
	MessageBox::Show("Successfuly bought",
		"Buy", MessageBoxButtons::OK);
	fillgrid();
	pricecalc();
	this->Refresh();
}
};
}
