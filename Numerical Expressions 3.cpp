#include <iostream>

using namespace std;

int main() {

	//***Run the program using X = 1, Y = 2, Z = 3 and W = 5*** // T = 1

	int X; // Variable X declared as int
	cout << "Enter a value for *X: "; // User prompt to input value for variable X.
	cin >> X; // Assigns input value to variable X.

	int Y; // Variable Y declared as int
	cout << "Enter a Value for *Y: ";
	cin >> Y;

	int Z; // Variable Z declared as int
	cout << "Enter a value for *Z: ";
	cin >> Z;

	int W; // Variable W declared as int
	cout << "Enter a value for *W: ";
	cin >> W;

	double T; // Variable T declared as double
	T = (X + Y) / (W - Z) + (X) / (Y + 5); // the sum of T
	cout << "The value of *T is: " << T << endl;


	return 0;
}




// the reason for the difference in the value changing is that with all of 
// the variables set to double then the display output will be double (digits with a decimal point)
// If the sum variable is an int variable and the variables in the equation are double then the
// display output will be an integer value because sum value was declared as an integer which 
// only stores whole numbers. However, if all of the variables in the in the equation are integer
// values but the sum variable is declared as a double then the displayed output will also be an
// integer value because even though the variable is able to handle values with decimal points 
// the variables in the equation were declared as integers so the value will too be an integer value
// which is a whole number.