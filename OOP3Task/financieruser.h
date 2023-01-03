#pragma once

#include "registereduser.h"
#include "sqlcategories.h"
#include "sqlcomments.h"
#include "shopinghistory.h"
#include "jsonoutput.h"

class financieruser :public registereduser
{
private:

public:

	explicit financieruser(int& idi, std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor) : registereduser(idi, nam, surnam, usernam, passwor) {};
	explicit financieruser() : registereduser() {};
	void outtofiledata(std::string& filename, std::string& filetext);
};