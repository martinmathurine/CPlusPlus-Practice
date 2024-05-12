//prints appropriate messages based on a pressure reading input from the keyboard.
#include <iostream>
using namespace std;
int main() {

	int pressure;
	cout << "Enter an integer pressure reading: ";
	cin >> pressure;
	/* FILL IN Code appropriate to exercise */
	

	if (pressure > 100)
		cout << endl << "Warning!! Pressure reading above the danger limit." << endl;



	return 0;
}




//Insert a statement that writes the following warning to the screen if the pressure reading is greater than
//100. “Warning!! Pressure reading above the danger limit.”

//Run your program eight times using the following values as input : 5, 75, 80, 99, 0, 100, 110, 199

//“Warning!! Pressure reading above danger limit.” is printed 2 times.

//If the answer is 2, your if statement is correct. If the answer is 3, the relational operator on your expression
//is incorrect! It should be greater than, not greater than or equal to. Rerun your corrected program.
