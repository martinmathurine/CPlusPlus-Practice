#include <iostream>
using namespace std;

int main()
{

	int low = 9, midlow = 5, midhigh = 1, high = 5;
	int max = low;
	if (midlow > low) max = midlow;
	if (midhigh > low) max = midhigh;
	if (high > low) max = high;

	cout << "0-29    30-39   40-69   70-100" << endl;
	for (int i = 1; i <= max; i++)
	{
		if (i <= low)
			cout << "   *    ";
		else
			cout << "        ";
		if (i <= midlow)
			cout << "   *    ";
		else
			cout << "        ";
		if (i <= midhigh)
			cout << "   *    ";
		else
			cout << "        ";
		if (i <= high)
			cout << "   *    ";
		else
			cout << "        ";
		cout << endl;
	}

	return 0;
}