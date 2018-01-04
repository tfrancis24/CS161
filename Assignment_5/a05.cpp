/*This program will be an interactive calculatior  in a shopping cart.
Tim Francis
2/10/16
Sources: none*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//function prototypes
void promptUser();
double addItemPrice();
void addItemName();

//main
int main() {
	//vars
	double total = 0;
	char r; //response variables

	//input
	cout << "This program will allow you to add items to a shopping cart and will display a  running total" << endl;
	do {
		promptUser();
		cin >> r;
		r = tolower(r);
		switch (r) {
		case 'a' : 
			addItemName();
			total = total + addItemPrice();
			cout << "\nItem added; your current running total is $" << fixed << setprecision(2) << total << endl;
			break;
		case 't' :
			cout << "\nThe current running total is $" << fixed << setprecision(2) << total << endl;
			break;
		case 'q':
			break;
		default:
			cout << "Invalid char, please try again" << endl;
			break;
		}
	} while (r != 'q');

	cout << "\nYour final total was $" << fixed << setprecision(2) << total << endl;

	return 0;
}


//This void function will display a prompt to the user to select an action for the program to do.
void promptUser() {
	cout << "\nPlease choose an option by typing the character associated with that option\n" << endl;
	cout << "A: Add an item to the cart " << endl;
	cout << "T: Display the running total" << endl;
	cout << "Q: Display the total and exit the program" << endl;
}

//This function will return a double. It will be used when the user selects the response to add an item and the user must
//enter the item price.
double addItemPrice() {
	double iPrice = 0;
	cout << "Enter the price of the item: " << endl;
	cin >> iPrice;
	return iPrice;
}

//This function is void and takes no parameters. It will ask the user to enter the name of an item and store it in a string.
void addItemName() {
	string itemName;
	cout << "What is the items name?" << endl;
	cin >> itemName;
}

