/*
=================================================
	Project name: Super Graph 3000 :)
=================================================
	Author: Denis Kuyanov
	Group: PVK-170
	Year: 2009
=================================================
*/

#include "stdafx.h"
#include "Form1.h"

using namespace lab1;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
