#pragma once

#include "password.h"
#include "picturechangeform.h"
#include "deleteuserform.h"
#include "addcategory.h"
#include "addproduct.h"
#include "wishlist.h"
#include "registeredviewcontent.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
		{
			InitializeComponent();
			isadmin();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnviewcontent;
	private: System::Windows::Forms::Button^ btnwish;
	private: System::Windows::Forms::Button^ btnaddcategory;
	private: System::Windows::Forms::Button^ btnaddproduct;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnviewcontent = (gcnew System::Windows::Forms::Button());
			this->btnwish = (gcnew System::Windows::Forms::Button());
			this->btnaddcategory = (gcnew System::Windows::Forms::Button());
			this->btnaddproduct = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 95);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(400, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainform::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 181);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(400, 80);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Upload/Change Profile Picture";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainform::button2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(802, 77);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Main Form";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(14, 267);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(400, 80);
			this->button3->TabIndex = 3;
			this->button3->Text = L"View/Delete User";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainform::button3_Click);
			// 
			// btnviewcontent
			// 
			this->btnviewcontent->Location = System::Drawing::Point(420, 95);
			this->btnviewcontent->Name = L"btnviewcontent";
			this->btnviewcontent->Size = System::Drawing::Size(400, 80);
			this->btnviewcontent->TabIndex = 4;
			this->btnviewcontent->Text = L"View Content";
			this->btnviewcontent->UseVisualStyleBackColor = true;
			this->btnviewcontent->Click += gcnew System::EventHandler(this, &mainform::btnviewcontent_Click);
			// 
			// btnwish
			// 
			this->btnwish->Location = System::Drawing::Point(420, 181);
			this->btnwish->Name = L"btnwish";
			this->btnwish->Size = System::Drawing::Size(400, 80);
			this->btnwish->TabIndex = 4;
			this->btnwish->Text = L"WishList";
			this->btnwish->UseVisualStyleBackColor = true;
			this->btnwish->Click += gcnew System::EventHandler(this, &mainform::btnwish_Click);
			// 
			// btnaddcategory
			// 
			this->btnaddcategory->Location = System::Drawing::Point(420, 267);
			this->btnaddcategory->Name = L"btnaddcategory";
			this->btnaddcategory->Size = System::Drawing::Size(400, 80);
			this->btnaddcategory->TabIndex = 4;
			this->btnaddcategory->Text = L"Add category";
			this->btnaddcategory->UseVisualStyleBackColor = true;
			this->btnaddcategory->Click += gcnew System::EventHandler(this, &mainform::btnaddcategory_Click);
			// 
			// btnaddproduct
			// 
			this->btnaddproduct->Location = System::Drawing::Point(420, 353);
			this->btnaddproduct->Name = L"btnaddproduct";
			this->btnaddproduct->Size = System::Drawing::Size(400, 80);
			this->btnaddproduct->TabIndex = 4;
			this->btnaddproduct->Text = L"Add Product";
			this->btnaddproduct->UseVisualStyleBackColor = true;
			this->btnaddproduct->Click += gcnew System::EventHandler(this, &mainform::btnaddproduct_Click);
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 458);
			this->Controls->Add(this->btnaddproduct);
			this->Controls->Add(this->btnaddcategory);
			this->Controls->Add(this->btnwish);
			this->Controls->Add(this->btnviewcontent);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"mainform";
			this->Text = L"mainform";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		password^ ma = gcnew password;
		ma->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		picturechangeform^ pict = gcnew picturechangeform;
		pict->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteuserform^ del = gcnew deleteuserform;
		del->ShowDialog();

	}


		   private: void isadmin(void) {
			   int id;
			   std::string name;
			   std::string surname;
			   std::string username;
			   std::string password;
			   std::string admin;
			   sqlcommands getdata;
			   getdata.getuserdata(id, name, surname, username, password, admin);
			   if (admin == "0")
			   {
				   button3->Enabled = false;
				   button3->Visible = false;
				   btnaddcategory->Enabled = false;
				   btnaddcategory->Visible = false;
				   btnaddproduct->Enabled = false;
				   btnaddproduct->Visible = false;
			   }
		   }
private: System::Void btnaddcategory_Click(System::Object^ sender, System::EventArgs^ e) {
	addcategory^ cat = gcnew addcategory;
	cat->ShowDialog();
}
private: System::Void btnaddproduct_Click(System::Object^ sender, System::EventArgs^ e) {
	addproduct^ prod = gcnew addproduct;
	prod->ShowDialog();
}
private: System::Void btnwish_Click(System::Object^ sender, System::EventArgs^ e) {
	wishlist^ wish = gcnew wishlist;
	wish->ShowDialog();
}
private: System::Void btnviewcontent_Click(System::Object^ sender, System::EventArgs^ e) {
	registeredviewcontent^ reg = gcnew registeredviewcontent;
	reg->ShowDialog();
}
};

}
