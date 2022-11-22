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