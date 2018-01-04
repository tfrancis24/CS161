/*This program will read from a file and generate test scores using arrays
Tim Francis
3/3/16
Sources: http://www.cplusplus.com/doc/tutorial/arrays/
http://www.willamette.edu/~gorr/classes/cs231/lectures/chapter9/arrays2d.htm */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

//consts
const int MAX = 100;

//func prototypes
void openFile(ifstream &inFile);
void readArray(ifstream &inFile, string names[], double scores[][5], int &size);
void calcScores(const double scores[][5], int size, char grades[], const string names[]);
void outputArray(const string names[], const double scores[][5], int size);
void initArray(double scores[][5]);
double averageList(const double scores[][5], int size);

int main() {
	//vars
	string names[MAX];
	int size = 0;
	double scores[MAX][5] = { 0 };
	char grades[MAX];
	ifstream inFile;

	//input
	initArray(scores);
	openFile(inFile);  //openingfile
	readArray(inFile, names, scores, size); // reading file input
	outputArray(names, scores, size); //output scores and name
	calcScores(scores, size, grades, names); //Calculating the students average score

	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe class average was = " << averageList(scores, size) << endl;

	return 0;
}

//Inits array values
void initArray(double scores[][5])
{
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < 5; j++) {
			scores[i][j] = -1;
		}
	}
}

//open file
void openFile(ifstream &inFile) {
	inFile.open("arrays.txt");
	if (!inFile) {
		cout << "Error: Could not locate the file! Closing" << endl;
		exit(0);
	}
}

//Adds names and scores from file into the screen
void readArray(ifstream &inFile, string names[], double scores[][5], int &size) {
	while (!inFile.eof()) {
		inFile >> names[size];
		for (int i = 0; i < 5; i++){
			inFile >> scores[size][i];
		}
		size++;
	}
	inFile.close();
}

void calcScores(const double scores[][5], int size, char grades[], const string names[]) {
	int avg = 0;
	double total = 0;

	cout << left << setw(15) << "\nStudent grades:" << endl;
	for (int i = 0; i < size; i++) {
		total = 0;
		for (int j = 0; j < 5; j++) {
			total += scores[i][j];
		}
		avg = static_cast<int>(total) / 5;

		//Reoutputs the names with their letter grades
		if (avg >= 90 && avg <= 100) {
			grades[i] = 'A';
			cout << left << setw(8) << names[i] << " grade is " << grades[i] << endl;
		}
		else if (avg >= 80 && avg <= 89) {
			grades[i] = 'B';
			cout << left << setw(8) << names[i] << " grade is " << grades[i] << endl;
		}
		else if (avg >= 70 && avg <= 79) {
			grades[i] = 'C';
			cout << left << setw(8) << names[i] << " grade is " << grades[i] << endl;
		}
		else {
			grades[i] = 'F';
			cout << left << setw(8) << names[i] << " grade is " << grades[i] << endl;
		} 

	}
}

//Outputs student names and scores
void outputArray(const string names[], const double scores[][5], int size) {
		cout << "Student Scores:" << endl;
		for (int i = 0; i < size; i++) {
			cout <<  left << setw(8) <<names[i];
			for (int j = 0; j < 5; j++) {
				cout << left << setw(8) << scores[i][j]; 
		}
		cout << "\n";
	}
}

double averageList(const double scores[][5], int size)
{
	int i = 0;
	double total = 0;
	for (i = 0; i < size; i++)
	{
		total += scores[i][5];
	}
	return (total / size);
}

