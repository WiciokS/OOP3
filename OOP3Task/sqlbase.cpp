#include "sqlbase.h"

void sqlbase::connectadress(String^& connString)
{
	connString = "Data Source=PCWICIOK\\SQLEXPRESS;Initial Catalog=dboop3;Integrated Security=True";
}

void sqlbase::update(String^& what)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand(what, sqlConn);
	SqlDataReader^ reader;
	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{

	}
	/*
	try
	{


		while (reader->Read())
		{

		}
	}
	catch (...) {
		MessageBox::Show("Failed to connect to database(update)",
			"Database Connection Error", MessageBoxButtons::OK);
	}
	*/
}
void sqlbase::deletes(String^& what)
{

	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand(what, sqlConn);
	SqlDataReader^ reader;
	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{

	}
	/*
	try
	{


		while (reader->Read())
		{

		}
	}
	catch (...) {
		MessageBox::Show("Failed to connect to database(delete)",
			"Database Connection Error", MessageBoxButtons::OK);
	}
	*/
}