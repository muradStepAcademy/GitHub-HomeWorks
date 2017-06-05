#include <iostream>
#include <windows.h>
using namespace std;

//0
void changeSpace(char *str)
{
	for (int i = 0; i < 255; i++)
	{
		if (str[i] == ' ')
			str[i] = '\t';
	}
}
//1
void Total(char *str)
{
	int sumN = 0, SumL = 0, SumOther = 0;
	for (int i = 0; i < 255; i++)
	{
		if (str[i] == '\0')
			break;
		if (int(str[i]) >= 65 && int(str[i]) <= 90 || int(str[i]) >= 97 && int(str[i]) <= 122)
			SumL++;
		else if (int(str[i]) >= 48 && int(str[i]) <= 57)
			sumN++;
		else
			SumOther++;
	}
	cout << "Total letters :" << SumL<<endl;
	cout << "Total numbers :" << sumN<<endl;
	cout << "Total other :" << SumOther<<endl;
}
//2
int totalWords(char *str)
{
	int counter = 0;
	for (int i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] != ' ' && (str[i] == ' ' || str[i + 1] == '\0'))
			counter++;
	}
	return counter;
}
//3
void russian()
{
	setlocale(LC_ALL, "RUSSIAN");
}
//7
//a
int mystrlen(const char *str)
{
	int index = 0 , counter = 0;
	while (str[index++] != '\0')
		counter++;
	return counter;
}
//b
char * newStr(char *str)
{
	int length = mystrlen(str) + 1;
	char *tempStr = new char[length];
	for (int i = 0; i < length; i++)
		tempStr[i] = str[i];
	tempStr[length - 1] = '\0';
	return tempStr;
}

char * mystrcpy(char *str1,const char *str2)
{
	int length = mystrlen(str2);
	for (int i = 0; i < length; i++)
	{
		str1[i] = str2[i];
	}
	str1[length] = '\0';
	return str1;
}
//c
char * mystrcat(char *str1, const char *str2)
{
	int lengthStr1 = mystrlen(str1), lengthStr2 = mystrlen(str2);
	int index = 0;
	for (int i = lengthStr1; i < lengthStr2 + lengthStr1; i++)
		str1[i] = str2[index++];
	str1[lengthStr2 + lengthStr1] = '\0';
	return str1;
}
char * mystrchr(char * str, char s)
{
	for (int i = 0; i < mystrlen(str); i++)
	{
		if (str[i] == s)
			return &str[i];
	}
	return 0;
}
char * mystrstr(char * str1, char * str2)
{
	int index = 0;
	if (mystrlen(str1) > mystrlen(str2))
	{
		for (int i = 0; i < mystrlen(str1); i++)
		{
			
		}
	}
}