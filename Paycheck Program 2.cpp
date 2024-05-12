//******************************************************************
// Paycheck program
// This program computes an employee's wages for the week
//******************************************************************
#include <iostream>

using namespace std;

int main() {
	float payRate;       // Employee's pay rate
	float hours;         // Hours worked
	float wages;         // Wages earned
	int   empNum;        // Employee ID number
	const float MAX_HOURS = 45.0;   // Maximum normal work hours
	const float OVERTIME = 1.75;     // Overtime pay rate factor

	cout << "Enter employee number: ";      // Prompt
	cin >> empNum;                          // Read employee ID no.
	cout << "Enter pay rate: ";             // Prompt
	cin >> payRate;                         // Read hourly pay rate
	cout << "Enter hours worked: ";         // Prompt
	cin >> hours;                           // Read hours worked

	//Work out wages
	if (hours > MAX_HOURS)                     // Is there overtime?
		wages = (MAX_HOURS * payRate) + (hours - MAX_HOURS) * payRate * OVERTIME;
	else
		wages = hours * payRate;               // No overtime

	// Display result
	cout << "Employee: " << empNum << endl;
	cout << "Pay rate per hour: " << payRate << endl;
	cout << "Hours Worked: " << hours << endl;
	cout << "Total Wages: " << wages << endl;

	return 0;
}

//when max_hours is set to 40hrs and overtime is set to 1.5 with pay rate at £5 with hours worked at 52 = £290
//when max_hours is set to 45hrs and overtime is set to 1.75 with pay rate at £5 with hours worked at 52 = £286.25



//Q. Change the program so that the overtime is now 1.75 and the hours is now 45. Does an employee
// who works 52 hours at £5 an hour get more or less per week than before ?

//A. The employee gets payed £286.25 in wages which is £5.75 less. 