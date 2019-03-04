#include<windows.h>
#include<iostream>
using namespace std;

int main()
{
	CHAR c = 'A';
	PWCHAR source = L"Adjaf";
	TCHAR tc[] = TEXT("afsdf");
	printf("%d\n", sizeof(source));
	printf("%S\n",source);
	printf("%d\n", sizeof(tc));
	printf("%S\n", tc);
	int ret = WideCharToMultiByte(CP_UTF8, 0, source, -1, NULL, 0 , NULL, NULL);
	PCHAR destination = new char[ret+1];
	printf("return value = %d\n", ret);
	WideCharToMultiByte(CP_UTF8, 0, source, -1, destination, ret, NULL, NULL);
	destination[ret] = '\0';
	printf("%s\n", destination);
	getchar();
}