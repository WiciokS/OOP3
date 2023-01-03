
#include "shopinghistory.h"

void sqlshopinghistory::insert(std::string& userid, std::string& productid, std::string& productname, std::string& price, std::string& time)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO shopinghistory " +
		"(userid,productid,productname,price,time) VALUES " +
		"(@userid,@productid,@productname,@price,@time);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@userid", msclr::interop::marshal_as<String^>(userid));
	command.Parameters->AddWithValue("@productid", msclr::interop::marshal_as<String^>(productid));
	command.Parameters->AddWithValue("@productname", msclr::interop::marshal_as<String^>(productname));
	command.Parameters->AddWithValue("@price", msclr::interop::marshal_as<String^>(price));
	command.Parameters->AddWithValue("@time", msclr::interop::marshal_as<String^>(time));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlshopinghistory::getusersaledata(std::vector<std::vector<std::string>>& data, std::string& userid)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT productname, price, time FROM shopinghistory WHERE userid = '" + msclr::interop::marshal_as<String^>(userid) + "';", sqlConn);
	SqlDataReader^ reader;

	std::string productname, price, time;

	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		productname = msclr::interop::marshal_as<std::string>(reader->GetString(0));
		price = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		time = msclr::interop::marshal_as<std::string>(reader->GetString(2));
		std::vector<std::string> temp{};
		temp.push_back(productname);
		temp.push_back(price);
		temp.push_back(time);
		data.push_back(temp);
	}
}
void sqlshopinghistory::getallusersaledata(std::vector<std::vector<std::string>>& data)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM shopinghistory", sqlConn);
	SqlDataReader^ reader;

	std::string id,userid,productid,productname, price, time;

	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		id = std::to_string(reader->GetInt32(0));
		userid = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		productid = msclr::interop::marshal_as<std::string>(reader->GetString(2));
		productname = msclr::interop::marshal_as<std::string>(reader->GetString(3));
		price = msclr::interop::marshal_as<std::string>(reader->GetString(4));
		time = msclr::interop::marshal_as<std::string>(reader->GetString(5));
		std::vector<std::string> temp{};
		temp.push_back(id);
		temp.push_back(userid);
		temp.push_back(productid);
		temp.push_back(productname);
		temp.push_back(price);
		temp.push_back(time);
		data.push_back(temp);
	}
}