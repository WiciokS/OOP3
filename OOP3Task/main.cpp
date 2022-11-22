#include "registerform.h"
#include "picturechangeform.h"
//#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OOP3Task::registerform registerf;
	registerf.ShowDialog();
	//OOP3Task::picturechangeform registerf;
	//registerf.ShowDialog();
}