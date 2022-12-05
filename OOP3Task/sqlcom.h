#pragma once

#include "sqlbase.h"

class sqlcommands: public sqlbase
{
public:

	void insert(std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin, std::string& yea, std::string& mon, std::string& da);
	void getlogininfo(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin, bool& isexist);
	void getuserdata(int& id, std::string& name, std::string& surname, std::string& username, std::string& password, std::string& admin);
	void setlogin(std::string& id);
	void resetloginvalue();
	void updatepassword(std::string& id, std::string& password);
	void deleteuser(std::string& id);
	void getallusersdata(std::vector<std::vector<std::string>>& data);

};