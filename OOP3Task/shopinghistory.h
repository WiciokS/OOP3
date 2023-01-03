#pragma once

#include "sqlbase.h"
#include "Data.h"

class sqlshopinghistory : public sqlbase
{
public:
	void insert(std::string& userid, std::string& productid, std::string& productname, std::string& price, std::string& time);
	void getusersaledata(std::vector<std::vector<std::string>>& data, std::string& userid);
	void getallusersaledata(std::vector<std::vector<std::string>>& data);
	//void deleteproduct(std::string& id);
};