#include <iostream>
#include <string>
using namespace std;
int main() {

	double Grade1;
	double Grade2;
	double Grade3;
	double OverallGrade;
	string FirstName;
	string LastName;
	string WholeName;


	std::cout << "Enter your first name: ";
	std::cin >> FirstName;
	std::cout << std::endl;

	std::cout << "Enter your last name: ";
	std::cin >> LastName;
	std::cout << std::endl;

	std::cout << "Enter your grade percentage for C++ Test #01 (Between 0-100) : ";
	std::cin >> Grade1;
	std::cout << std::endl;

	std::cout << "Enter your grade percentage for C++ Test #02 (Between 0-100) : ";
	std::cin >> Grade2;
	std::cout << std::endl;

	std::cout << "Enter your grade percentage for C++ Test #03 (Between 0-100) : ";
	std::cin >> Grade3;
	std::cout << std::endl;

	OverallGrade = (Grade1 + Grade2 + Grade3) / 3;
	WholeName = FirstName + " " + LastName;
	std::cout << "Hi " << WholeName << ", your overall grade is " << OverallGrade;

	return 0;
}




----------------------

Analyse, design and Write a program that will input a name and 3 marks. 
The program will work out the overall mark. Assume that the weight for the 
first mark is 35%, the second mark is also 35% and the last mark is 30%. 
 
You should prepare an analysis and design document in word, use the sample below as a guide. 
