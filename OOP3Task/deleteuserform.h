#pragma once

#include "sqlcom.h"
#include "adminuser.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for deleteuserform
	/// </summary>
	public ref class deleteuserform : public System::Windows::Forms::Form
	{
	public:
		deleteuserform(void)
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
		~deleteuserform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(213, 179);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &deleteuserform::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(232, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(232, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label1";
			this->label2->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(232, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Delete User";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &deleteuserform::button1_Click);
			// 
			// deleteuserform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 335);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"deleteuserform";
			this->Text = L"deleteuserform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void fillbox(void) {
		listBox1->Items->Clear();
		std::vector<std::vector<std::string>> data;
		sqlcommands getdata;
		getdata.getallusersdata(data);
		for (int i = 0; i < data.size(); i++)
		{
			listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i][0]) + " " + msclr::interop::marshal_as<String^>(data[i][1]));
		}
		
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//textbox.Text = listBox.SelectedItem.ToString();
		label1->Text = listBox1->SelectedItem->ToString();
		
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		std::string name;
		std::string surname;
		std::string username;
		std::string password;
		std::string admin;
		std::string i;
		sqlcommands getdata;
		std::string s = msclr::interop::marshal_as<std::string>(label1->Text);
		std::stringstream ss(s);
		std::string word;
		if (ss >> word) {
			i = word;
		}
		getdata.getuserdata(id, name, surname, username, password, admin);
		adminuser admuser(id, name, surname, username, password);
		admuser.deleteuserfromlistbox(i);
		fillbox();
	}
};
}
