// Program accumulate prompts for, reads, echo prints, and sums a
// fixed number of integer values. The sum is printed.
#include <iostream>
using namespace std;


// const int LIMIT = 4; //upper bound for count controlled loop
int main(){

	int LIMIT; // Variable grade declared as int
	cout << "Enter a Limiting value between *must be an integer: "; // User prompt to input value for variable grade.
	cin >> LIMIT; // Assigns input value to variable grade.


	int i; // loop-control variable
	int sum; // accumulator variable
	int dataValue; // input value

	i = 1; //prime loop control variable
	sum = 0; // initialise accumulator
	
	// Input and sum integer data values.
	while (i <= LIMIT)
	{
		cout << "Enter an integer value. Press return." << endl;
		cin >> dataValue;
		sum = sum + dataValue;
		i++;
	} //end of loop
	cout << "Sum is " << sum << endl;
	return 0;
}

// LIMIT changed to 4

// Change program so that the number of values read (LIMIT) is input from the keyboard rather than being set as a constant. 
// Test the program for various values of LIMIT. Make up your own test data. 