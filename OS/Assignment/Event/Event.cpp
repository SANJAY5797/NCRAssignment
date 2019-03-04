// Event.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE eveHandle = CreateEvent(
		NULL,               // default security attributes
		TRUE,               // manual-reset event
		FALSE,              // initial state is nonsignaled
		TEXT("MyEvent")  // object name
		);
	if (eveHandle == NULL)
	{
		printf("CreateEvent failed (%d)\n", GetLastError());
	}
	CloseHandle(eveHandle);
	getchar();
	return 0;
}

