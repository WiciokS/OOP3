#pragma once

#include "sqlbase.h"

class sqlcomment : public sqlbase
{
public:
	void insert(std::string& username, std::string& time, std::string& comment, std::string& productid);
	void getcom(std::string& username, std::string& time, std::string& comment, std::string& productid);
	void getcom(std::vector<std::vector<std::string>>& data);
	void deletecom(std::string& id);
	void deletecombyprod(std::string& id);
};