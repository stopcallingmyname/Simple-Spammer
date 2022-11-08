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

	ñppSpammer::sUI form;
	Application::Run(% form);
}

ñppSpammer::sUI::sUI(void)
{
	InitializeComponent();
}

System::Void ñppSpammer::sUI::buttonSpam_Click(System::Object^ sender, System::EventArgs^ e)
{
	Timer->Start();
}

System::Void ñppSpammer::sUI::Timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	SendKeys::Send(richTextBox->Text);
	SendKeys::Send("{ENTER}");
	return System::Void();
}

System::Void ñppSpammer::sUI::richTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void ñppSpammer::sUI::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Timer->Stop();
	return System::Void();
}