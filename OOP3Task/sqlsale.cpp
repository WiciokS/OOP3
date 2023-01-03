
#include "sqlsale.h"

void sqlsale::insert(std::string& userid, std::string& status)
{
	String^ connString;
	connectadress(connString);
	SqlConnection sqlConn(connString);
	String^ sqlQuery = "INSERT INTO sale " +
		"(userid,status) VALUES " +
		"(@userid,@status);";

	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@userid", msclr::interop::marshal_as<String^>(userid));
	command.Parameters->AddWithValue("@status", msclr::interop::marshal_as<String^>(status));
	sqlConn.Open();
	command.ExecuteNonQuery();
}
void sqlsale::checkuser(std::string& userid)
{
	std::string stat = "wait";
	String^ idi = msclr::interop::marshal_as<String^>(userid);
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT userid FROM sale WHERE userid='" + idi + "';", sqlConn);
	SqlDataReader^ reader;

	sqlConn->Open();
	reader = command->ExecuteReader();
	if (reader->Read())
	{

	}
	else
	{
		sqlsale add;
		add.insert(userid, stat);
	}
}
void sqlsale::updatedata(std::string& userid, std::string& m, std::string& d, std::string& left)
{
	Datas dat;
	if (dat.DaysUntil(std::stoi(m), std::stoi(d), std::stoi(left)))
	{
		String^ command = "UPDATE sale SET status = '" + "allow"
			+ "' WHERE userid ='" + msclr::interop::marshal_as<String^>(userid) 
			+ "' AND status ='" + "wait" + "';";
		sqlsale upd;
		upd.update(command);
	}
	else
	{
		String^ command = "UPDATE sale SET status = '" + "wait"
			+ "' WHERE userid ='" + msclr::interop::marshal_as<String^>(userid) + "';";
		sqlsale upd;
		upd.update(command);
	}
}
void sqlsale::allowedsale(std::string& userid, std::string& status)
{
	String^ idi = msclr::interop::marshal_as<String^>(userid);
	String^ connString;
	connectadress(connString);
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	SqlCommand^ command = gcnew SqlCommand("SELECT status FROM sale WHERE userid='" + idi + "';", sqlConn);
	SqlDataReader^ reader;

	sqlConn->Open();
	reader = command->ExecuteReader();
	if (reader->Read())
	{
		status = msclr::interop::marshal_as<std::string>(reader->GetString(0));
	}
}
float sqlsale::setsale(std::string& status, float price, float discount)
{
	if (status == "allow")
	{
		float pr = price, ds = discount, sum;
		sum = pr * ds;
		price = sum;
	}
	
	return price;
}
void sqlsale::endsale(std::string& userid)
{
	String^ command = "UPDATE sale SET status = '" + "used"
		+ "' WHERE userid ='" + msclr::interop::marshal_as<String^>(userid) + "';";
	sqlsale upd;
	upd.update(command);
}