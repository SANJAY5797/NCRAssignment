// Files.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
#define BUFFSIZE 1000
using namespace std;

int _tmain(int argc, _TCHAR* argv[],WCHAR* env[])
{
	int counter = 0;
	HANDLE hFile;
	hFile = CreateFile(argv[1], 
		GENERIC_READ, 
		0, 
		NULL, 
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
		ret = ReadFile(
				hFile,
				OutBuffer,
				BUFFSIZE,
				&nNumberOfBytes,
				NULL );
	}
	
	if (ret)//if return value is 1 it means contents of file are read
	{
			_tprintf(_T("the file contents of the file: %S "),  OutBuffer);//print the contents of file
	}
	else
	{
		cout << "Error in reading";
	}
	CloseHandle(hFile);
	getchar();
	return 0;
}

