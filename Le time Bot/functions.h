#pragma once
#include "stdafx.h"

// function that returns a string
string greet();

//function to show the time
void showtimeleft(int* h, int* m, int* s);

//class for the timer
class timer
{
public:
	//public funtions for incrimenting and setting the time
	void settime(int& h, int& m, int& s);
	void timer::lapse(int& h, int& m, int& s);

private:

};

//inherited class from the timer
class subtimer : public timer 
{
public:
	void setstuff(int h, int m, int s);
private:
	int hour;
	int minute;
	int second;
};

//function for the child class
void subtimer::setstuff(int h, int m, int s) 
{
	h = hour;
	m = minute;
	s = second;
}

// a function that timers can use to set the time and inciment it
void timer::settime(int& h, int& m, int& s)
{
	cout << "Set the time for the timer.\nHow many Hours: ";
	cin >> h;
	cout << "\n" << "Minutes : ";
	cin >> m;
	cout << "\n" << "Seconds : ";
	cin >> s;
	

	return;
}
void timer::lapse(int& h, int& m, int& s) {

	// 1 second = 1000 miliseconds
	Sleep(1000);

	if (s == 0)
	{
		if (m == 0 && h != 0)
		{
			m = 60;
			h--;
		}
		s = 60;
		m--;
	}
	//takes a second of the time
	s--;
	return;
}

//variables for the time and their pointers
int h;
int* ph = &h;
int m;
int* pm = &m;
int s;
int* ps = &s;

char again;