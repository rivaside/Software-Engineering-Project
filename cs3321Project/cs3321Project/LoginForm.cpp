#include "LoginForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	cs3321Project::LoginForm form;
	Application::Run(%form);
}

