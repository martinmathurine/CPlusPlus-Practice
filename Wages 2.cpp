#include <iostream>
using namespace std;
int main() {
	double HoursWorked;
	double NormalRate;
	double NormalHours;
	double OvertimeRate;
	double Wages;



	NormalRate = 8.00;
	NormalHours = 40.00;
	OvertimeRate = 12.00;
	std::cout << "Enter how many hours that you've worked: ";
	std::cin >> HoursWorked;

	if (HoursWorked > NormalHours);
	{
		Wages = NormalHours * NormalRate + (HoursWorked - NormalHours) * OvertimeRate;
		std::cout << "Total wages earned with Overtime: " << Wages << std::endl;
	}

	if (HoursWorked <= NormalHours);
	{
		Wages = HoursWorked * NormalRate;
		std::cout << "Total wages earned: " << Wages << std::endl;

	}

	std::cout << "You will be paid your wages on the 1st of each month. Bye!" << std::endl;

	return 0;
}

//my code does not display results -- buggy!

//Verification(Testing of  Algorithm)
//Enter Hoursworked 30 output should be 240
//Enter Hoursworked 40 (boundary)output should be 3 2 0
//Enter Hoursworked 50 output should be(320 + 120) 4 4 0



----------------------


 
You should prepare an analysis and design document in word, use the sample below as a guide. 


Sample Analysis and Design  Document 
 
My Program 
The program works out the wages to pay an employee. Wages can include overtime. 
 
Analysis 
Get the user to input the total number of hours worked for a week, then the program 
checks if this is more than the number of hours in a normal working week (40). If 
the number of hours is more than 40 then calculate the total wages as 40 x normal 
pay rate + (total hours – 40) x overtime rate. Otherwise (If the hour worked is 40 hours or less) 
then calculate wages as hours worked x normal pay rate. After the calculations display the   wages. 



Identifier 	Role 	        Type 	Comment 

NormalRate 	Fixed value 	double 	8 
Normalhours 	Fixed value 	double 	40 
OvertimeRate 	Fixed value 	double 	12 
Hoursworked 	Fixed value 	double 	input from user 
Wages 	 	                double 	calculated 


Design (Algorithm) 
1.	Store the employee’s NormalRate, OvertimeRate and NormalHours 
•	NormalHours = 40.0 
•	NormalRate = 8.00 
•	OvertimeRate = 12.0 
 
2.	Get HoursWorked from the user 

3.	Calculate the wages 
 
4.	IF HoursWorked > NormalHours then 
 
               Wages = NormalHours * NormalRate + (HoursWorked – NormalHours)* OvertimeRate 
ELSE 
                Wages = HoursWorked  * NormalRate 

5.	Display the answer 
 
Verification (Testing of  Algorithm) 
Enter Hoursworked 30 output should be 240 
Enter Hoursworked 40 (boundary) output should be 3 2 0 
Enter Hoursworked 50 output should be (320+120) 4 4 0 
