/*This progrmam will take a persons weight in kg and output it in lbs up to two decimal places
Tim Francis
1/19/16
Sources: none
*/
#include<iostream>
#include<iomanip>

using namespace std;

//constants
const double KG_TO_LB = 2.2;

int main() {
	//variables
	double weightKgs = 0;
	double weightLbs = 0;

	//user input and calculations
	cout << "What is the persons weight in kilograms? ";
	cin >> weightKgs;
	weightLbs = weightKgs * KG_TO_LB;

	//output with two decimal places
	cout << setprecision(2);
	cout << "\nThe persons weight in lbs is " << weightLbs << "lbs" << endl;

	return 0;
}