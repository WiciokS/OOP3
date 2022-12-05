#include "adminuser.h"

void adminuser::deleteuserfromlistbox(std::string& id)
{
	if (getid() != std::stoi(id))
	{
		sqlcommands deluser;
		deluser.deleteuser(id);
		MessageBox::Show("Admin successfuly deleted user",
			"Delete user", MessageBoxButtons::OK);
	}
	else
	{
		MessageBox::Show("Admin can't delete himself",
			"Delete user", MessageBoxButtons::OK);
	}
	
	
}
void adminuser::addcategory(std::string& category)
{
	sqlcategory add;
	add.insert(category);
	MessageBox::Show("Admin successfuly added category",
		"Category", MessageBoxButtons::OK);
}
void adminuser::addproduct(std::string& category, std::string& name, std::string& description, std::string& price, std::string& picture)
{
	sqlcategory add;
	add.insert(category,name,description,price,picture);
	MessageBox::Show("Admin successfuly added product",
		"Product", MessageBoxButtons::OK);
}
void adminuser::deleteproduct(std::string& idi)
{
	sqlcategory add;
	add.deleteproduct(idi);
	MessageBox::Show("Admin successfuly deleted product",
		"Product", MessageBoxButtons::OK);
}
void adminuser::deletecom(std::string& idi)
{
	sqlcomment com;
	com.deletecom(idi);
	MessageBox::Show("Admin successfuly deleted comment",
		"Comment", MessageBoxButtons::OK);
}