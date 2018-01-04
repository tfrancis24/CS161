/*This program will demonstrate the use of functions
Tim Francis
2/23/16
Sources : none*/

#include<iostream>

using namespace std;

//func prototypes
int largest();
int digit = 0, number = 0, zeroCount = 0, evenCount = 0, oddCount = 0;
//void numberCount(int number, int &oddCount, int &evenCount, int &zeroCount);


//main
int main() {
	//vars
	char r;

	//input prompt
	cout << "Welcome to my program! Please choose one of the following:" << endl;
	do {
		cout << "\n(a) Find the largest of a list of postive numbers (-1 to quit)" << endl;
		cout << "\n(b) Given a postive number, display the number of even, odd, and zero digits in that number" << endl;
		cout << "\n(c) Quit the program" << endl;
		cin >> r;

		switch (tolower(r)) {
			case 'a':
				cout << "The largest number you entered was " << largest() << endl;
				break;
			case 'b':
				break;
			case 'c':
				break;
			default:
				cout << "Invalid input, try again" << endl;
				break;
		}
	} while (r != 'c');

	cout << "Closing program" << endl; 

	return 0;
}

//functions
//Will continue reading numbers from a user until the user presses -1 to quit
int largest() {
	//vars
	int first = 0, largest = 0;

	do {
		cout << "\nEnter a number (-1 will quit)" << endl;
		cin >> first;
		if (first > largest) {
			largest = first;
		}
	} while (first != -1);

	return largest;
}

//will count the number of even, odd, and zero digits in an integer
//void numberCount(int number, int &oddCount, int &evenCount, int &zeroCount) {
//	//vars
//}
