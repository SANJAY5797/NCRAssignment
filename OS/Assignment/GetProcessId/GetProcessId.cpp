// GetProcessId.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	if (argc != 2)
	{
		printf("Usage: %s [cmdline]\n", argv[0]);
	}

	// Start the child process. 
	if (!CreateProcess(NULL,   // No module name (use command line)
		argv[1],        // Command line
		NULL,           // Process handle not inheritable
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
	wcout << "GetCurrentProcessId = " << GetCurrentProcessId() << endl;
	wcout << "GetCurrentThreadId = " << GetCurrentThreadId() << endl;
	wcout << "GetProcessId = " << GetProcessId(pi.hProcess) << endl;
	wcout << "GetThreadId = " << GetThreadId(pi.hThread) << endl;
	wcout << "GetProcessIdOfThread = " << GetProcessIdOfThread(pi.hThread) << endl;
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);
	
	getchar();

	return 0;
}

