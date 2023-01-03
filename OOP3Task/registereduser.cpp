#include "registereduser.h"

void registereduser::changepassword(std::string& curp, std::string& newp)
{
	sqlcommands pas;
	if (getpassword() == curp && curp != newp)
	{
		setpassword(newp);
		pas.updatepassword(std::to_string(getid()), getpassword());
	}
	else throw 404;
}
void registereduser::addtowishlist(std::string& userid, std::string& productid, std::string& productname)
{
	sqlwishlist add;
	add.insert(userid, productid, productname);
	MessageBox::Show("Successfuly added to wishlist",
		"Wishlist", MessageBoxButtons::OK);
}
void registereduser::addtocart(std::string& userid, std::string& productid, std::string& productname, std::string& price)
{
	sqlcart add;
	add.insert(userid, productid, productname, price);
	MessageBox::Show("Successfuly added to Cart",
		"Cart", MessageBoxButtons::OK);
}
void registereduser::deletefromwishlist(std::string& idi)
{
	sqlwishlist wish;
	wish.deletewish(idi);
	MessageBox::Show("Successfuly deleted from wishlist",
		"Wish", MessageBoxButtons::OK);
}
void registereduser::deletefromcart(std::string& idi)
{
	sqlcart del;
	del.deleteproduct(idi);
	/*MessageBox::Show("Successfuly deleted from cart",
		"Cart", MessageBoxButtons::OK);*/
	
}
void registereduser::addcomment(std::string& username, std::string& time, std::string& comment, std::string& productid)
{
	sqlcomment com;
	com.insert(username, time, comment, productid);
	MessageBox::Show("Successfuly added comment",
		"Comments", MessageBoxButtons::OK);
}
void registereduser::buy(std::string& userid, std::string& productid, std::string& productname, std::string& price, std::string& time)
{
	sqlshopinghistory shop;
	shop.insert(userid, productid, productname, price, time);
	/*MessageBox::Show("Successfuly bought",
		"Buy", MessageBoxButtons::OK);*/
	
}
void registereduser::seehistory(std::vector<std::vector<std::string>>& data, std::string& userid)
{
	sqlshopinghistory his;
	his.getusersaledata(data, userid);
}

registereduser::registereduser(int& idi, std::string& nam, std::string& surnam, std::string& usernam, std::string& passwor)
{
	setid(idi);
	setname(nam);
	setsurname(surnam);
	setusername(usernam);
	setpassword(passwor);
}
registereduser::registereduser()
{

}

void registereduser::setid(int& idi)
{
	id = idi;
}
void registereduser::setname(std::string& nam)
{
	name = nam;
}
void registereduser::setsurname(std::string& surnam)
{
	surname = surnam;
}
void registereduser::setusername(std::string& usernam)
{
	username = usernam;
}
void registereduser::setpassword(std::string& passwor)
{
	password = passwor;
}

int registereduser::getid()
{
	return id;
}
std::string registereduser::getname()
{
	return name;
}
std::string registereduser::getsurname()
{
	return surname;
}
std::string registereduser::getusername()
{
	return username;
}
std::string registereduser::getpassword()
{
	return password;
}