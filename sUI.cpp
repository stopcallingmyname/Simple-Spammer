#include "sUI.h"
#include "Windows.h"
#include <iostream>
#include <cstdio>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	�ppSpammer::sUI form;
	Application::Run(% form);
}

�ppSpammer::sUI::sUI(void)
{
	InitializeComponent();
}

System::Void �ppSpammer::sUI::buttonSpam_Click(System::Object^ sender, System::EventArgs^ e)
{
	Timer->Start();
}

System::Void �ppSpammer::sUI::Timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	SendKeys::Send(richTextBox->Text);
	SendKeys::Send("{ENTER}");
	return System::Void();
}

System::Void �ppSpammer::sUI::richTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void �ppSpammer::sUI::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Timer->Stop();
	return System::Void();
}