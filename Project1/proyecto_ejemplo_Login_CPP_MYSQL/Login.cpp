#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	proyectoejemploLoginCPPMYSQL::Login form;
	Application::Run(% form);
}