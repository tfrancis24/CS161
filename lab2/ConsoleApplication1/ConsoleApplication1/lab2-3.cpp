/*
This program will prompt the user to enter the length of a wire that will bend around a picture frame. Using the constant that the length is 1.5 * width, the program will output the length and width of the frame.
Since the unit is not defined in the problem, I decided to add inches for simplicity.
Tim Francis
1/12/16
Sources: none
*/

#include <iostream>

using namespace std;

//constants
double LENGTH_TO_WIDTH = 1.5;

int main() {
	//variables
	double width = 0;
	double length = 0;

	//User input
	cout << "What is the length of the wire, in inches, that is bending around the picture frame? Only enter real numbers. Do not enter letters or special characters!" << endl;
	cin >> length; 
	
	//Calculations
	width = length / LENGTH_TO_WIDTH;

	//Output length and width to users.
	cout << "The length of the frame is " << length << " inches." << endl;
	cout << "The width of the frame is " << width << " inches." << endl;

	return 0;
}