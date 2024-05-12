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
	const float MAX_HOURS = 40.0;   // Maximum normal work hours
    const float OVERTIME = 1.5;     // Overtime pay rate factor

    cout << "Enter employee number: ";      // Prompt
    cin >> empNum;                          // Read employee ID no.
    cout << "Enter pay rate: ";             // Prompt
    cin >> payRate;                         // Read hourly pay rate
    cout << "Enter hours worked: ";         // Prompt
    cin >> hours;                           // Read hours worked

    //Work out wages
	if (hours > MAX_HOURS)                     // Is there overtime?
        wages = (MAX_HOURS * payRate) +  (hours - MAX_HOURS) * payRate * OVERTIME;
    else
        wages = hours * payRate;               // No overtime
	
	// Display result
	cout << "Employee: " << empNum << endl;
	cout << "Pay rate: " << payRate << endl;
	cout << "Hours: " << hours << endl;
	cout  << "Wages: " << wages << endl;

    return 0;                              
}                                          


//when max_hours is set to 40hrs and overtime is set to 1.5 with pay rate at £5 with hours worked at 52 = £290
