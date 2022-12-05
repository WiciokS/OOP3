#pragma once

#include "adminuser.h"
#include "sqlcategories.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addproduct
	/// </summary>
	public ref class addproduct : public System::Windows::Forms::Form
	{
	public:
		addproduct(void)
		{
			InitializeComponent();
			fillbox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addproduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnselectpict;

	private: System::Windows::Forms::TextBox^ tbname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ rtbdescription;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbprice;
	private: System::Windows::Forms::Button^ btnaddproduct;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lb7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lb8;
	private: System::Windows::Forms::Label^ label8;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnselectpict = (gcnew System::Windows::Forms::Button());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rtbdescription = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbprice = (gcnew System::Windows::Forms::TextBox());
			this->btnaddproduct = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lb7 = (gcnew System::Windows::Forms::Label());
			this->lb8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(13, 97);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(210, 204);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &addproduct::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Select Category";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(230, 97);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(227, 204);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(225, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Picture";
			// 
			// btnselectpict
			// 
			this->btnselectpict->Location = System::Drawing::Point(230, 308);
			this->btnselectpict->Name = L"btnselectpict";
			this->btnselectpict->Size = System::Drawing::Size(227, 36);
			this->btnselectpict->TabIndex = 4;
			this->btnselectpict->Text = L"Select Picture";
			this->btnselectpict->UseVisualStyleBackColor = true;
			this->btnselectpict->Click += gcnew System::EventHandler(this, &addproduct::btnselectpict_Click);
			// 
			// tbname
			// 
			this->tbname->Location = System::Drawing::Point(724, 97);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(255, 30);
			this->tbname->TabIndex = 5;
			this->tbname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addproduct::tbname_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(724, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(458, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Description";
			// 
			// rtbdescription
			// 
			this->rtbdescription->Location = System::Drawing::Point(463, 97);
			this->rtbdescription->Name = L"rtbdescription";
			this->rtbdescription->Size = System::Drawing::Size(255, 204);
			this->rtbdescription->TabIndex = 8;
			this->rtbdescription->Text = L"";
			this->rtbdescription->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addproduct::rtbdescription_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(724, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Price";
			// 
			// tbprice
			// 
			this->tbprice->Location = System::Drawing::Point(724, 163);
			this->tbprice->Name = L"tbprice";
			this->tbprice->Size = System::Drawing::Size(255, 30);
			this->tbprice->TabIndex = 10;
			this->tbprice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addproduct::tbprice_KeyPress);
			// 
			// btnaddproduct
			// 
			this->btnaddproduct->Location = System::Drawing::Point(725, 200);
			this->btnaddproduct->Name = L"btnaddproduct";
			this->btnaddproduct->Size = System::Drawing::Size(254, 41);
			this->btnaddproduct->TabIndex = 11;
			this->btnaddproduct->Text = L"Add Product";
			this->btnaddproduct->UseVisualStyleBackColor = true;
			this->btnaddproduct->Click += gcnew System::EventHandler(this, &addproduct::btnaddproduct_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(967, 56);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Add Product";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb7
			// 
			this->lb7->AutoSize = true;
			this->lb7->Location = System::Drawing::Point(15, 304);
			this->lb7->Name = L"lb7";
			this->lb7->Size = System::Drawing::Size(64, 25);
			this->lb7->TabIndex = 13;
			this->lb7->Text = L"label7";
			this->lb7->Visible = false;
			// 
			// lb8
			// 
			this->lb8->AutoSize = true;
			this->lb8->Location = System::Drawing::Point(15, 329);
			this->lb8->Name = L"lb8";
			this->lb8->Size = System::Drawing::Size(64, 25);
			this->lb8->TabIndex = 13;
			this->lb8->Text = L"label8";
			this->lb8->Visible = false;
			// 
			// addproduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(991, 395);
			this->Controls->Add(this->lb8);
			this->Controls->Add(this->lb7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnaddproduct);
			this->Controls->Add(this->tbprice);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->rtbdescription);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->btnselectpict);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Location = System::Drawing::Point(13, 308);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"addproduct";
			this->Text = L"addproduct";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	lb7->Text = listBox1->SelectedItem->ToString();
}

private: void fillbox(void) {
	listBox1->Items->Clear();
	std::vector<std::string> data;
	sqlcategory get;
	get.getcategory(data);
	for (int i = 0; i < data.size(); i++)
	{
		listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
	}
}
private: System::Void btnselectpict_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->Image = Image::FromFile(ofd->FileName);
		lb8->Text = ofd->FileName;
	}
}
private: System::Void btnaddproduct_Click(System::Object^ sender, System::EventArgs^ e) {
	adminuser admin;
	std::string category = msclr::interop::marshal_as<std::string>(lb7->Text); 
	std::string name = msclr::interop::marshal_as<std::string>(tbname->Text);
	std::string description = msclr::interop::marshal_as<std::string>(rtbdescription->Text);
	std::string price = msclr::interop::marshal_as<std::string>(tbprice->Text);
	std::string picture = msclr::interop::marshal_as<std::string>(lb8->Text);
	admin.addproduct(category, name, description, price, picture);
}
private: System::Void rtbdescription_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	rtbdescription->MaxLength = 125;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void tbname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbname->MaxLength = 12;
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
private: System::Void tbprice_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	tbprice->MaxLength = 12;
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
};
}
