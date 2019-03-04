// Program15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
using namespace std;

DWORD WINAPI my_thread_function(LPVOID str)
{
	int counter = 0;
	for (counter = 0; counter < 10; counter++)
	{
		cout << "Counter = " << counter << endl;
	}
	return 10;
}

int _tmain(int argc, _TCHAR* argv[])
{
	LPVOID str = NULL;
	DWORD dwExitCode = 0;
	HANDLE tHandle = CreateThread(
		NULL,//Security attributes
		0,//Stack size set to default
		my_thread_function,//Callback Function
		str,//Argument to callback function
		0,//Flag value
		NULL//Thread id
		);
	if (tHandle == NULL)
	{
		cout << "Creation of thread failed error code = " << GetLastError() << endl;
	}
	WaitForSingleObject(tHandle, INFINITE);
	TerminateThread(tHandle, dwExitCode);
	GetExitCodeThread(tHandle, &dwExitCode);
	cout << "Exit code = " << dwExitCode << endl;
	CloseHandle(tHandle);//close the handle after use
	getchar();
	return 0;
}
