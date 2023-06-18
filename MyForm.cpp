#include "MyForm.h";
#include "Zavdanna0.h";
#include "Zavdanna1.h";
#include "Zavdanna1_1.h";
#include "Zavdanna1_2.h";
#include "Zavdanna1_3.h";
#include "Zavdanna1_4.h";
#include "Zavdanna1_5.h";
#include "Zavdanna1_6.h";
#include "Zavdanna2.h";
#include "Zavdanna3.h";
#include "Zavdanna4.h";
#include <Windows.h>
using namespace Project1CPlusPlus; // Project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}