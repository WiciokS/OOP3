#pragma once

#include <ctime>
#include "sqlcomments.h"
#include "adminuser.h"
#include "registereduser.h"

namespace OOP3Task {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for comments
	/// </summary>
	public ref class comments : public System::Windows::Forms::Form
	{
	public:
		comments(void)
		{
			InitializeComponent();
			isadmin();
			fillgrid();
			//
			//TODO: Add the constructor code here
			//
		}
		comments(String^ data)
		{
			InitializeComponent();
			isadmin();
			label1->Text = data;
			fillgrid();
			setvis();
			//
			//TODO: Add the constructor code here
			//
		}
		comments(String^data, String^ dat)
		{
			InitializeComponent();
			isadmin();
			label1->Text = data;
			fillgrid();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~comments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewCom;
	protected:





	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label2;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Idcom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usernamecom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Datecom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Commentcom;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Deletecom;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridViewCom = (gcnew System::Windows::Forms::DataGridView());
			this->Idcom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usernamecom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Datecom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Commentcom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Deletecom = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCom))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewCom
			// 
			this->dataGridViewCom->AllowUserToAddRows = false;
			this->dataGridViewCom->AllowUserToDeleteRows = false;
			this->dataGridViewCom->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewCom->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewCom->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCom->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Idcom,
					this->Usernamecom, this->Datecom, this->Commentcom, this->Deletecom
			});
			this->dataGridViewCom->Location = System::Drawing::Point(13, 76);
			this->dataGridViewCom->Name = L"dataGridViewCom";
			this->dataGridViewCom->ReadOnly = true;
			this->dataGridViewCom->RowHeadersWidth = 51;
			this->dataGridViewCom->RowTemplate->Height = 24;
			this->dataGridViewCom->Size = System::Drawing::Size(834, 333);
			this->dataGridViewCom->TabIndex = 0;
			this->dataGridViewCom->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &comments::dataGridViewCom_CellContentClick);
			// 
			// Idcom
			// 
			this->Idcom->HeaderText = L"Id";
			this->Idcom->MinimumWidth = 6;
			this->Idcom->Name = L"Idcom";
			this->Idcom->ReadOnly = true;
			this->Idcom->Visible = false;
			// 
			// Usernamecom
			// 
			this->Usernamecom->HeaderText = L"Username";
			this->Usernamecom->MinimumWidth = 6;
			this->Usernamecom->Name = L"Usernamecom";
			this->Usernamecom->ReadOnly = true;
			// 
			// Datecom
			// 
			dataGridViewCellStyle1->Format = L"d";
			dataGridViewCellStyle1->NullValue = nullptr;
			this->Datecom->DefaultCellStyle = dataGridViewCellStyle1;
			this->Datecom->HeaderText = L"Date";
			this->Datecom->MinimumWidth = 6;
			this->Datecom->Name = L"Datecom";
			this->Datecom->ReadOnly = true;
			// 
			// Commentcom
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Commentcom->DefaultCellStyle = dataGridViewCellStyle2;
			this->Commentcom->HeaderText = L"Comment";
			this->Commentcom->MinimumWidth = 6;
			this->Commentcom->Name = L"Commentcom";
			this->Commentcom->ReadOnly = true;
			// 
			// Deletecom
			// 
			this->Deletecom->HeaderText = L"Delete";
			this->Deletecom->MinimumWidth = 6;
			this->Deletecom->Name = L"Deletecom";
			this->Deletecom->ReadOnly = true;
			this->Deletecom->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Deletecom->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Deletecom->Text = L"Delete";
			this->Deletecom->UseColumnTextForButtonValue = true;
			this->Deletecom->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(853, 76);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(322, 182);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &comments::richTextBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(853, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add Comment";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &comments::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(853, 309);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1162, 60);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Comments";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(853, 325);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &comments::label3_Click);
			// 
			// comments
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 421);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->dataGridViewCom);
			this->Name = L"comments";
			this->Text = L"comments";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		richTextBox1->MaxLength = 125;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
	sqlcommands getdata;
	getdata.getuserdata(id, name, surname, username, password, admin);
	label3->Text = "(" + DateTime::Now + ")";
	String^ time = label3->Text;
	String^ comen = richTextBox1->Text;
	String^ idi = label1->Text;
	registereduser reg;
	reg.addcomment(username, msclr::interop::marshal_as<std::string>(time)
		, msclr::interop::marshal_as<std::string>(comen), msclr::interop::marshal_as<std::string>(idi));
	fillgrid();
	this->Refresh();
	//msclr::interop::marshal_as<std::string>
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
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
	if (admin == "1")
	{
		dataGridViewCom->Columns[4]->Visible = true;
	}
}
	private: void setvis(void) {
		richTextBox1->Visible = true;
		button1->Visible = true;

	}
private: void fillgrid(void) {
	dataGridViewCom->Rows->Clear();
	std::vector<std::vector<std::string>> data;
	sqlcomment get;
	get.getcom(data);
	String^ idi = label1->Text;
	std::string idii = msclr::interop::marshal_as<std::string>(idi);
	if (!data.empty())
	{
		for (int i = 0; i < data.size(); i++)
		{
			
			if (data[i][4] == idii)
			{
				String^ id = msclr::interop::marshal_as<String^>(data[i][0]);
				String^ username = msclr::interop::marshal_as<String^>(data[i][1]);
				String^ time = msclr::interop::marshal_as<String^>(data[i][2]);
				String^ comment = msclr::interop::marshal_as<String^>(data[i][3]);
				dataGridViewCom->Rows->Add(id, username, time, comment);
			}
			
			//listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
		}
	}
	
}
	private: System::Void dataGridViewCom_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
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
			if (e->ColumnIndex == 4)
			{
				String^ prodid = dataGridViewCom->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				std::string idi = msclr::interop::marshal_as<std::string>(prodid);
				adminuser admi;
				admi.deletecom(idi);
				fillgrid();
				this->Refresh();
			}
		}
	}
};
}
