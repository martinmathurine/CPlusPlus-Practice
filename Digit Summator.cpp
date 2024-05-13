// Program Shell1 prompts for and reads a one-digit number.
// Values between 0 and the digit (inclusive) are summed.

#include <iostream>
using namespace std;
int main() {

	int LIMIT; // Variable grade declared as int
	cout << "Enter a Limiting value between *must be an integer: "; // User prompt to input value for variable grade.
	cin >> LIMIT; // Assigns input value to variable grade.

	int i; // loop-control variable
	int sum; // running sum
	int digit;

	cout << "Enter a one-digit number; press return." << endl;
	cin >> digit;

	i = 0; // TO BE FILLED IN
	sum = 1;// TO BE FILLED IN
		while (i < LIMIT)// TO BE FILLED IN
		{
			cout << "Enter an integer value. Press return." << endl;
			cin >> digit;
			sum = sum + digit;
			i++;
		} //end of loop

	cout << "Sum of digits between 0 and " << LIMIT << " is " << sum << endl;

	return 0;
}


//Fill in the appropriate initialisations, loop control condition and loop body.
//Run your program 4 times using 0, 3, 7 and 9. Note the answers down in each case.Work out
//by hand whether your program is correct.


//NOT CORRECT, i NEED FEEDBACK TO SOLVE QUESTION. Problem with sentinel and why it's not calculating properly.