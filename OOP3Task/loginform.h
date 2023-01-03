#pragma once

#include "Data.h"
#include "sqlcom.h"
#include "mainform.h"
//#include "registerform.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for loginform
	/// </summary>
	public ref class loginform : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ otherform;
	public:
		loginform(void)
		{
			
			InitializeComponent();
			resetlogin();
			fillbox();
			//
			//TODO: Add the constructor code here
			//
		}

		loginform(System::Windows::Forms::Form^ o)
		{
			otherform = o;
			InitializeComponent();
			resetlogin();
			fillbox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbusername;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ cbadmin;
	private: System::Windows::Forms::Button^ btnlogin;
	private: System::Windows::Forms::LinkLabel^ llregister;
	private: System::Windows::Forms::Button^ btnend;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ lb4;

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
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbadmin = (gcnew System::Windows::Forms::CheckBox());
			this->btnlogin = (gcnew System::Windows::Forms::Button());
			this->llregister = (gcnew System::Windows::Forms::LinkLabel());
			this->btnend = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->lb4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(829, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbusername
			// 
			this->tbusername->Location = System::Drawing::Point(200, 127);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(641, 30);
			this->tbusername->TabIndex = 1;
			this->tbusername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginform::tbusername_KeyPress);
			// 
			// tbpassword
			// 
			this->tbpassword->Location = System::Drawing::Point(200, 163);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->PasswordChar = '*';
			this->tbpassword->Size = System::Drawing::Size(641, 30);
			this->tbpassword->TabIndex = 1;
			this->tbpassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginform::tbpassword_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(92, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// cbadmin
			// 
			this->cbadmin->AutoSize = true;
			this->cbadmin->Location = System::Drawing::Point(200, 200);
			this->cbadmin->Name = L"cbadmin";
			this->cbadmin->Size = System::Drawing::Size(90, 29);
			this->cbadmin->TabIndex = 3;
			this->cbadmin->Text = L"Admin";
			this->cbadmin->UseVisualStyleBackColor = true;
			this->cbadmin->Visible = false;
			// 
			// btnlogin
			// 
			this->btnlogin->Location = System::Drawing::Point(200, 236);
			this->btnlogin->Name = L"btnlogin";
			this->btnlogin->Size = System::Drawing::Size(127, 41);
			this->btnlogin->TabIndex = 4;
			this->btnlogin->Text = L"Login";
			this->btnlogin->UseVisualStyleBackColor = true;
			this->btnlogin->Click += gcnew System::EventHandler(this, &loginform::btnlogin_Click);
			// 
			// llregister
			// 
			this->llregister->AutoSize = true;
			this->llregister->Location = System::Drawing::Point(333, 244);
			this->llregister->Name = L"llregister";
			this->llregister->Size = System::Drawing::Size(83, 25);
			this->llregister->TabIndex = 5;
			this->llregister->TabStop = true;
			this->llregister->Text = L"Register";
			this->llregister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &loginform::llregister_LinkClicked);
			// 
			// btnend
			// 
			this->btnend->Location = System::Drawing::Point(714, 236);
			this->btnend->Name = L"btnend";
			this->btnend->Size = System::Drawing::Size(126, 40);
			this->btnend->TabIndex = 6;
			this->btnend->Text = L"End";
			this->btnend->UseVisualStyleBackColor = true;
			this->btnend->Click += gcnew System::EventHandler(this, &loginform::btnend_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(432, 200);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 104);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &loginform::listBox1_SelectedIndexChanged);
			// 
			// lb4
			// 
			this->lb4->AutoSize = true;
			this->lb4->Location = System::Drawing::Point(559, 212);
			this->lb4->Name = L"lb4";
			this->lb4->Size = System::Drawing::Size(38, 25);
			this->lb4->TabIndex = 8;
			this->lb4->Text = L"lb4";
			this->lb4->Visible = false;
			// 
			// loginform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 396);
			this->Controls->Add(this->lb4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnend);
			this->Controls->Add(this->llregister);
			this->Controls->Add(this->btnlogin);
			this->Controls->Add(this->cbadmin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(871, 443);
			this->MinimumSize = System::Drawing::Size(871, 443);
			this->Name = L"loginform";
			this->Text = L"loginform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnend_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void llregister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	otherform->Show();
	//registerform^ registerf = gcnew registerform;
	//registerf->ShowDialog();
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
private: System::Void btnlogin_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	std::string name;
	std::string surname;
	std::string Username = msclr::interop::marshal_as<std::string>(this->tbusername->Text);
	std::string Password = msclr::interop::marshal_as<std::string>(this->tbpassword->Text);
	std::string Admin;
	bool isexist = false;

	if (lb4->Text == "admin")
		Admin = "1";
	else if (lb4->Text == "financier")
		Admin = "2";
	else if (lb4->Text == "user")
		Admin = "0";
	else
		Admin = "0";


	if (this->tbusername->Text->Length == 0 || this->tbpassword->Text->Length == 0)
	{
		MessageBox::Show("Please enter all the fields",
			"Empty fields Error", MessageBoxButtons::OK);
		return;
	}
	//try
	//{
		sqlcommands getdata;
		getdata.getlogininfo(id, name, surname, Username, Password, Admin, isexist);
		if (isexist)
		{
			getdata.setlogin(std::to_string(id));
			MessageBox::Show("Successfull Login",
				"Login", MessageBoxButtons::OK);

			//otherform->Close();
			this->Hide();
			mainform^ ma = gcnew mainform;
			ma->ShowDialog();
		}
	//}
	
	//catch (...) {
	//	MessageBox::Show("Failed to connect to database",
	//		"Database Connection Error", MessageBoxButtons::OK);
	//}
	
}
	   private: void resetlogin(void) {
		   sqlcommands reset;
		   reset.resetloginvalue();
	   }
private: void fillbox(void) {
	listBox1->Items->Clear();
	listBox1->Items->Add("user");
	listBox1->Items->Add("admin");
	listBox1->Items->Add("financier");
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	lb4->Text = listBox1->SelectedItem->ToString();
}
};
}
