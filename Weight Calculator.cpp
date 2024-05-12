#include <iostream>
using namespace std;

int main() {

	int i, item;
	float sum, weight;

	cout << "Enter required number of items: ";
	cin >> item;

	sum = 0;

	for (i = 1; i <= item; i++) {
		cout << "The weight of item " << i << ": ";
		cin >> weight;
		sum = sum + weight;
		}

	cout << "The sum is: " << sum << " items." << endl;
	cout << "The average weight totals: " << sum/item << " grams." << endl;

	return 0;
}


