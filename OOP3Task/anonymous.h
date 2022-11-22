#pragma once

#include <string>
#include<iostream>
#include "sqlcom.h"

class anonymous
{
private:
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
	std::string admin;
public:

	void registeranon();
	anonymous(std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor, std::string& admi);

private:

	void setname(std::string& nam);
	void setsurname(std::string& surnam);
	void setusername(std::string& usernam);
	void setpassword(std::string& passwor);
	void setadmin(std::string& admi);

	std::string getname();
	std::string getsurname();
	std::string getusername();
	std::string getpassword();
	std::string getadmin();
};