#include<iostream>
using namespace std;
int main() {
	int i;
	int Sum;
	i = 4; Sum = 0;
	while (i >= 1) {
		if (i > 2) {
			Sum = Sum + i;
		}
		cout << i;
		i--;
	}
	cout << endl;
	cout << Sum << endl;
	return 0;
}


// output is 4321, 7.