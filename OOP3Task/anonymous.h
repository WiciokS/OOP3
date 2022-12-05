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
	std::string year;
	std::string month;
	std::string day;
public:

	void registeranon();
	anonymous(std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor, std::string& admi, std::string& yea, std::string&mon, std::string& da);

private:

	void setname(std::string& nam);
	void setsurname(std::string& surnam);
	void setusername(std::string& usernam);
	void setpassword(std::string& passwor);
	void setadmin(std::string& admi);
	void setbirhtdate(std::string& yea, std::string& mon, std::string& da);

	std::string getname();
	std::string getsurname();
	std::string getusername();
	std::string getpassword();
	std::string getadmin();
	std::string getyear();
	std::string getmonth();
	std::string getday();
};