#include "sqlwish.h"

void sqlwishlist::insert(std::string& userid, std::string& productid, std::string& productname)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO wishlist " +
		"(userid,productid,productname) VALUES " +
		"(@userid,@productid,@productname);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@userid", msclr::interop::marshal_as<String^>(userid));
	command.Parameters->AddWithValue("@productid", msclr::interop::marshal_as<String^>(productid));
	command.Parameters->AddWithValue("@productname", msclr::interop::marshal_as<String^>(productname));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlwishlist::getuserwishprod(std::vector<std::vector<std::string>>& data, std::string& id)
{
	String^ idi = msclr::interop::marshal_as<String^>(id);
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM wishlist WHERE userid='"+ idi +"';", sqlConn);
	SqlDataReader^ reader;

	std::string i, userid, productid, productname;

	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		i = std::to_string(reader->GetInt32(0));
		userid = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		productid = msclr::interop::marshal_as<std::string>(reader->GetString(2));
		productname = msclr::interop::marshal_as<std::string>(reader->GetString(3));
		std::vector<std::string> temp{};
		temp.push_back(i);
		temp.push_back(userid);
		temp.push_back(productid);
		temp.push_back(productname);
		data.push_back(temp);
	}
}
void sqlwishlist::getprod(std::string& userid, std::string& productid, std::string& productname)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "SELECT productid,productname FROM wishlist WHERE userid=@userid;";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@userid", msclr::interop::marshal_as<String^>(userid));

	sqlConn.Open();
	SqlDataReader^ reader = command.ExecuteReader();

	if (reader->Read())
	{
		productid = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		productname = msclr::interop::marshal_as<std::string>(reader->GetString(2));
	}
}
void sqlwishlist::deletewish(std::string& idi)
{
	String^ command = "DELETE FROM wishlist WHERE Id = '" + msclr::interop::marshal_as<String^>(idi) + "' ";
	sqlwishlist del;
	del.deletes(command);
}
void sqlwishlist::deletewishbyprod(std::string& idi)
{
	String^ command = "DELETE FROM wishlist WHERE productid = '" + msclr::interop::marshal_as<String^>(idi) + "' ";
	sqlwishlist del;
	del.deletes(command);
}