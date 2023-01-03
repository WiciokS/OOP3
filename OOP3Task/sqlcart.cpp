#include "sqlcart.h"

void sqlcart::insert(std::string& userid, std::string& productid, std::string& productname, std::string& price)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO cart " +
		"(userid,productid,productname,price) VALUES " +
		"(@userid,@productid,@productname,@price);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@userid", msclr::interop::marshal_as<String^>(userid));
	command.Parameters->AddWithValue("@productid", msclr::interop::marshal_as<String^>(productid));
	command.Parameters->AddWithValue("@productname", msclr::interop::marshal_as<String^>(productname));
	command.Parameters->AddWithValue("@price", msclr::interop::marshal_as<String^>(price));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlcart::getusercartproduct(std::vector<std::vector<std::string>>& data, std::string& id)
{
	String^ idi = msclr::interop::marshal_as<String^>(id);
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM cart WHERE userid='" + idi + "';", sqlConn);
	SqlDataReader^ reader;

	std::string i, userid, productid, productname,price;

	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		i = std::to_string(reader->GetInt32(0));
		userid = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		productid = msclr::interop::marshal_as<std::string>(reader->GetString(2));
		productname = msclr::interop::marshal_as<std::string>(reader->GetString(3));
		price = msclr::interop::marshal_as<std::string>(reader->GetString(4));
		std::vector<std::string> temp{};
		temp.push_back(i);
		temp.push_back(userid);
		temp.push_back(productid);
		temp.push_back(productname);
		temp.push_back(price);
		data.push_back(temp);
	}
}
void sqlcart::deleteproduct(std::string& id)
{
	String^ command = "DELETE FROM cart WHERE Id = '" + msclr::interop::marshal_as<String^>(id) + "' ";
	sqlcart del;
	del.deletes(command);
}