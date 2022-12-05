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
	/// Summary for addcategory
	/// </summary>
	public ref class addcategory : public System::Windows::Forms::Form
	{
	public:
		addcategory(void)
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
		~addcategory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(274, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(404, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &addcategory::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(274, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add new category";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addcategory::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(13, 63);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(255, 304);
			this->listBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(665, 47);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Add Category";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// addcategory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 395);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"addcategory";
			this->Text = L"addcategory";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		textBox1->MaxLength = 12;
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	adminuser admin;
	std::string category = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
	admin.addcategory(category);
	fillbox();
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
};
}
