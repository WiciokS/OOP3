#pragma once
#include "sqlcom.h"
#include "sqlwish.h"
#include "sqlcomments.h"
#include "sqlcart.h"
#include "shopinghistory.h"


class registereduser
{
protected:
	int id;
	std::string name;
	std::string surname;
	std::string username;
	std::string password;
public:

	void changepassword(std::string& curp, std::string& newp);
	void addtowishlist(std::string& userid, std::string& productid, std::string& productname);
	void addtocart(std::string& userid, std::string& productid, std::string& productname, std::string& price);
	void deletefromwishlist(std::string& idi);
	void deletefromcart(std::string& idi);
	void addcomment(std::string& username, std::string& time, std::string& comment, std::string& productid);
	void buy(std::string& userid, std::string& productid, std::string& productname, std::string& price, std::string& time);
	void seehistory(std::vector<std::vector<std::string>>& data, std::string& userid);

	explicit registereduser(int& idi, std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor);
	explicit registereduser();

	void setid(int& idi);
	void setname(std::string& nam);
	void setsurname(std::string& surnam);
	void setusername(std::string& usernam);
	void setpassword(std::string& passwor);

	int getid();
	std::string getname();
	std::string getsurname();
	std::string getusername();
	std::string getpassword();

};