/*
This program will ask the user how many quarters, nickels, and dimes the user has. Then it will convert the value and output it to the user in total pennies.
1/12/16
Tim Francis
Sources: none
*/

#include <iostream>

using namespace std;

//Constants
int QUARTERS_TO_PENNIES = 25;
int DIMES_TO_PENNIES = 10;
int NICKELS_TO_PENNIES = 5;

int main() {
	//variables
	int totalQuarters = 0;
	int totalDimes = 0;
	int totalNickels = 0;
	int totalPennies = 0;

	int convertQuarters = 0;
	int convertDimes = 0;
	int convertNickels = 0;

	//user input
	//Prompting the user for many of each type of coin the user has.
	cout << "Please enter the numbers of quarters, dimes, and nickels you have in that order, as 3 seperate numbers, seperated by spaces." << endl;
	cout << "I will then convert the total into pennies so you know how many pennies you could have." << endl;
	cin >> totalQuarters >> totalDimes >> totalNickels;

	//Calculations
	convertQuarters = totalQuarters * QUARTERS_TO_PENNIES;
	convertDimes = totalDimes * DIMES_TO_PENNIES;
	convertNickels = totalNickels *NICKELS_TO_PENNIES;

	//This calculation will take the sum of 3 values above and store in a new variable for the total pennies.
	totalPennies = convertQuarters + convertDimes + convertNickels;

	//Now output the sum to the user.
	cout << "\nThe current amount of coins is worth " << totalPennies << " pennies." << endl;

	return 0;
}

