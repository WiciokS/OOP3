#pragma once

#include "sqlbase.h"

class sqlprogramlog : public sqlbase
{
public:

	void insert(std::string& userid, std::string& productid, std::string& action, std::string& time);
	void getprogramlogdata(std::vector<std::vector<std::string>>& data);

};