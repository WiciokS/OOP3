#include "sqlcomments.h"

void sqlcomment::insert(std::string& username, std::string& time, std::string& comment, std::string& productid)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO comments " +
		"(username,time,comment,productid) VALUES " +
		"(@username,@time,@comment,@productid);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@username", msclr::interop::marshal_as<String^>(username));
	command.Parameters->AddWithValue("@time", msclr::interop::marshal_as<String^>(time));
	command.Parameters->AddWithValue("@comment", msclr::interop::marshal_as<String^>(comment));
	command.Parameters->AddWithValue("@productid", msclr::interop::marshal_as<String^>(productid));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlcomment::getcom(std::string& username, std::string& time, std::string& comment, std::string& productid)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "SELECT username,time,comment FROM comments WHERE productid=@productid;";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@productid", msclr::interop::marshal_as<String^>(productid));

	sqlConn.Open();
	SqlDataReader^ reader = command.ExecuteReader();

	if (reader->Read())
	{
		username = msclr::interop::marshal_as<std::string>(reader->GetString(0));
		time = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		comment = msclr::interop::marshal_as<std::string>(reader->GetString(2));
	}
}
void sqlcomment::getcom(std::vector<std::vector<std::string>>& data)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM comments", sqlConn);
	SqlDataReader^ reader;

	std::string id, username, time, comment, productid;

	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		id = std::to_string(reader->GetInt32(0));
		username = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		time = msclr::interop::marshal_as<std::string>(reader->GetString(2));
		comment = msclr::interop::marshal_as<std::string>(reader->GetString(3));
		productid = msclr::interop::marshal_as<std::string>(reader->GetString(4));
		std::vector<std::string> temp{};
		temp.push_back(id);
		temp.push_back(username);
		temp.push_back(time);
		temp.push_back(comment);
		temp.push_back(productid);
		data.push_back(temp);
	}
}
void sqlcomment::deletecom(std::string& id)
{
	String^ command = "DELETE FROM comments WHERE Id = '" + msclr::interop::marshal_as<String^>(id) + "' ";
	sqlcomment del;
	del.deletes(command);
}
void sqlcomment::deletecombyprod(std::string& id)
{
	String^ command = "DELETE FROM comments WHERE productid = '" + msclr::interop::marshal_as<String^>(id) + "' ";
	sqlcomment del;
	del.deletes(command);
}