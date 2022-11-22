#pragma once
#include "sqlcom.h"

class registereduser
{
protected:
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
public:

	void changepassword(std::string& curp, std::string& newp);

	explicit registereduser(int& idi, std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor);

	void setid(int& idi);
	void setname(std::string& nam);
	void setsurname(std::string& surnam);
	void setusername(std::string& usernam);
	void setpassword(std::string& passwor);

	int getid();
	std::string getname();
	std::string getsurname();
	std::string getusername();
	std::string getpassword();

};