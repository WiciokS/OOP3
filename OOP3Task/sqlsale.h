#pragma once

#include "sqlbase.h"
#include "Data.h"

class sqlsale : public sqlbase
{
public:
	void insert(std::string& userid, std::string& status);
	void checkuser(std::string& userid);
	void updatedata(std::string& userid, std::string& m, std::string& d, std::string& left);
	void allowedsale(std::string& userid, std::string& status);
	float setsale(std::string& status, float price, float discount);
	void endsale(std::string& userid);
	//void getsalestatus(std::vector<std::vector<std::string>>& data, std::string& id);
	//void deleteproduct(std::string& id);
};