// FileWrite.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<tchar.h>
#include<Windows.h>
#include<iostream>
#define BUFFERSIZE 1000
using namespace std;

int _tmain(int argc, _TCHAR* argv[], WCHAR* env[])
{
	HANDLE hFile;
	hFile = CreateFile(argv[1],
		GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	if (INVALID_HANDLE_VALUE == hFile)
	{
		_tprintf(_T("Error in creating the file (%d)", GetLastError()));
	}
	else
	{
		WCHAR file_content[] = L"I'm writing to a file :) LOL";
		
		DWORD numberOfBytesWritten = 0;
		DWORD size_of_file = wcslen(file_content);
		BOOL ret = WriteFile(
			hFile,
			file_content,
			sizeof(WCHAR)*(size_of_file+1),
			&numberOfBytesWritten,
			NULL
			);
		if (ret)
		{
			_tprintf(_T("Writing to the file %s done\n"), argv[1]);
		}
		else
		{
			_tprintf(_T("Error in writing the file (%d)", GetLastError()));
		}
	}
	CloseHandle(hFile);
	getchar();
	return 0;
}

