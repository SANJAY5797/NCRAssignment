// Problem17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
using namespace std;
int shared_variable = 0;

DWORD WINAPI thread_function_1(LPVOID str)
{
	shared_variable++;
	return 0;
}

DWORD WINAPI thread_function_2(LPVOID str)
{
	shared_variable++;
	return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	while (1)
	{
		LPVOID str = NULL;
		DWORD dwExitCode = 0;
		HANDLE tHandle1 = CreateThread(
			NULL,//Security attributes
			0,//Stack size set to default
			thread_function_1,//Callback Function
			str,//Argument to callback function
			0,//Flag value
			NULL//Thread id
			);
		if (tHandle1 == NULL)
		{
			cout << "Creation of thread 1 failed error code = " << GetLastError() << endl;
		}
		HANDLE tHandle2 = CreateThread(
			NULL,//Security attributes
			0,//Stack size set to default
			thread_function_2,//Callback Function
			str,//Argument to callback function
			0,//Flag value
			NULL//Thread id
			);
		if (tHandle2 == NULL)
		{
			cout << "Creation of thread 2 failed error code = " << GetLastError() << endl;
		}
		HANDLE hArray[2];
		hArray[0] = tHandle1;
		hArray[1] = tHandle2;
		cout << "Shared variable is = " << shared_variable << endl;
		WaitForMultipleObjects(2, hArray, 1, INFINITE);
		if (shared_variable != 1)
			break;
	}
	cout << "Shared variable is = " << shared_variable;
	getchar();
	return 0;
}

