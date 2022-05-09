#pragma once
#include<string>
#include "Time2.h"

// time card
class TimeCard {

private:
	// id
	string workerID;

	// in time
	Time2 punchInTime;

	// out time
	Time2 punchOutTime;

	// dat rate
	double payrate;

	// has punched
	bool hasPunched;
public:

	// constructor
	TimeCard();

	// setter
	void setWorkerID(string a);
	void setPunchInTime(Time2 a);
	void setPunchOutTime(Time2 a);
	void setPayRate(double a);
	void setHasPunch(bool a);

	// getter
	string getWorkerID();
	Time2 getPunchInTime();
	Time2 getPunchOutTime();
	double getPayRate();
	bool getHasPunch();

	// difference time
	double retTime();

	// print 1
	void print();


	string print2dig(int a);

	// print 2
	void print2();
};
