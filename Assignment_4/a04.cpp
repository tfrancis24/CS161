/*This program will display the contents of a txt file then calculate the average test scores for certain student demographics.
Tim Francis
2/3/16
Sources: https://answers.yahoo.com/question/index?qid=20110426095952AA458t4 */

#include<iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
	//vars
	string filepath;
	string name, college;
	char gender;
	int counter = 0;
	double score = 0, totalScore = 0; 
	ifstream inFile;

	//open file dialog
	cout << "Enter the path of the file and the filename please:" << endl;
	cin >> filepath;
	inFile.open(filepath);
	//Check if file exists
	if (!inFile)
	{
		cout << "\nFile not found! Program terminating!" << endl;
		exit(1);
	}
	else {
		cout << "\n" << inFile.rdbuf() << endl; 
	}


	//Avg male score
	inFile.clear();
	inFile.seekg(0);
	while (!inFile.eof()) {
		inFile >> name >> gender >> college >> score;
		if (gender == 'M') {
			totalScore = totalScore + score;
			counter++;
		}
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "\nAverage score of male students = " << totalScore / counter << endl;

	//Avg female score
	totalScore = 0;
	score = 0;
	counter = 0;
	inFile.clear();
	inFile.seekg(0);
	while (!inFile.eof()) {
		inFile >> name >> gender >> college >> score;
		if (gender == 'F') {
			totalScore = totalScore + score;
			counter++;
		}
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "\nAverage score of female students = " << totalScore / counter << endl;

	//Avg cc score
	totalScore = 0;
	score = 0;
	counter = 0;
	inFile.clear();
	inFile.seekg(0);
	while (!inFile.eof()) {
		inFile >> name >> gender >> college >> score;
		if (college == "CC") {
			totalScore = totalScore + score;
			counter++;
		}
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "\nAverage score of community college students = " << totalScore / counter << endl;

	//Avg UN score
	totalScore = 0;
	score = 0;
	counter = 0;
	inFile.clear();
	inFile.seekg(0);
	while (!inFile.eof()) {
		inFile >> name >> gender >> college >> score;
		if (college == "UN") {
			totalScore = totalScore + score;
			counter++;
		}
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "\nAverage score of university students = " << totalScore / counter << endl;

	//avg score for all students surveyed
	totalScore = 0;
	score = 0;
	counter = 0;
	inFile.clear();
	inFile.seekg(0);
	while (!inFile.eof()) {
		inFile >> name >> gender >> college >> score;
		totalScore = totalScore + score;
		counter++;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "\nAverage score of all students surveyed = " << totalScore / counter << endl;

	
	inFile.close();
	return 0;
}