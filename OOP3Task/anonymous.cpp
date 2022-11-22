#include "anonymous.h"

void anonymous::registeranon()
{
	sqlcommands insert;
	insert.insert(getname(), getsurname(), getusername(), getpassword(), getadmin());
}
anonymous::anonymous(std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor, std::string& admi)
{
	setname(nam);
	setsurname(surnam);
	setusername(usernam);
	setpassword(passwor);
	setadmin(admi);
}

void anonymous::setname(std::string& nam)
{
	name = nam;
}
void anonymous::setsurname(std::string& surnam)
{
	surname = surnam;
}
void anonymous::setusername(std::string& usernam)
{
	username = usernam;
}
void anonymous::setpassword(std::string& passwor)
{
	password = passwor;
}
void anonymous::setadmin(std::string& admi)
{
	admin = admi;
}

std::string anonymous::getname()
{
	return name;
}
std::string anonymous::getsurname()
{
	return surname;
}
std::string anonymous::getusername()
{
	return username;
}
std::string anonymous::getpassword()
{
	return password;
}
std::string anonymous::getadmin()
{
	return admin;
}