#include <iostream>
#include <string>
using namespace std;

int main() {

	string FirstName;
	string LastName;
	char MiddleName;

	cout << "Enter your first name: ";
	cin >> FirstName;


	cout << "Enter the initial of your middle name: ";
	cin >> MiddleName;

	cout << "Enter your last name: ";
	cin >> LastName;


	string WholeName1 = FirstName + " " + MiddleName + " " + LastName;
	string WholeName2 = LastName + ", " + FirstName + " " + MiddleName;

	cout << WholeName1 << endl;
	cout << WholeName2;


	return 0;

}