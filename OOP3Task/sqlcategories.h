#pragma once
#include "sqlbase.h"

class sqlcategory : public sqlbase
{
public:
	void insert(std::string& category);
	void insert(std::string& category, std::string& name, std::string& description, std::string& price, std::string& picture);
	void getcategory(std::vector<std::string>& data);
	void getproduct(std::vector<std::vector<std::string>>& data);
};