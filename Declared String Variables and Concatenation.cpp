#include <iostream>
#include <string> //when using strings this must be included in the very start of the programme
using namespace std;
int main() {
	string Tupac; //declares the variable Tupac as a string
	Tupac = "Remember 2Pac once said that you must, ''Stay struggling''."; // the Tupac string represents what is in the quotation marks

	string Fname;
	Fname = "Martin";

	string Sname;
	Sname = "Mathurine";
	
	cout << Fname + " " + Sname + ", " + Tupac << endl; // adds the strings together to output "Martin Mathurine, Remember 2Pac once said that you must, ''Stay struggling''." 

	return 0;
}
