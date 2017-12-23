#include <stdio.h>
#include "FormUser.h"
#include <iostream>




using namespace System;
using namespace System::Windows::Forms;



[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TestP::FormUser form;
	Application::Run(%form);
}
