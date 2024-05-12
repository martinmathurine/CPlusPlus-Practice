#include <iostream>

using namespace std;

int main() {

	//***This program will print appropriate messages based on a grade read from the keyboard.***

	int grade; // Variable grade declared as int
	cout << "Enter a grade between 50-100: "; // User prompt to input value for variable grade.
	cin >> grade; // Assigns input value to variable grade.

	if (grade >= 50) //if statement for variable grade
	{
		cout << "Congratualations!" << endl;
	}

	return 0;
}