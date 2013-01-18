// ft2232h_SPI_audio_4IN.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace ft2232h_SPI_audio_4IN;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
