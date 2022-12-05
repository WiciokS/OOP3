#include "registerform.h"
#include "picturechangeform.h"
//#include "addcategory.h"
#include "addproduct.h"
//#include "LoginForm.h"
#include "onlyview.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OOP3Task::onlyview registerf;
	registerf.ShowDialog();
	//OOP3Task::picturechangeform registerf;
	//registerf.ShowDialog();
}