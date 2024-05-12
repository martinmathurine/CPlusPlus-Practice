//******************************************************************
// Paycheck program
// This program computes an employee's wages for the week
//******************************************************************
#include <iostream>

using namespace std;

int main() {
	float payRate;       // Employee's pay rate
	float hours;         // Hours worked

	float wages1;         // Wages earned
	float wages2;         // Wages earned

	int   empNum;        // Employee ID number

	const float MAX_HOURS1 = 40.0;   // Maximum normal work hours
	const float OVERTIME1 = 1.5;     // Overtime pay rate factor

	const float MAX_HOURS2 = 45.0;   // Maximum normal work hours
	const float OVERTIME2 = 1.75;     // Overtime pay rate factor

	cout << "Enter employee number: ";      // Prompt
	cin >> empNum;                          // Read employee ID no.
	cout << "Enter pay rate: ";             // Prompt
	cin >> payRate;                         // Read hourly pay rate
	cout << "Enter hours worked: ";         // Prompt
	cin >> hours;                           // Read hours worked

	//Work out wages
	if (hours > MAX_HOURS1)                     // Is there overtime?
		wages1 = (MAX_HOURS1 * payRate) + (hours - MAX_HOURS1) * payRate * OVERTIME1;

	else
		wages1 = hours * payRate;               // No overtime

	if (hours > MAX_HOURS2)                     // Is there overtime?
		wages2 = (MAX_HOURS2 * payRate) + (hours - MAX_HOURS2) * payRate * OVERTIME2;

	else
		wages2 = hours * payRate;               // No overtime

	// Display result
	cout << "Employee: " << empNum << endl;
	cout << "Pay rate per hour: " << payRate << endl;
	cout << "Hours Worked: " << hours << endl;
	cout << "Total Wages 40hr Week: " << wages1 << endl;
	cout << "Total Wages 45hr Week: " << wages2 << endl;


	return 0;
}

//when max_hours is set to 40hrs and overtime is set to 1.5 with pay rate at £5 with hours worked at 52 = £290
//when max_hours is set to 45hrs and overtime is set to 1.75 with pay rate at £5 with hours worked at 52 = £286.25



//Q. Change the program so that the overtime is now 1.75 and the hours is now 45. Does an employee
// who works 52 hours at £5 an hour get more or less per week than before ?

//A. The employee gets payed £286.25 in wages which is £5.75 less. 

//Can you figure out how you would adapt the program so that it computes the wages for anemployee in both situations.

//Hint: 
//You need two sets of constants, 
//two wages variables(wages1 and wages2), 
//two sets of calculations. 
//You will need to alter the display statement to accommodate wages2.

//Jot down your solution on a piece of paperand ask yourself if it looks ok before you implement it.