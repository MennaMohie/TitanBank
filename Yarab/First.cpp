#include "First.h"

using namespace System;
using namespace std;
using namespace System::Windows::Forms;

[STAThread]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Yarab::Firsy form;
	Application::Run(%form);
	
}