/*
This program will ask a user how much lbs of rice a bag can hold. Then, the program will tell how many bags are needed to store one metric ton of rice. 
Tim Francis
1/12/16
Sources: none
*/

#include <iostream>

using namespace std;

//constants
double TON_TO_LBS = 2205;

int main() {
	//variables
	double maxBagWeight = 0;
	double totalBags = 0;

	//user input
	cout << "How much rice, in lbs, can the bags you're using hold? ";
	cin >> maxBagWeight;

	//calculation for total bags.
	totalBags = TON_TO_LBS / maxBagWeight;

	//outputing the total amount of bags needed to store a ton of rice.
	cout << "\nTo store a metric ton of rice, we will need " << totalBags << " bags. If there is a decimal, please round up to the next whole number." << endl;

	return 0;
}