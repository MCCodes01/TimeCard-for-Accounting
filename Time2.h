#pragma once
#include<string>

using namespace std;

class Time2 {

	// local variables
private:
	int hr;
	int min;
	int sec;
	string am_pm;
public:

	// constructor
	Time2();

	// constructor with arguments
	Time2(int a, int b, int c, string d);

	// setter method
	void setHour(int a);
	void setMinute(int a);
	void setSecond(int a);
	void setAM_PM(string a);

	// getter method
	int getHour();
	int getMinute();
	int getSecond();
	string getAM_PM();
	string print2dig(int a);

	// print time
	void print();
};
