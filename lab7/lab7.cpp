/*This program will demonstrate the use of the enum type.
Tim Francis
2/16/16
Sources: none*/

#include<iostream>

using namespace std;

//enum
enum birdType {
	PEACOCK,
	SPARROW,
	CANARY,
	PARROT,
	PENGUIN,
	OSTRICH,
	EAGLE,
	CARDINAL,
	HUMMINGBIRD
};

//main
int main() {
	birdType bird; //decalre variable
	char r; //response
	bird = CANARY;
	bird = static_cast<birdType> (bird + 1); //Assign to the next value

	//switch bird
	switch (bird) {
	case PEACOCK:
		cout << "Peacock\n";
		break;
	case SPARROW:
		cout << "Sparrow\n";
		break;
	case CANARY:
		cout << "Canary\n";
		break;
	case PARROT:
		cout << "Parrot\n";
		break;
	case PENGUIN:
		cout << "Penguin\n";
		break;
	case OSTRICH:
		cout << "Ostrich\n";
		break;
	case EAGLE:
		cout << "Eagle\n";
		break;
	case CARDINAL:
		cout << "Cardinal\n";
		break;
	case HUMMINGBIRD:
		cout << "Hummingbird\n";
		break;

	}

	cout << "\nPlease enter a bird. Choose (a)Peacock, (b) Sparrow, (c)Canary, (d)Parrot, (e)penguin,"
		"(f)Ostrich, (g)Eagle, (h)Cardinal, (i)Hummingbird\n";
	cin >> r;
	
	switch (tolower(r)) {
	case 'a':
		cout << "Peacock\n";
		break;
	case 'b':
		cout << "Sparrow\n";
		break;
	case 'c':
		cout << "Canary\n";
		break;
	case 'd':
		cout << "Parrot\n";
		break;
	case 'e':
		cout << "Penguin\n";
		break;
	case 'f':
		cout << "Ostrich\n";
		break;
	case 'g':
		cout << "Eagle\n";
		break;
	case 'h':
		cout << "Cardinal\n";
		break;
	case 'i':
		cout << "Hummingbird\n";
		break;
	default:
		cout << "Invalid char\n";
		break;
	}

	return 0;	
}

