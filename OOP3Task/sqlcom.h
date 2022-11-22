#pragma once

#include <string>
#include<iostream>
#include <vector>
#include <sstream>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

class sqlcommands
{
public:

	void insert(std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin);
	void getlogininfo(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin, bool& isexist);
	void getuserdata(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin);
	void update(String^& what);
	void setlogin(std::string& id);
	void resetloginvalue();
	void updatepassword(std::string& id, std::string& password);
	void deletes(String^& what);
	void deleteuser(std::string& id);
	void getallusersdata(std::vector<std::vector<std::string>>& data);

private:

	void connectadress(String^& connString);

};