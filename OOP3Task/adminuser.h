#pragma once
#include "registereduser.h"

class adminuser :public registereduser
{
private:

public:

	explicit adminuser(int& idi, std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor) : registereduser(idi, nam, surnam, usernam, passwor){};
	void deleteuserfromlistbox(std::string& id);
};