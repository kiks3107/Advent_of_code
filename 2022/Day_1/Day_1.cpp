#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string myText;
	int num;
	int i = 0;
	int Elves[251];

	Elves[i] = 0;

	// Create and open a text file
	ifstream MyFile("input.txt");

	while (getline(MyFile, myText)) {
		// Output the text from the file
		if (myText[0] != '\0')
		{
			num = stoi(myText);
			Elves[i] += num;
		}
		else
		{
			i++;
			Elves[i] = 0;
		}
	}
	for (i = 1; i < 251; ++i) {

		// Change < to > if you want to find the smallest element
		if (Elves[0] < Elves[i])
			Elves[0] = Elves[i];
	}

	cout << Elves[0];
	// Close the file
	MyFile.close();
}