#include <iostream>

using namespace std;

int main() {

	//***Run the program using X = 1, Y = 2, Z = 3 and W = 5*** // T = 1.64286

	double X; // Variable X declared as double
	cout << "Enter a value for *X: "; // User prompt to input value for variable X.
	cin >> X; // Assigns input value to variable X.

	double Y; // Variable Y declared as double
	cout << "Enter a Value for *Y: ";
	cin >> Y;

	double Z; // Variable Z declared as double
	cout << "Enter a value for *Z: ";
	cin >> Z;

	double W; // Variable W declared as double
	cout << "Enter a value for *W: ";
	cin >> W;

	double T; // Variable T declared as double
	T = (X + Y) / (W - Z) + (X) / (Y + 5);
	cout << "The value of *T is: " << T << endl;


	return 0;
}

