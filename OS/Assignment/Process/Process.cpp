// Process.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	STARTUPINFO si1;
	PROCESS_INFORMATION pi1;
	STARTUPINFO si2;
	PROCESS_INFORMATION pi2;
	ZeroMemory(&si1, sizeof(si1));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi1, sizeof(pi1));
	ZeroMemory(&si2, sizeof(si2));
	si2.cb = sizeof(si2);
	ZeroMemory(&pi2, sizeof(pi2));
	if (argc != 3)
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
		&si1,            // Pointer to STARTUPINFO structure
		&pi1)           // Pointer to PROCESS_INFORMATION structure
		)
	{
		printf("CreateProcess failed (%d).\n", GetLastError());
	}
	if (!CreateProcess(NULL,   // No module name (use command line)
		argv[2],        // Command line
		NULL,           // Process handle not inheritable
		NULL,           // Thread handle not inheritable
		FALSE,          // Set handle inheritance to FALSE
		0,              // No creation flags
		NULL,           // Use parent's environment block
		NULL,           // Use parent's starting directory 
		&si2,            // Pointer to STARTUPINFO structure
		&pi2)           // Pointer to PROCESS_INFORMATION structure
		)
	{
		printf("CreateProcess failed (%d).\n", GetLastError());
	}
	// Wait until child process exits.
	WaitForSingleObject(pi1.hProcess, INFINITE);
	cout << "Process id 1 is : " << pi1.dwProcessId << endl;
	WaitForSingleObject(pi2.hProcess, INFINITE);
	cout << "Process id 2 is : " << pi2.dwProcessId << endl;
	getchar();
	// Close process and thread handles. 
	CloseHandle(pi1.hProcess);
	CloseHandle(pi1.hThread);
	CloseHandle(pi2.hProcess);
	CloseHandle(pi2.hThread);
	return 0;
}

