#include<iostream>
#include<iomanip>
#include"TimeCard.h"

using namespace std;

// Driver Class
int main() {
	TimeCard tc1;
	TimeCard tc2;

///////////////////////////////////////////////////////////////////////////////////////////////////////

	int x;
	cout << "What Hour did employee 1 start: "; // Type a number and press enter
	cin >> x; // Get user input from the keyboard

	int y;
	cout << "What Minute did employee 1 start: "; // Type a number and press enter
	cin >> y; // Get user input from the keyboard
	// time in and out for timecard1

	int z;
	cout << "What Hour did employee 1 start: "; // Type a number and press enter
	cin >>z; // Get user input from the keyboard

	int a;
	cout << "What Hour did employee 1 end: "; // Type a number and press enter
	cin >> a; // Get user input from the keyboard

	int b;
	cout << "What minute did employee 1 end: "; // Type a number and press enter
	cin >> b; // Get user input from the keyboard

	int c;
	cout << "What second did employee 1 end: "; // Type a number and press enter
	cin >> c; // Get user input from the keyboard

///////////////////////////////////////////////////////////////////////////////////////////////////////

	int d;
	cout << "What Hour did employee 2 start: "; // Type a number and press enter
	cin >> d; // Get user input from the keyboard

	int e;
	cout << "What Minute did employee 2 start: "; // Type a number and press enter
	cin >> e; // Get user input from the keyboard
	// time in and out for timecard1

	int f;
	cout << "What Hour did employee 2 start: "; // Type a number and press enter
	cin >> f; // Get user input from the keyboard

	int g;
	cout << "What Hour did employee 2 end: "; // Type a number and press enter
	cin >> g; // Get user input from the keyboard

	int h;
	cout << "What minute did employee 2 end: "; // Type a number and press enter
	cin >> h; // Get user input from the keyboard

	int i;
	cout << "What second did employee 2 end: "; // Type a number and press enter
	cin >> i; // Get user input from the keyboard
///////////////////////////////////////////////////////////////////////////////////////////////////////
	Time2 t11(x,y,z, "AM");
	Time2 t12(a,b,c,"PM");

	float l;//for pay rate
	cout << ("What is employee 1 pay rate?: ");
	cin >> l;

	string m;//for worker 1 ID
	cout << ("What is employee 1 worker ID?: ");
	cin >> m;

	// time in and out for timecard2
	Time2 t21(d,e,f, "AM");
	Time2 t22(g,h,i, "PM");

	float j;//for pay rate
	cout << ("What is employee 2 pay rate?: ");
	cin >> j;

	string k;//for worker 2 ID
	cout << ("What is employee 2 worker ID?: ");
	cin >> k;

	// time card 1
	tc1.setWorkerID(m);
	tc1.setPunchInTime(t11);
	tc1.setPunchOutTime(t12);
	tc1.setPayRate(l);
	tc1.setHasPunch(true);

	// time card 2
	tc2.setWorkerID(k);
	tc2.setPunchInTime(t21);
	tc2.setPunchOutTime(t22);
	tc2.setPayRate(j);
	tc2.setHasPunch(true);

	// print type 1
	tc1.print();
	tc2.print();


	cout << endl << endl << endl;

	// print type 2
	cout << setw(12) << "WorkerID" << setw(13) << "Start Time" << setw(13) << "End Time" << setw(15) << "Rate Hours" << setw(15) << "Worked Day\'s" << setw(14) << "Earning";
	tc1.print2();
	tc2.print2();

	cout << endl;


	return 0;
}
