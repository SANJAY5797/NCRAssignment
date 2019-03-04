// ProcessInheritance(Program10).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
using namespace std;
#define BUFFSIZE 1000

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hFile;
	_SECURITY_ATTRIBUTES lpSecurityAttributes;
	lpSecurityAttributes.bInheritHandle = TRUE;
	lpSecurityAttributes.nLength = sizeof(lpSecurityAttributes);
	lpSecurityAttributes.lpSecurityDescriptor = NULL;
	hFile = CreateFile(argv[1],
		GENERIC_READ,
		0,
		&lpSecurityAttributes,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	WCHAR OutBuffer[BUFFSIZE];
	ZeroMemory(OutBuffer, BUFFSIZE);
	DWORD nNumberOfBytes = 0;
	BOOL ret = FALSE;
	if (INVALID_HANDLE_VALUE == hFile)
	{
		_tprintf(_T("Error in creating the file (%d)", GetLastError()));
	}
	else
	{
		STARTUPINFO si;
		PROCESS_INFORMATION pi;
		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));
		if (!CreateProcess(NULL,   // No module name (use command line)
			argv[2],        // Command line
			&lpSecurityAttributes,  // Process handle inheritable
			NULL,           // Thread handle not inheritable
			FALSE,          // Set handle inheritance to FALSE
			0,              // No creation flags
			NULL,           // Use parent's environment block
			NULL,           // Use parent's starting directory 
			&si,            // Pointer to STARTUPINFO structure
			&pi)           // Pointer to PROCESS_INFORMATION structure
			)
		{
			printf("CreateProcess failed (%d).\n", GetLastError());
		}
	}
	getchar();
	return 0;
}

