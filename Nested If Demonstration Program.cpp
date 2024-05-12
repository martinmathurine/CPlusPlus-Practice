// A nested if demonstration
#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout << endl << "Enter a letter: ";
	cin >> letter;
	if (letter >= 'A')
	{
		if (letter <= 'Z')
		{
			cout << "You entered a capital letter." << endl;
			return 0;
		}
	}
	if (letter >= 'a')
	{
		if (letter <= 'z')
		{
			cout << "You entered a lowercase letter." << endl;
			return 0;
		}
	}
	cout << endl << "You did not enter a letter." << endl;
	return 0;
}