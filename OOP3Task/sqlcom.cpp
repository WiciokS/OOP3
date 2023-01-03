
#include "sqlcom.h"


void sqlcommands::insert(std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin, std::string& yea, std::string& mon, std::string& da)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO userdata " +
		"(name, surname, username, password, admin, login, year, month, day) VALUES " +
		"(@name, @surname, @username, @password, @admin, @login, @year, @month, @day);";
	
	/*
	* String^ sqlQuery = "INSERT INTO user " +
		"(name, surname, username, password, admin, login) VALUES " +
		"(@name, @surname, @username, @password, @admin, @login);";
		*/
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@name", msclr::interop::marshal_as<String^>(name));
	command.Parameters->AddWithValue("@surname", msclr::interop::marshal_as<String^>(surname));
	command.Parameters->AddWithValue("@username", msclr::interop::marshal_as<String^>(username));
	command.Parameters->AddWithValue("@password", msclr::interop::marshal_as<String^>(password));
	command.Parameters->AddWithValue("@admin", msclr::interop::marshal_as<String^>(admin));
	command.Parameters->AddWithValue("@login", "0");
	command.Parameters->AddWithValue("@year", msclr::interop::marshal_as<String^>(yea));
	command.Parameters->AddWithValue("@month", msclr::interop::marshal_as<String^>(mon));
	command.Parameters->AddWithValue("@day", msclr::interop::marshal_as<String^>(da));
	sqlConn.Open();
	command.ExecuteNonQuery();
	/*
	try
	{
		
		

	}
	catch (...) {
		MessageBox::Show("Failed to connect to database(Insert)",
			"Database Connection Error", MessageBoxButtons::OK);
	}
	*/
	

}
void sqlcommands::getlogininfo(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin, bool& isexist)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "SELECT * FROM userdata WHERE username=@username AND password=@password AND admin=@admin;";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@username", msclr::interop::marshal_as<String^>(username));
	command.Parameters->AddWithValue("@password", msclr::interop::marshal_as<String^>(password));
	command.Parameters->AddWithValue("@admin", msclr::interop::marshal_as<String^>(admin));
	//try
	//{

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
	//}
	//catch (...) {
	//	MessageBox::Show("Failed to connect to database(logininfo)",
	//		"Database Connection Error", MessageBoxButtons::OK);
	//}

}
void sqlcommands::getuserdata(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	String^ sqlQuery = "SELECT * FROM userdata WHERE login='" + "1" + "' ;";
	SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
	SqlDataReader^ reader;
	
	//try
	//{

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
	//}
	//catch (...) {
	//	MessageBox::Show("Failed to connect to database(getuserdata)",
	//		"Database Connection Error", MessageBoxButtons::OK);
	//}
}

void sqlcommands::setlogin(std::string& id)
{
	String^ command = "UPDATE userdata SET login = '" + "1" + "' WHERE Id ='" + msclr::interop::marshal_as<String^>(id) + "';";
	sqlcommands login;
	login.update(command);
}
void sqlcommands::resetloginvalue()
{
	String^ command = "UPDATE userdata SET login = '" + "0" + "'";
	sqlcommands login;
	login.update(command);
}
void sqlcommands::updatepassword(std::string& id, std::string& password)
{
	String^ command = "UPDATE userdata SET password = '" + msclr::interop::marshal_as<String^>(password) + "' WHERE Id ='" + msclr::interop::marshal_as<String^>(id) + "';";
	sqlcommands pas;
	pas.update(command);
}

void sqlcommands::deleteuser(std::string& id)
{
	String^ command = "DELETE FROM userdata WHERE Id = '" + msclr::interop::marshal_as<String^>(id)+ "' ";
	sqlcommands del;
	del.deletes(command);
}
void sqlcommands::getallusersdata(std::vector<std::vector<std::string>>& data)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT Id, username FROM userdata", sqlConn);
	SqlDataReader^ reader;
	
	std::string id, username;
	

	//try
	//{
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
	//}
	//catch (...) {
	//	MessageBox::Show("Failed to connect to database(getalluserdata)",
	//		"Database Connection Error", MessageBoxButtons::OK);
	//}
}
void sqlcommands::getuserdate(std::string& id, std::string& y, std::string& m, std::string& d)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "SELECT year,month,day FROM userdata WHERE Id=@id;";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@id", msclr::interop::marshal_as<String^>(id));

	sqlConn.Open();
	SqlDataReader^ reader = command.ExecuteReader();

	if (reader->Read())
	{
		y = msclr::interop::marshal_as<std::string>(reader->GetString(0));
		m = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		d = msclr::interop::marshal_as<std::string>(reader->GetString(2));
	}
}