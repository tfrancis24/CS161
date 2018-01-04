/*This program will read input from a file and output the data into a new file with a format of an employees first name, last name, current salary, and their percent pay increase.
Tim Francis
1/19/16
Sources: none
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

//constants

int main() {
	//Variables
	ifstream inputFile;
	ofstream outFile;
	string fName, lName;
	double currentSalary = 0, payIncrease = 0, updatedSalary = 0;

	//Opening file
	inputFile.open("Ch3_Ex6Data.txt");
	outFile.open("Ch3_Ex6Output.dat");
	
	//FirstEntry
	inputFile >> lName >> fName >> currentSalary >> payIncrease;
	updatedSalary = currentSalary + (currentSalary * (payIncrease / 100));
	outFile << fName << " " << lName << " " << setprecision(7) << updatedSalary << endl;
	
	//Second Entry
	inputFile >> lName >> fName >> currentSalary >> payIncrease;
	updatedSalary = currentSalary + (currentSalary * (payIncrease / 100));
	outFile << fName << " " << lName << " " << setprecision(7) << updatedSalary << endl;
	
	//Third Entry
	inputFile >> lName >> fName >> currentSalary >> payIncrease;
	updatedSalary = currentSalary + (currentSalary * (payIncrease / 100));
	outFile << fName << " " << lName << " " << setprecision(7) << updatedSalary << endl;

	inputFile.close();
	outFile.close();

	return 0;
}