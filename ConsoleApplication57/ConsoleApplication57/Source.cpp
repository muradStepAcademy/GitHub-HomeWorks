#include <iostream>
#include"Functions.h"
using namespace std;

void main()
{
	//char str[255];
	//gets_s(str);
	//puts(str);
	////0
	//changeSpace(str);
	////1
	//Total(str);
	////2
	//cout << totalWords(str) << endl;
	//7
	//a-
	//char str[255];
	//cin.getline(str, 255);	
	//cout <<"Length of string :"<< mystrlen(str) << endl;
	//b-
	//char * str1 = new char[1000];
	//cin.getline(str1,1000);
	//str1 = newStr(str1);
	//
	//char * str2 = new char[mystrlen(str1)+1];
	//str1 = mystrcpy(str1, str2);
	//
	////c-
	//char * str1 = new char[1000];
	//cin.getline(str1,1000);
	//str1 = newStr(str1);
	//
	//char * str2 = new char[1000];
	//cin.getline(str2, 1000);
	//str2 = newStr(str2);
	//
	//str1 = mystrcat(str1, str2);
	////d-
	//char * str1 = new char[1000];
	//cin.getline(str1,1000);
	//str1 = newStr(str1);
	//char s; 
	//cin >> s;
	//mystrchr(str1, s);
	//e-
	char * str1 = new char[1000];
	cin.getline(str1,1000);
	str1 = newStr(str1);
	
	char * str2 = new char[1000];
	cin.getline(str2, 1000);
	str2 = newStr(str2);

	cout<<mystrstr(str1,str2);




	
	
	

}