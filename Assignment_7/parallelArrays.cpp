//This program reads scores from the user and uses a function to calculate the average
//Add a few more functions and demo the const keyword

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

//global constants
const int CAP = 100;

//function prototype
void initArray(double scores[], int size);
void openFile(ifstream &inFile);
void readArray(ifstream &inFile, string names[], double scores[], int &size);
void printArray(const string names[], const double scores[], int size);
void calcGrade(const double scores[], int size);
double averageList(const double scores[], int size);


//main
int main()
{
	double scores[CAP] = { 0 }, average = 0;
	string names[CAP];
	int i = 0, size = 0;
	ifstream inFile;
	initArray(scores, CAP);
	openFile(inFile);
	readArray(inFile, names, scores, size);
	printArray(names, scores, size);
	calcGrade(scores, size);
	
	//	average = averageList(scores, size);
	cout << fixed << showpoint << setprecision(2);
	cout << "average = " << averageList(scores, size) << endl;
	return 0;
}

//initialize the array values to -1
void initArray(double scores[], int size)
{
	for (int i = 0; i < size; i++)
	{
		scores[i] = -1;
	}
}

//function to open the file
void openFile(ifstream &inFile)
{
	inFile.open("parallelScores.txt");
	if (!inFile)
	{
		cout << "File did not open!! Program terminating!!" << endl;
		exit(0);
	}
}
//read input from the array
void readArray(ifstream &inFile, string names[], double scores[], int &size)
{
	while (!inFile.eof())
	{
		inFile >> names[size];
		inFile >> scores[size];
		size++;
	}
	inFile.close();
}

//function output contents of array
void printArray(const string names[], const double scores[], int size)
{
	cout << "Your scores are:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << left << setw(15) << names[i]
			<< left << setw(8) << scores[i];
		if (scores[i] >= 90 && scores[i] <= 100)
			cout << left << setw(5) << 'A' << endl;
		else if (scores[i] >= 80 && scores[i] < 90)
			cout << left << setw(5) << 'B' << endl;
		else if (scores[i] >= 70 && scores[i] < 80)
			cout << left << setw(5) << 'C' << endl;
		else 
			cout << left << setw(5) << 'F' << endl;
	}
}

//categorize grades A, B, C and F grades on an unsorted array
void calcGrade(const double scores[], int size)
{
	int countA = 0, countB = 0, countC = 0, countF = 0;
	for (int i = 0; i < size; i++)
	{
		if (scores[i] >= 90 && scores[i] <= 100)
			countA++;
		else if (scores[i] >= 80 && scores[i] < 90)
			countB++;
		else if (scores[i] >= 70 && scores[i] < 80)
			countC++;
		else
			countF++;
	}
	cout << endl;
	cout << "Students with A: " << countA << endl;
	cout << "Students with B: " << countB << endl;
	cout << "Students with C: " << countC << endl;
	cout << "Students with F: " << countF << endl;
}


//function to calcualte average
//returns a double value
//takes an array and an int for the size
double averageList(const double scores[], int size)
{
	int i = 0;
	double total = 0;
	for (i = 0; i < size; i++)
	{
		total += scores[i];
	}
	return (total / size);
}