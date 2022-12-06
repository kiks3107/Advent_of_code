#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string myText;
	int num;
	int i = 0;
	int First = 0;
	int Second = 0;
	int Third = 0;
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
	for (i = 0; i < 251; ++i) {

		// Change < to > if you want to find the smallest element
		if (First < Elves[i])
			First = Elves[i],
			num = i;
	}
	cout << "Elf With the highest amount is elf number " << num << " with " << First << endl;
	for (i = 0; i < 251; ++i) {

		// Change < to > if you want to find the smallest element
		if (Second < Elves[i] and First > Elves[i])
			Second = Elves[i],
			num = i;
	}
	cout << "Elf With the second highest amount is elf number " << num << " with " << Second << endl;
	for (i = 0; i < 251; ++i) {

		// Change < to > if you want to find the smallest element
		if (Third < Elves[i] and Second > Elves[i])
			Third = Elves[i],
			num = i;
	}
	cout << "Elf With the third highest amount is elf number " << num << " with " << Third << endl;

	cout << "With a collective total of " << First + Second + Third;
	// Close the file
	MyFile.close();
}