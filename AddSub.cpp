// Program AddSub reads in a letter (A or S) and two int values.
// If the letter is A, the two values are added.
// If the letter is S, the second is subtracted from the first.
// The answer is printed appropriately labelled.

#include <iostream>
using namespace std;
int main() {

	char operatorCode;
	int value1;
	int value2;
	int answer;

	cout << "***This Programme adds/subs two integer values***" << endl;
	cout << "Input either letter 'A' for addition or 'S' for Subtraction: ";
	cin >> operatorCode;

	cout << "Enter your 1st integer value" << endl;
	cin >> value1;

	cout << "Enter your 2nd integer value" << endl;
	cin >> value2;

	if (operatorCode == 'A' || operatorCode == 'a') {
		answer = value1 + value2;
		cout << value1 << " + " << value2 << " = " << answer << endl;
	}

	else if (operatorCode == 'S' || operatorCode == 's') {
		answer = (value1 - value2);
		cout << value1 << " - " << value2 << " = " << answer << endl;
	}

	else if (operatorCode != 'A' || operatorCode != 'a')
		cout << "Please only input characters 'A' or 'S' to execute the programme. Run again! " << endl;

	else if (operatorCode != 'S' || operatorCode != 's')
		cout << "Please only input characters 'A' or 'S' to execute the programme. Run again! " << endl;

	return 0;
}


//Now that the program compiles, run it with the following sets of values. Input Values Meaning What Is printed

//A 10 20 add 10 and 20
//A 20 10 add 20 and 10
//S 10 20 subtract 20 from 10
//S 20 10 subtract 10 from 20

//Unless you corrected the logical errors in the program, your answers are incorrect.
//Locate the logical errorsand rerun your program until you get the correct answers. Describe the errors.