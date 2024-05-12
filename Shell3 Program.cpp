//Shell3 calculates a person’s percentage of calories from fat
//and prints an appropriate message.
#include <iostream>
#include <string>
using namespace std;
int main() {

	string foodltem; 
	int gramsOfFat; 
	int calories;

	float fatCalPercent;
	int PercentFromFat;


	cout << "Enter the name of a food item: ";
	getline(cin, foodltem);
	
	cout << "Enter the grams of fat: ";
	cin >> gramsOfFat;

	cout << "Enter the number of calories: ";
	cin >> calories;

	PercentFromFat = (gramsOfFat * 9);
	fatCalPercent = (calories / 100) * PercentFromFat;

	int rdaCalories;
	rdaCalories = (2000 / 100) * 30;

	if (fatCalPercent > rdaCalories)
		cout << "This amount of "<< foodltem << " at " << PercentFromFat << "% is NOT Heart Healthy!!"  << endl;

	else
		if (fatCalPercent <= rdaCalories)
			cout << "This amount of " << foodltem << " at " << PercentFromFat << "% is Heart Healthy!" << endl;

	return 0;
}
	

	
	//	vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

	//total calories = (2000 / 100)*30
	//	so if > total calories
//		cout fat fuck

	//	if not
	//		cout good weight




	//cout << "Enter the grams of fat: " << "Enter the grams of fat: ";



//	-----
	//fatCalPercent = (calories * gramsOfFat);
	//cout << "Your calories is " << fatCalPercent;

//	int CaloriesFromFat = (gramsOfFat * 9);

//	fatCalPercent = calories - (gramsOfFat * 9) // total calories subtracted by the sum of grams of fat converted into calories
//	(calories / 100) // will equal 1%

//	90 x(100 / 125) = 72 %
//	First we calculate how much is one unit : we divide 125 by 100.
//	Then we multiply one unit by 90 because we want to know how much is 90 units.
//	In this way we calculate the percentage.




	// work out the calories from fat
	// work out the percentage from fat
	// construct if statement to check if percentage indicates if healthy food





//9 cals per gram of fat


//The American Heart Association recommends that no more than 30 percent of a person’s daily caloric
//intake comes from fat which is 2000 calories. Each gram of fat provides 9 calories. If we know the grams of fat and the total
//number of calories for an item, we can calculate the percentage of calories that come from fat.

//Add statements to the program to print the item and the percentage of calories that come from fat
//(PercentFromFat).

//Run your program four times with the following data :

//Item	Grams of Fat	Calories	Percent from Fat
//Tuna		  1				60				9%
//Bread		  2				170				18%
//Juice		  0				35				0%
//Corned Beef 7				200				63%

//Add a statement that prints one of the following two messages depending on the percentage of calories
//from fat(value of PercentFromFat) : “This item is Heart Healthy!” or “This item is NOT Heart Healthy!!”