/*This program will ask the user for the length of their yard, the radius of their yard, and the required space needed between trees to plant. 
It will output the maximum amount of trees that can be planted and the amount of space used.
Tim Francis
1/19/16
Sources: none
*/

#include <iostream>

using namespace std;

//constants
const double PI = 3.14159;

int main() {
	//variables
	double treeRadius = 0;
	double yardLength = 0;
	double treeSpace = 0;
	int totalTrees = 0;
	double occupiedSpace = 0;
	double neededSpace = 0;
	double treeArea = 0;

	//User input prompts
	cout << "Enter the radius of a fully grown tree. Press enter and then enter the length of the backside of the yard. Only use digits. ";
	cin >> treeRadius >> yardLength;
	cout << "\nEnter the required space needed between trees to plant. ";
	cin >> treeSpace;

	//Calculations
	//This one adds the trees radius and the space needed between and stores into a new variable.
	neededSpace = treeRadius + treeSpace;
	//This one will  divide the above variable by the length and to determine how many trees can be planted. Stored in an int.
	totalTrees = yardLength / neededSpace;
	//Determining the area of a tree then multipying by the total amount of trees.
	treeArea = PI * treeRadius * treeRadius;
	occupiedSpace = treeArea * totalTrees;

	//Output to user
	cout << "\nYou can plant a maximum of " << totalTrees << " trees" << endl;
	cout << "\nThe total space occupied will be " << occupiedSpace << endl;

	return 0;
}