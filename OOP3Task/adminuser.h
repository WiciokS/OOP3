#pragma once
#include "registereduser.h"
#include "sqlcategories.h"

class adminuser :public registereduser
{
private:

public:

	explicit adminuser(int& idi, std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor) : registereduser(idi, nam, surnam, usernam, passwor){};
	explicit adminuser() : registereduser(){};
	void deleteuserfromlistbox(std::string& id);
	void addcategory(std::string& category);
	void addproduct(std::string& category, std::string& name, std::string& description, std::string& price, std::string& picture);
};