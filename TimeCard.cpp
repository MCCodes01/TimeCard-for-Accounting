#include<iostream>
#include<iomanip>
#include "TimeCard.h"

using namespace std;

TimeCard::TimeCard()
{
	workerID = "";
	punchInTime.setHour(0);
	punchInTime.setMinute(0);
	punchInTime.setSecond(0);

	punchOutTime.setHour(0);
	punchOutTime.setMinute(0);
	punchOutTime.setSecond(0);
	payrate = 0.0;
	hasPunched = false;
}

void TimeCard::setWorkerID(string a)
{
	workerID = a;
}

void TimeCard::setPunchInTime(Time2 a)
{
	punchInTime = a;
}

void TimeCard::setPunchOutTime(Time2 a)
{
	punchOutTime = a;
}

void TimeCard::setPayRate(double a)
{
	payrate = a;
}

void TimeCard::setHasPunch(bool a)
{
	hasPunched = a;
}

string TimeCard::getWorkerID()
{
	return workerID;
}

Time2 TimeCard::getPunchInTime()
{
	return punchInTime;
}

Time2 TimeCard::getPunchOutTime()
{
	return punchOutTime;
}

double TimeCard::getPayRate()
{
	return payrate;
}

bool TimeCard::getHasPunch()
{
	return hasPunched;
}

double TimeCard::retTime()
{
	double ret = 0;
	if (punchOutTime.getAM_PM() == punchInTime.getAM_PM()) {
		int outTime = punchOutTime.getSecond() + punchOutTime.getMinute() * 60 + punchOutTime.getHour() * 3600;
		int inTime = punchInTime.getSecond() + punchInTime.getMinute() * 60 + punchInTime.getHour() * 3600;
		ret = (outTime - inTime) / 3600.0;
	}
	else {
		int outTime = punchOutTime.getSecond() + punchOutTime.getMinute() * 60 + (punchOutTime.getHour() + 12) * 3600;
		int inTime = punchInTime.getSecond() + punchInTime.getMinute() * 60 + punchInTime.getHour() * 3600;
		ret = (outTime - inTime) / 3600.0;
	}
	return ret;
}

void TimeCard::print()
{
	cout << "\nWorker ID: " << getWorkerID();
	cout << "\nStart Time: ";
	getPunchInTime().print();
	cout << "\nEnd Time: ";
	getPunchOutTime().print();
	cout << "\nPay Rate: " << fixed << setprecision(2) << getPayRate();
	cout << "\nHours worked: " << fixed << setprecision(2) << retTime();
	cout << "\nPer hour, the day's earnings are: $" << fixed << setprecision(2) << getPayRate() * retTime();
	cout << endl;
}

string TimeCard::print2dig(int a)
{
	string ret = "";
	ret += (char)('0' + ((a / 10) % 10));
	ret += (char)('0' + a % 10);
	return ret;
}

void TimeCard::print2()
{
	cout << endl;
	cout << setw(12) << getWorkerID();
	cout << setw(6) << punchInTime.getHour() << ":" << print2dig(punchInTime.getMinute()) << ":" << print2dig(punchInTime.getSecond());
	cout << setw(9) << punchOutTime.getHour() << ":" << print2dig(punchOutTime.getMinute()) << ":" << print2dig(punchOutTime.getSecond());
	cout << fixed << setw(12) << setprecision(2) << getPayRate();
	cout << fixed << setw(13) << setprecision(2) << retTime();
	cout << setw(13) << "$" << fixed << setprecision(2) << getPayRate() * retTime();
}