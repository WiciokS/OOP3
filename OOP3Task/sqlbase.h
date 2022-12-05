#pragma once

#include <string>
#include<iostream>
#include <vector>
#include <sstream>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

class sqlbase
{
public:
	
	
protected:
	void deletes(String^& what);
	void update(String^& what);
	void connectadress(String^& connString);
};