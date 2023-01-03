
#include "sqlprogramlog.h"

void sqlprogramlog::insert(std::string& userid, std::string& productid, std::string& action, std::string& time)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO programlog " +
		"(userid, productid, action, time) VALUES " +
		"(@userid, @productid, @action, @time);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@userid", msclr::interop::marshal_as<String^>(userid));
	command.Parameters->AddWithValue("@productid", msclr::interop::marshal_as<String^>(productid));
	command.Parameters->AddWithValue("@action", msclr::interop::marshal_as<String^>(action));
	command.Parameters->AddWithValue("@time", msclr::interop::marshal_as<String^>(time));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlprogramlog::getprogramlogdata(std::vector<std::vector<std::string>>& data)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM programlog", sqlConn);
	SqlDataReader^ reader;

	std::string id, userid,productid,action,time;
	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		id = std::to_string(reader->GetInt32(0));
		userid = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		productid = msclr::interop::marshal_as<std::string>(reader->GetString(2));
		action = msclr::interop::marshal_as<std::string>(reader->GetString(3));
		time = msclr::interop::marshal_as<std::string>(reader->GetString(4));
		std::vector<std::string> temp{};
		temp.push_back(id);
		temp.push_back(userid);
		temp.push_back(productid);
		temp.push_back(action);
		temp.push_back(time);
		data.push_back(temp);
	}
}