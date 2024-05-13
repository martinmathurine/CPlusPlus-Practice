// Program accumulate prompts for, reads, echo prints, and sums a
// fixed number of integer values. The sum is printed.
#include <iostream>
using namespace std;
const int LIMIT = 10; //upper bound for count controlled loop
int main()
{
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


// Use the following data values when prompted. Before you run the program work out what the expected sum is.
// 8, 5, 3, -2, 0, 9, 1, 7, 3, 10 = 44