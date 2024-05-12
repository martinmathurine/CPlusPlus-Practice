#include <iostream>

using namespace std;

int main() {

	//***This program will print appropriate messages based on a grade read from the keyboard.***

	int grade; // Variable grade declared as int
	cout << "Enter a grade between 80-100: "; // User prompt to input value for variable grade.
	cin >> grade; // Assigns input value to variable grade.

	if (grade >= 80 && grade <= 100) //if statement for variable grade 80-100
	{
		cout << "Congratualations!" << endl;
	}

	if (grade >= 70 && grade < 80) //if statement for variable grade 70-80
	{
		cout << "Average!" << endl;
	}

	if (grade >= 0 && grade < 70) //if statement for variable grade 0-70
	{
		cout << "Try Harder!" << endl;
	}

	if (grade < 0 || grade > 100) //if statement for variable grade 0-70
	{
		cout << "Invalid Grade" << endl;
	}

	return 0;
}


// or


#include <iostream>

using namespace std;

int main() {

	//***This program will print appropriate messages based on a grade read from the keyboard.***

	int grade; // Variable grade declared as int
	cout << "Enter a grade between 80-100: "; // User prompt to input value for variable grade.
	cin >> grade; // Assigns input value to variable grade.

	if (grade >= 80 && grade <= 100) 
			cout << "Congratualations!" << endl;
	
	else 
		if (grade >= 70 && grade < 80)  //if statement for variable grade 70-80
		cout << "Average!" << endl;
		
	

	else
		if (grade >= 0 && grade < 70)  //if statement for variable grade 0-70
		cout << "Try Harder!" << endl;
		
	

	else 
		if (grade < 0 || grade > 100)  //if statement for variable grade 0-70
		cout << "Invalid Grade" << endl;
		
	

	return 0;
}