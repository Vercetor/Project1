#include "MyForm.h"
#include "LinkList.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]


//******************************************************
//***  Method Name: Main
//***  Method Author: Colin Powers
//******************************************************
//*** Purpose of the Method: Form for GUI linking to code
//*** Method parametersarray<String^>^ args
//*** Return value: null
//******************************************************
//*** Date:9/10/17
//******************************************************

void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}
