#pragma once

#include "sqlbase.h"

class sqlcart : public sqlbase
{
public:
	void insert(std::string& userid, std::string& productid, std::string& productname, std::string& price);
	void getusercartproduct(std::vector<std::vector<std::string>>& data, std::string& id);
	void deleteproduct(std::string& id);
};