/*This program will calculate the fair for the ferry based on user input
Tim Francis
1/27/16
Sources: none*/

#include <iostream>
#include <iomanip>

using namespace std;

//consts
const double SENIOR_PRICE = 6.45;
const double ADULT_PRICE = 12.95;
const double YOUTH_PRICE = 6.45;
const double BIKE_PRICE = 2.00;

int main() {
	//vars
	char response;
	double totalPersons = 0;
	double totalFare = 0;
	int vehcicleLength = 0;
	bool isSenior; 

	//output
	cout << "Welcome to Tim's Fare Calculator" << endl;
	cout << "Are you driving a vehicle onto the ferry? (y/n): ";
	cin >> response;
	//Code for if the user is or isnt in a vehicle
	//If the response is yes, it will prompt a series of more questions related to the vehicle. 
	if (response == 'y') {
		cout << "Is the driver a senior citizen (65 or over) or disabled? (y/n): ";
		cin >> response;
		if (response == 'y') {
			isSenior = true;
		}
		
		cout << "How many passengers are in your vehicle (excluding the driver)? " << endl;
		cout << "Adults (age 19-64): ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * ADULT_PRICE);
		
		cout << "Senior citizen (65 or over) or disabled persons: ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * SENIOR_PRICE);
		
		cout << "Youth (5-18) : ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * YOUTH_PRICE);

		cout << "Is your vehicle over 7 feet, 6 inches in height? (y/n) ";
		cin >> response;
		if (response == 'y') {
			cout << "How long is your vehicle in feet? ";
			cin >> vehcicleLength;
			if (vehcicleLength < 14) {
				totalFare = totalFare + 35.80;
			}
			else if (vehcicleLength >= 14 && vehcicleLength < 22) {
				totalFare = totalFare + 44.75;
			}
			else if (vehcicleLength >= 22 && vehcicleLength < 30) {
				totalFare = totalFare + 138.95;
			}
			else if (vehcicleLength >= 30 && vehcicleLength < 40) {
				totalFare = totalFare + 185.95;
			}
			else if (vehcicleLength >= 40 && vehcicleLength < 50) {
				totalFare = totalFare + 232.95;
			}
			else {
				cout << "prohibted, exiting" << endl;
				exit(0);
			}
		}
		//If not over 7' 6'' then...
		else {
			cout << "How long is your vehicle in feet? ";
			cin >> vehcicleLength;
			if (vehcicleLength < 14 && isSenior == false) {
				totalFare = totalFare + 36.05;
			}
			else if (vehcicleLength < 14 && isSenior == true) {
				totalFare = totalFare + 29.55;
			}
			else if (vehcicleLength >= 14 && vehcicleLength < 22 && isSenior == false) {
				totalFare = totalFare + 45.00;
			}
			else if (vehcicleLength >= 14 && vehcicleLength < 22 && isSenior == true) {
				totalFare = totalFare + 38.50;
			}
			else if (vehcicleLength >= 22 && vehcicleLength < 30) {
				totalFare = totalFare + 69.60;
			}
			else if (vehcicleLength >= 30 && vehcicleLength < 40) {
				totalFare = totalFare + 185.95;
			}
			else if (vehcicleLength >= 40 && vehcicleLength < 50) {
				totalFare = totalFare + 232.95;
			}
			else {
				cout << "prohibted, exiting" << endl;
				exit(0);
			}
		}
		cout << "How many people in your group are traveling with a bicycle ? ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * BIKE_PRICE);
	}
	//Code for no vehcicle
	else {
		cout << "How many adults (age 19-64) are in your group? ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * ADULT_PRICE);

		cout << "How many senior citizens (65 or older) or disabled are in your group? ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * SENIOR_PRICE);

		cout << "How many youth (5-18) in your group ? ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * YOUTH_PRICE);

		cout << "How many people in your group are traveling with a bicycle ? ";
		cin >> totalPersons;
		totalFare = totalFare + (totalPersons * BIKE_PRICE);
	}

	//The final output and thank you message go here
	cout << "\nYour total fare is $" << fixed << setprecision(2) << totalFare << endl;
	cout << "Thank you for using Tim's Fare Calculator" << endl;
	return 0;
}