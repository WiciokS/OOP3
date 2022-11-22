
#include "sqlcom.h"

void sqlcommands::connectadress(String^& connString)
{
	connString = "Data Source=PCWICIOK\\SQLEXPRESS;Initial Catalog=dboop3;Integrated Security=True";
}
void sqlcommands::insert(std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO users " +
		"(name, surname, username, password, admin, login) VALUES " +
		"(@name, @surname, @username, @password, @admin, @login);";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@name", msclr::interop::marshal_as<String^>(name));
	command.Parameters->AddWithValue("@surname", msclr::interop::marshal_as<String^>(surname));
	command.Parameters->AddWithValue("@username", msclr::interop::marshal_as<String^>(username));
	command.Parameters->AddWithValue("@password", msclr::interop::marshal_as<String^>(password));
	command.Parameters->AddWithValue("@admin", msclr::interop::marshal_as<String^>(admin));
	command.Parameters->AddWithValue("@login", "0");
	try
	{
		
		sqlConn.Open();
		command.ExecuteNonQuery();

	}
	catch (...) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}

}
void sqlcommands::getlogininfo(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin, bool& isexist)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@password AND admin=@admin;";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@username", msclr::interop::marshal_as<String^>(username));
	command.Parameters->AddWithValue("@password", msclr::interop::marshal_as<String^>(password));
	command.Parameters->AddWithValue("@admin", msclr::interop::marshal_as<String^>(admin));
	try
	{

		sqlConn.Open();
		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read())
		{
			isexist = true;
			id = reader->GetInt32(0);
			name = msclr::interop::marshal_as<std::string>(reader->GetString(1));
			surname = msclr::interop::marshal_as<std::string>(reader->GetString(2));
			username = msclr::interop::marshal_as<std::string>(reader->GetString(3));
			password = msclr::interop::marshal_as<std::string>(reader->GetString(4));
			admin = msclr::interop::marshal_as<std::string>(reader->GetString(5));
		}
		else {
			isexist = false;
			MessageBox::Show("Email, password or Admin check is incorrect ",
				"Email, Password or Admin check Error", MessageBoxButtons::OK);
		}
	}
	catch (...) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}

}
void sqlcommands::getuserdata(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	String^ sqlQuery = "SELECT * FROM users WHERE login='" + "1" + "' ;";
	SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
	SqlDataReader^ reader;
	
	try
	{

		sqlConn->Open();
		reader = command->ExecuteReader();

		if (reader->Read())
		{
			id = reader->GetInt32(0);
			name = msclr::interop::marshal_as<std::string>(reader->GetString(1));
			surname = msclr::interop::marshal_as<std::string>(reader->GetString(2));
			username = msclr::interop::marshal_as<std::string>(reader->GetString(3));
			password = msclr::interop::marshal_as<std::string>(reader->GetString(4));
			admin = msclr::interop::marshal_as<std::string>(reader->GetString(5));
		}
	}
	catch (...) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}
}
void sqlcommands::update(String^& what)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand(what, sqlConn);
	SqlDataReader^ reader;
	try
	{
		sqlConn->Open();
		reader = command->ExecuteReader();

		while (reader->Read())
		{

		}
	}
	catch (...) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}
}
void sqlcommands::setlogin(std::string& id)
{
	String^ command = "UPDATE users SET login = '" + "1" + "' WHERE Id ='" + msclr::interop::marshal_as<String^>(id) + "';";
	sqlcommands login;
	login.update(command);
}
void sqlcommands::resetloginvalue()
{
	String^ command = "UPDATE users SET login = '" + "0" + "'";
	sqlcommands login;
	login.update(command);
}
void sqlcommands::updatepassword(std::string& id, std::string& password)
{
	String^ command = "UPDATE users SET password = '" + msclr::interop::marshal_as<String^>(password) + "' WHERE Id ='" + msclr::interop::marshal_as<String^>(id) + "';";
	sqlcommands pas;
	pas.update(command);
}
void sqlcommands::deletes(String^& what)
{

	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand(what, sqlConn);
	SqlDataReader^ reader;
	try
	{
		sqlConn->Open();
		reader = command->ExecuteReader();

		while (reader->Read())
		{

		}
	}
	catch (...) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}
}
void sqlcommands::deleteuser(std::string& id)
{
	String^ command = "DELETE FROM users WHERE Id = '" + msclr::interop::marshal_as<String^>(id)+ "' ";
	sqlcommands del;
	del.deletes(command);
}
void sqlcommands::getallusersdata(std::vector<std::vector<std::string>>& data)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT Id, username FROM users", sqlConn);
	SqlDataReader^ reader;
	
	std::string id, username;
	

	try
	{
		sqlConn->Open();
		reader = command->ExecuteReader();
		while (reader->Read())
		{
			id = std::to_string(reader->GetInt32(0));
			username = msclr::interop::marshal_as<std::string>(reader->GetString(1));
			std::vector<std::string> temp{};
			temp.push_back(id);
			temp.push_back(username);
			data.push_back(temp);
		}
	}
	catch (...) {
		MessageBox::Show("Failed to connect to database",
			"Database Connection Error", MessageBoxButtons::OK);
	}
}