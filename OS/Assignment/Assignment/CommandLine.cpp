/*#include<windows.h>
#include<tchar.h>
#include<iostream>
using namespace std;

int main(int argc, TCHAR *argv[], TCHAR *env[])
{
	int counter,nArgs = 0,arrSize;
	LPWSTR* ar = CommandLineToArgvW(GetCommandLineW(), &nArgs);
	for (counter = 0; counter < nArgs; counter++)
		wcout << ar[counter] << endl; 
	LPCTSTR lpSrc = L"%windir%" ;
	TCHAR  lpDst[50];
	DWORD size = 50;
	arrSize = ExpandEnvironmentStringsW(lpSrc, lpDst, size);
	//lpDst = new char[size];
	wcout << lpDst << endl;

	getchar();
	return 0;
}*/