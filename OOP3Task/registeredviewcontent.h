#pragma once

#include "sqlcategories.h"
#include "sqlcom.h"
#include "sqlwish.h"
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
	/// Summary for registeredviewcontent
	/// </summary>
	public ref class registeredviewcontent : public System::Windows::Forms::Form
	{
	public:
		registeredviewcontent(void)
		{
			InitializeComponent();
			fillgrid();
			isadmin();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~registeredviewcontent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewRegistered;
	protected:










	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Idrvc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoryrvc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Namervc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descriptionrvc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pricervc;
	private: System::Windows::Forms::DataGridViewImageColumn^ Picturervc;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Deletervc;
	private: System::Windows::Forms::DataGridViewButtonColumn^ AddToWishListrvc;
	private: System::Windows::Forms::DataGridViewButtonColumn^ CommentsLinkrvc;









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
			this->dataGridViewRegistered = (gcnew System::Windows::Forms::DataGridView());
			this->Idrvc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoryrvc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Namervc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descriptionrvc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pricervc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Picturervc = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			this->Deletervc = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->AddToWishListrvc = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->CommentsLinkrvc = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRegistered))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewRegistered
			// 
			this->dataGridViewRegistered->AllowUserToAddRows = false;
			this->dataGridViewRegistered->AllowUserToDeleteRows = false;
			this->dataGridViewRegistered->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewRegistered->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridViewRegistered->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRegistered->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Idrvc,
					this->Categoryrvc, this->Namervc, this->Descriptionrvc, this->Pricervc, this->Picturervc, this->Deletervc, this->AddToWishListrvc,
					this->CommentsLinkrvc
			});
			this->dataGridViewRegistered->Location = System::Drawing::Point(12, 71);
			this->dataGridViewRegistered->Name = L"dataGridViewRegistered";
			this->dataGridViewRegistered->ReadOnly = true;
			this->dataGridViewRegistered->RowHeadersWidth = 51;
			this->dataGridViewRegistered->RowTemplate->Height = 24;
			this->dataGridViewRegistered->Size = System::Drawing::Size(1218, 426);
			this->dataGridViewRegistered->TabIndex = 0;
			this->dataGridViewRegistered->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &registeredviewcontent::dataGridViewRegistered_CellContentClick);
			// 
			// Idrvc
			// 
			this->Idrvc->HeaderText = L"Id";
			this->Idrvc->MinimumWidth = 6;
			this->Idrvc->Name = L"Idrvc";
			this->Idrvc->ReadOnly = true;
			this->Idrvc->Visible = false;
			// 
			// Categoryrvc
			// 
			this->Categoryrvc->HeaderText = L"Category";
			this->Categoryrvc->MinimumWidth = 6;
			this->Categoryrvc->Name = L"Categoryrvc";
			this->Categoryrvc->ReadOnly = true;
			// 
			// Namervc
			// 
			this->Namervc->HeaderText = L"Name";
			this->Namervc->MinimumWidth = 6;
			this->Namervc->Name = L"Namervc";
			this->Namervc->ReadOnly = true;
			// 
			// Descriptionrvc
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Descriptionrvc->DefaultCellStyle = dataGridViewCellStyle1;
			this->Descriptionrvc->HeaderText = L"Description";
			this->Descriptionrvc->MinimumWidth = 6;
			this->Descriptionrvc->Name = L"Descriptionrvc";
			this->Descriptionrvc->ReadOnly = true;
			// 
			// Pricervc
			// 
			dataGridViewCellStyle2->Format = L"C2";
			dataGridViewCellStyle2->NullValue = nullptr;
			this->Pricervc->DefaultCellStyle = dataGridViewCellStyle2;
			this->Pricervc->HeaderText = L"Price";
			this->Pricervc->MinimumWidth = 6;
			this->Pricervc->Name = L"Pricervc";
			this->Pricervc->ReadOnly = true;
			// 
			// Picturervc
			// 
			this->Picturervc->HeaderText = L"Picture";
			this->Picturervc->ImageLayout = System::Windows::Forms::DataGridViewImageCellLayout::Zoom;
			this->Picturervc->MinimumWidth = 6;
			this->Picturervc->Name = L"Picturervc";
			this->Picturervc->ReadOnly = true;
			// 
			// Deletervc
			// 
			this->Deletervc->HeaderText = L"Delete";
			this->Deletervc->MinimumWidth = 6;
			this->Deletervc->Name = L"Deletervc";
			this->Deletervc->ReadOnly = true;
			this->Deletervc->Text = L"Delete";
			this->Deletervc->UseColumnTextForButtonValue = true;
			// 
			// AddToWishListrvc
			// 
			this->AddToWishListrvc->HeaderText = L"AddToWishList";
			this->AddToWishListrvc->MinimumWidth = 6;
			this->AddToWishListrvc->Name = L"AddToWishListrvc";
			this->AddToWishListrvc->ReadOnly = true;
			this->AddToWishListrvc->Text = L"AddToWishList";
			this->AddToWishListrvc->UseColumnTextForButtonValue = true;
			// 
			// CommentsLinkrvc
			// 
			this->CommentsLinkrvc->HeaderText = L"Comments";
			this->CommentsLinkrvc->MinimumWidth = 6;
			this->CommentsLinkrvc->Name = L"CommentsLinkrvc";
			this->CommentsLinkrvc->ReadOnly = true;
			this->CommentsLinkrvc->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->CommentsLinkrvc->Text = L"Comments";
			this->CommentsLinkrvc->UseColumnTextForButtonValue = true;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1217, 55);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Registered Users Content";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &registeredviewcontent::label1_Click);
			// 
			// registeredviewcontent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1243, 509);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewRegistered);
			this->Name = L"registeredviewcontent";
			this->Text = L"registeredviewcontent";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRegistered))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Registered Users Content";
	}
private: void fillgrid(void) {
	std::vector<std::vector<std::string>> data;
	sqlcategory get;
	get.getproduct(data);
	for (int i = 0; i < data.size(); i++)
	{
		String^ id = msclr::interop::marshal_as<String^>(data[i][0]);
		String^ categories = msclr::interop::marshal_as<String^>(data[i][1]);
		String^ name = msclr::interop::marshal_as<String^>(data[i][2]);
		String^ description = msclr::interop::marshal_as<String^>(data[i][3]);
		String^ price = msclr::interop::marshal_as<String^>(data[i][4]);
		String^ picture = msclr::interop::marshal_as<String^>(data[i][5]);
		dataGridViewRegistered->Rows->Add(id, categories, name, description, price, Image::FromFile(picture));
		//listBox1->Items->Add(msclr::interop::marshal_as<String^>(data[i]));
	}
}
private: System::Void dataGridViewRegistered_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
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
		if (e->ColumnIndex == 7)
		{
			//MessageBox::Show(" Row " + e->RowIndex + ", Column " + e->ColumnIndex + " button clicked");
			String^ prodid = dataGridViewRegistered->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			String^ prodname = dataGridViewRegistered->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			registereduser in;
			in.addtowishlist(std::to_string(id), msclr::interop::marshal_as<std::string>(prodid), msclr::interop::marshal_as<std::string>(prodname));
			//label2->Text = a;
			//dataGridView1->Rows->Clear();
		}
	}
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
		dataGridViewRegistered->Columns[6]->Visible = false;
	}
}
};
}
