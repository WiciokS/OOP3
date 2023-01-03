
#include "financieruser.h"

void financieruser::outtofiledata(std::string& filename, std::string& filetext)
{
	std::ofstream myfile;
	myfile.open(filename);
	myfile << filetext;
	myfile.close();
}