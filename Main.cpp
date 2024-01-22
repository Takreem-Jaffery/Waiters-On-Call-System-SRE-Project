//#include "AddCourseForm.h"
//#include "AddStudentForm.h"
#include "HomePageForm.h"
#include "LogInForm.h"
//#include "Students.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//WaitersOnCall::HomePageForm form("Sam & Jim");
	WaitersOnCall::LogInForm form;
	Application::Run(% form);


}