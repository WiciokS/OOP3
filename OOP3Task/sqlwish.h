#pragma once

#include "sqlbase.h"

class sqlwishlist : public sqlbase
{
public:
	void insert(std::string& userid, std::string& productid, std::string& productname);
	void getuserwishprod(std::vector<std::vector<std::string>>& data, std::string& id);
	void getprod(std::string& userid, std::string& productid, std::string& productname);
	void deletewish(std::string& idi);
	void deletewishbyprod(std::string& idi);
};