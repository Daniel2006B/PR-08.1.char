﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int Count(char* s)
{
	int c = 0;
	int k = 0,
		pos = 0; 
	char* t;
	while (t = strchr(s + pos, ',')) 
	{
		c++;
		if (c == 3) {
			return t-s;
		}
		pos = t - s + 1; 
		
	}
	return -1;
}
char* Change(char* s) 
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, ',')) 
	{
		pos2 = p - s + 1;
		strncat(t, s + pos1, pos2-pos1-1);
		strcat(t, "**");
		pos1 =pos2;

	}
	strcat(t, s + pos1);
	strcpy(s, t);
	return t;
}
int main()
{
	char str[101];
		cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Index of third comma is " << Count(str) << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}