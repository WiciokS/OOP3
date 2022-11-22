#pragma once

#include "Data.h"
#include "Sqlcom.h"
#include "loginform.h"
#include "anonymous.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for registerform
	/// </summary>
	public ref class registerform : public System::Windows::Forms::Form
	{
	public:
		registerform(void)
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
		~registerform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnregister;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::TextBox^ tbsurname;
	private: System::Windows::Forms::TextBox^ tbyear;
	private: System::Windows::Forms::TextBox^ tbusername;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ tbmonth;
	private: System::Windows::Forms::TextBox^ tbday;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ cbadmin;
	private: System::Windows::Forms::LinkLabel^ lllogin;

	private: System::Windows::Forms::Button^ btnend;


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
			this->btnregister = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->tbsurname = (gcnew System::Windows::Forms::TextBox());
			this->tbyear = (gcnew System::Windows::Forms::TextBox());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbmonth = (gcnew System::Windows::Forms::TextBox());
			this->tbday = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cbadmin = (gcnew System::Windows::Forms::CheckBox());
			this->lllogin = (gcnew System::Windows::Forms::LinkLabel());
			this->btnend = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnregister
			// 
			this->btnregister->Location = System::Drawing::Point(204, 331);
			this->btnregister->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnregister->Name = L"btnregister";
			this->btnregister->Size = System::Drawing::Size(112, 36);
			this->btnregister->TabIndex = 0;
			this->btnregister->Text = L"Register";
			this->btnregister->UseVisualStyleBackColor = true;
			this->btnregister->Click += gcnew System::EventHandler(this, &registerform::btnregister_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(829, 81);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbname
			// 
			this->tbname->Location = System::Drawing::Point(204, 93);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(637, 30);
			this->tbname->TabIndex = 2;
			this->tbname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &registerform::tbname_KeyPress);
			// 
			// tbsurname
			// 
			this->tbsurname->Location = System::Drawing::Point(204, 129);
			this->tbsurname->Name = L"tbsurname";
			this->tbsurname->Size = System::Drawing::Size(637, 30);
			this->tbsurname->TabIndex = 2;
			this->tbsurname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &registerform::tbsurname_KeyPress);
			// 
			// tbyear
			// 
			this->tbyear->Location = System::Drawing::Point(3, 3);
			this->tbyear->Name = L"tbyear";
			this->tbyear->Size = System::Drawing::Size(206, 30);
			this->tbyear->TabIndex = 2;
			this->tbyear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &registerform::tbyear_KeyPress);
			// 
			// tbusername
			// 
			this->tbusername->Location = System::Drawing::Point(204, 210);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(637, 30);
			this->tbusername->TabIndex = 2;
			this->tbusername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &registerform::tbusername_KeyPress);
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(204, 246);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(637, 30);
			this->tbpassword->TabIndex = 2;
			this->tbpassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &registerform::tbpassword_KeyPress);
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
			this->tableLayoutPanel1->Controls->Add(this->tbyear, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tbmonth, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tbday, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(204, 165);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(637, 39);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// tbmonth
			// 
			this->tbmonth->Location = System::Drawing::Point(215, 3);
			this->tbmonth->Name = L"tbmonth";
			this->tbmonth->Size = System::Drawing::Size(206, 30);
			this->tbmonth->TabIndex = 2;
			this->tbmonth->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &registerform::tbmonth_KeyPress);
			// 
			// tbday
			// 
			this->tbday->Location = System::Drawing::Point(427, 3);
			this->tbday->Name = L"tbday";
			this->tbday->Size = System::Drawing::Size(206, 30);
			this->tbday->TabIndex = 2;
			this->tbday->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &registerform::tbday_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(134, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(106, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Surname";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(85, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Date of birth";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(96, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(100, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Password";
			// 
			// cbadmin
			// 
			this->cbadmin->AutoSize = true;
			this->cbadmin->Location = System::Drawing::Point(204, 294);
			this->cbadmin->Name = L"cbadmin";
			this->cbadmin->Size = System::Drawing::Size(90, 29);
			this->cbadmin->TabIndex = 5;
			this->cbadmin->Text = L"Admin";
			this->cbadmin->UseVisualStyleBackColor = true;
			// 
			// lllogin
			// 
			this->lllogin->AutoSize = true;
			this->lllogin->Location = System::Drawing::Point(323, 337);
			this->lllogin->Name = L"lllogin";
			this->lllogin->Size = System::Drawing::Size(60, 25);
			this->lllogin->TabIndex = 6;
			this->lllogin->TabStop = true;
			this->lllogin->Text = L"Login";
			this->lllogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &registerform::lllogin_LinkClicked);
			// 
			// btnend
			// 
			this->btnend->Location = System::Drawing::Point(725, 331);
			this->btnend->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnend->Name = L"btnend";
			this->btnend->Size = System::Drawing::Size(112, 36);
			this->btnend->TabIndex = 0;
			this->btnend->Text = L"End";
			this->btnend->UseVisualStyleBackColor = true;
			this->btnend->Click += gcnew System::EventHandler(this, &registerform::btnend_Click);
			// 
			// registerform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 396);
			this->Controls->Add(this->lllogin);
			this->Controls->Add(this->cbadmin);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->tbsurname);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnend);
			this->Controls->Add(this->btnregister);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(871, 443);
			this->MinimumSize = System::Drawing::Size(871, 443);
			this->Name = L"registerform";
			this->Text = L"registerform";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnregister_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string id = "0";
		std::string name = msclr::interop::marshal_as<std::string>(this->tbname->Text);
		std::string surname = msclr::interop::marshal_as<std::string>(this->tbsurname->Text);
		std::string Username = msclr::interop::marshal_as<std::string>(this->tbusername->Text);
		std::string Password = msclr::interop::marshal_as<std::string>(this->tbpassword->Text);
		std::string Admin;
		std::string year = msclr::interop::marshal_as<std::string>(this->tbyear->Text);
		std::string month = msclr::interop::marshal_as<std::string>(this->tbmonth->Text);
		std::string day = msclr::interop::marshal_as<std::string>(this->tbday->Text);

		if (cbadmin->Checked)
			Admin = "1";
		else
			Admin = "0";
		if (this->tbname->Text->Length == 0 || this->tbsurname->Text->Length == 0
			|| this->tbyear->Text->Length == 0 || this->tbmonth->Text->Length == 0 || this->tbday->Text->Length == 0
			|| this->tbusername->Text->Length == 0 || this->tbpassword->Text->Length == 0)
		{
			MessageBox::Show("Please enter all the fields",
				"Empty fields Error", MessageBoxButtons::OK);
			return;
		}
		auto datas = new Datas;
		if (datas->IsMore(stoi(year), stoi(month), stoi(day)))
		{
			MessageBox::Show("Please enter birthday data correctly",
				"Birthday Error", MessageBoxButtons::OK);
			return;
		}
		if (datas->Age(stoi(year), stoi(month), stoi(day)))
		{

		}
		else
		{
			MessageBox::Show("Your age must be atleast 14",
				"Age Error", MessageBoxButtons::OK);
			return;
		}
		try
		{
			anonymous reg(name, surname, Username, Password, Admin);
			reg.registeranon();
			//auto* use = new User(id, name, surname, Username, Password, Admin);
			MessageBox::Show("Successfull Register",
				"Register", MessageBoxButtons::OK);

			this->Hide();
			loginform^ login = gcnew loginform;
			login->ShowDialog();
		}
		
		catch (...) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}
private: System::Void btnend_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void lllogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	loginform^ login = gcnew loginform(this);
	login->ShowDialog();
	//this->Hide();
}

private: System::Void tbname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbname->MaxLength = 12;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void tbsurname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbsurname->MaxLength = 12;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void tbyear_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbyear->MaxLength = 4;
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void tbmonth_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbmonth->MaxLength = 2;
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void tbday_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbday->MaxLength = 2;
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void tbusername_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbusername->MaxLength = 12;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08 && !Char::IsDigit(e->KeyChar))
		e->Handled = true;
}
private: System::Void tbpassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbpassword->MaxLength = 12;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08 && !Char::IsDigit(e->KeyChar))
		e->Handled = true;
}
};
}

//this->Hide();
//loginform^ login = gcnew loginform;
//login->ShowDialog();