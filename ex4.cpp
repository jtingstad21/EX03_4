﻿// ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//PT -- missing sort functionality. Listing 7.11 sorts an array, and that
//      can be adapted to strings.
// -10

int main()
{
	string s1;
	cout << "enter string: " << endl;
	getline(cin, s1);
	cout << "size of string: " << s1.size() << endl;

    return 0;
}

