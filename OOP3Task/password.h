#pragma once

#include "Sqlcom.h"
#include "registereduser.h"
#include "adminuser.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for password
	/// </summary>
	public ref class password : public System::Windows::Forms::Form
	{
	public:
		password(void)
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
		~password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnupdatepassword;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnupdatepassword = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(185, 112);
			this->textBox1->Name = L"textBox1";
			this->textBox1->PasswordChar = '*';
			this->textBox1->Size = System::Drawing::Size(521, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &password::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(694, 77);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Password Change";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(185, 148);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(521, 30);
			this->textBox2->TabIndex = 0;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &password::textBox2_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Current Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"New Password";
			// 
			// btnupdatepassword
			// 
			this->btnupdatepassword->Location = System::Drawing::Point(185, 185);
			this->btnupdatepassword->Name = L"btnupdatepassword";
			this->btnupdatepassword->Size = System::Drawing::Size(202, 43);
			this->btnupdatepassword->TabIndex = 3;
			this->btnupdatepassword->Text = L"Update Password";
			this->btnupdatepassword->UseVisualStyleBackColor = true;
			this->btnupdatepassword->Click += gcnew System::EventHandler(this, &password::btnupdatepassword_Click);
			// 
			// password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 264);
			this->Controls->Add(this->btnupdatepassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"password";
			this->Text = L"password";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	textBox1->MaxLength = 12;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08 && !Char::IsDigit(e->KeyChar))
		e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	textBox2->MaxLength = 12;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08 && !Char::IsDigit(e->KeyChar))
		e->Handled = true;
}
private: System::Void btnupdatepassword_Click(System::Object^ sender, System::EventArgs^ e) {

	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	std::string curp = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
	std::string newp = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
	if (this->textBox1->Text->Length == 0 || this->textBox2->Text->Length == 0)
	{
		MessageBox::Show("Please enter all the fields "
			, "Empty fields Error", MessageBoxButtons::OK);
		return;
	}
	try
	{
		sqlcommands getdata;
		getdata.getuserdata(id, name, surname, username, password, admin);
		//std::string idi = std::to_string(id);
		//lbdebug->Text = msclr::interop::marshal_as<String^>(idi);
		if (admin == "0")
		{
			registereduser reguser(id, name, surname, username, password);
			reguser.changepassword(curp, newp);
		}
		else
		{
			adminuser admuser(id, name, surname, username, password);
			admuser.changepassword(curp, newp);
		}
		
		MessageBox::Show("Password Updated "
			, "Paassword Update", MessageBoxButtons::OK);
	}
	catch (int e)
	{
		if (e == 404)
		{
			MessageBox::Show("Wrong entered password or same new password "
				, "Paassword Error", MessageBoxButtons::OK);
			return;
		}
	}
	
}
};
}
