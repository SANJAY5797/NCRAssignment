// Program12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
using namespace std;

DWORD WINAPI my_thread_function(LPVOID str)
{
	cout << "Hello this is the thread function";
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	LPVOID str = NULL;
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
	CloseHandle(tHandle);//close the handle after use
	getchar();
	return 0;
}

