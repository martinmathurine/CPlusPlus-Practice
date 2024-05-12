#include <iostream>
using namespace std;
int main() {
	int tempCel;
	cout << "Enter the temperature in your room: ";
	cin >> tempCel;

	int tempFar;
	tempFar = (tempCel * 9 / 5) + 32;


	if (tempCel > 90)
		cout << "The temperature in your room is " << tempCel << " degrees celsius or " << tempFar << " degrees farenheit... please visit a neighbour." << endl;

	else
		if (tempCel <= 90 && tempCel > 80)
			cout << "The temperature in your room is " << tempCel << " degrees celsius or " << tempFar << " degrees farenheit... turn on the air conditioning." << endl;

	if (tempCel <= 80 && tempCel > 70)
		cout << "The temperature in your room is " << tempCel << " degrees celsius or " << tempFar << " degrees farenheit... do not do anything." << endl;

	if (tempCel <= 70 && tempCel > 55)
		cout << "The temperature in your room is " << tempCel << " degrees celsius or " << tempFar << " degrees farenheit... turn up the heat." << endl;

	if (tempCel <= 55)
		cout << "The temperature in your room is " << tempCel << " degrees celsius or " << tempFar << " degrees farenheit... please go back to bed." << endl;





	return 0;
}



//Create an if‐then‐else‐if(multi‐way if) statement in program Shell4 so that one of the following

//messages is printed based on the value of temperature.

//Temperature Message
//Temp > 90 “Visit a neighbour.”
//Temp <= 90 AND Temp > 80 “Turn on air conditioning.”
//Temp <= 80 AND Temp > 70 “Do nothing.”
//Temp <= 70 AND Temp > 55 “Turn on heat.”
//Temp <= 55 “Go back to bed.”

//Run your program as many times as it takes to write each message exactly once. What data values did you use ?


// (0 Celcius * 9 / 5) + 32 = 32 Farenheit
