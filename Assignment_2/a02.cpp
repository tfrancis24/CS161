/*
This project will calcualte the distance traveled in a car by a person, then determine the persons MPG. After, it will convert the output to metric and output those variables as a metric conversion.
Tim Francis
1/20/16
Sources: none
*/

#include <iostream>
#include <iomanip>

using namespace std;

//constants
const double MI_TO_KM = 1.609;
const double GAL_TO_LT = 3.785;

int main() {
	//Variables
	double startMi = 0, startGal = 0, endMi = 0, endGal = 0, totalMi = 0, usedFuelGal = 0, totalKm = 0, totalLi = 0, miPerGal = 0, kmPerLi = 0;
	
	//user input
	cout << "Enter starting mileage: ";
	cin >> startMi;
	cout << "Enter ending mileage: ";
	cin >> endMi;
	cout << "Enter fuel at start in gallons: ";
	cin >> startGal;
	cout << "Enter fuel at end in gallons: ";
	cin >> endGal;
	
	//All calculations
	totalMi = endMi - startMi;
	usedFuelGal = startGal - endGal;
	miPerGal = totalMi / usedFuelGal;

	//Metric calcs
	totalKm = totalMi * MI_TO_KM; 
	totalLi = usedFuelGal * GAL_TO_LT;
	kmPerLi = (totalLi / totalKm) * 100;

	//Standard output
	cout << "\nNumber of miles travelled = " << totalMi << " miles" << endl;
	cout << "Fuel used = " << setprecision(4) << usedFuelGal << " gallons" << endl;
	cout << "Miles per gallon of fuel = " << setprecision(4) << miPerGal << endl;

	//Metric output
	cout << "\nNumber of kms travelled = " << totalKm << " kms" << endl;
	cout << "Fuel used = " << totalLi << " liters" << endl;
	cout << "Liters per 100kms = " << kmPerLi << endl;
	//Blank line
	cout << "\n";


	return 0;
}