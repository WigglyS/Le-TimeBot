#include "stdafx.h"

//defining the greet function
string greet() {
	string name;
	cout << "Welcome to Le Time Bot!" << endl;
	cout << "Please enter your name : ";
	cin >> name;
	cout << "\n" << name << ", This program will use a timer to remind you when to stand up so" << endl;
	cout << "you can avoid health problems\n" << endl;
	return name;
}

//defining the time showing function
void showtimeleft(int* h, int* m, int* s)
{
	cout << "There are " << *h << " Hours, " << *m << " Minutes, " << *s << " Seconds remaining" << endl;
	return;
}
