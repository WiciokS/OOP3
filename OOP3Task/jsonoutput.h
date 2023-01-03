#pragma once

#include "shopinghistory.h"
#include "sqlprogramlog.h"
#include <sstream>
#include <fstream>

class jsonoutput
{
private:

public:
	void historyout(std::string& str);
	void programlogout(std::string& str);
};