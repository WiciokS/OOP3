#include "sqlcategories.h"

void sqlcategory::insert(std::string& category)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO categories " +
		"(category) VALUES " +
		"(@category);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@category", msclr::interop::marshal_as<String^>(category));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlcategory::insert(std::string& category, std::string& name, std::string& description, std::string& price, std::string& picture)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO products " +
		"(categories,name,description,price,picture) VALUES " +
		"(@categories,@name,@description,@price,@picture);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@categories", msclr::interop::marshal_as<String^>(category));
	command.Parameters->AddWithValue("@name", msclr::interop::marshal_as<String^>(name));
	command.Parameters->AddWithValue("@description", msclr::interop::marshal_as<String^>(description));
	command.Parameters->AddWithValue("@price", msclr::interop::marshal_as<String^>(price));
	command.Parameters->AddWithValue("@picture", msclr::interop::marshal_as<String^>(picture));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlcategory::getcategory(std::vector<std::string>& data)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT category FROM categories", sqlConn);
	SqlDataReader^ reader;

	std::string categ;
	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		categ = msclr::interop::marshal_as<std::string>(reader->GetString(0));
		data.push_back(categ);
	}
}
void sqlcategory::getproduct(std::vector<std::vector<std::string>>& data)
{
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT * FROM products", sqlConn);
	SqlDataReader^ reader;

	std::string id, categories, name, description, price, picture;

	sqlConn->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		id = std::to_string(reader->GetInt32(0));
		categories = msclr::interop::marshal_as<std::string>(reader->GetString(1));
		name = msclr::interop::marshal_as<std::string>(reader->GetString(2));
		description = msclr::interop::marshal_as<std::string>(reader->GetString(3));
		price = msclr::interop::marshal_as<std::string>(reader->GetString(4));
		picture = msclr::interop::marshal_as<std::string>(reader->GetString(5));
		std::vector<std::string> temp{};
		temp.push_back(id);
		temp.push_back(categories);
		temp.push_back(name);
		temp.push_back(description);
		temp.push_back(price);
		temp.push_back(picture);
		data.push_back(temp);
	}
}
void sqlcategory::deleteproduct(std::string& id)
{
	String^ command = "DELETE FROM products WHERE Id = '" + msclr::interop::marshal_as<String^>(id) + "' ";
	sqlcategory del;
	del.deletes(command);
}