#include<iostream>
#include "Time2.h"

Time2::Time2()
{
	hr = 0;
	min = 0;
	sec = 0;
	am_pm = "";
}

Time2::Time2(int a, int b, int c, string d)
{
	hr = a;
	min = b;
	sec = c;
	am_pm = d;
}

void Time2::setHour(int a)
{
	if (a <= 12 && a >= 0) {
		hr = a;
	}
}

void Time2::setMinute(int a)
{
	if (a <= 60 && a >= 0) {
		min = a;
	}
}

void Time2::setSecond(int a)
{
	if (a <= 60 && a >= 0) {
		sec = a;
	}
}

void Time2::setAM_PM(string a)
{
	am_pm = a;
}

int Time2::getHour()
{
	return hr;
}

int Time2::getMinute()
{
	return min;
}

int Time2::getSecond()
{
	return sec;
}

string Time2::getAM_PM()
{
	return am_pm;
}

string Time2::print2dig(int a)
{
	string ret = "";
	ret += (char)('0' + ((a / 10) % 10));
	ret += (char)('0' + a % 10);
	return ret;
}

void Time2::print()
{
	cout << getHour() << ":";
	cout << print2dig(getMinute()) << ":";
	cout << print2dig(getSecond()) << " ";
	cout << getAM_PM();
}