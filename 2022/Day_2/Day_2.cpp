#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string myText;
	int Score = 0;

	// Create and open a text file
	ifstream MyFile("input.txt");

	while (getline(MyFile, myText)) {
		// Output the text from the file
		if (myText[0] == 'A')
		{
			if (myText[2] == 'X')
			{
				Score += 3;
			}
			else if (myText[2] == 'Y')
			{
				Score += 4;
			}
			else if (myText[2] == 'Z')
			{
				Score += 8;
			}
		}
		else if (myText[0] == 'B')
		{
			if (myText[2] == 'X')
			{
				Score += 1;
			}
			else if (myText[2] == 'Y')
			{
				Score += 5;
			}
			else if (myText[2] == 'Z')
			{
				Score += 9;
			}
		}
		else if (myText[0] == 'C')
		{
			if (myText[2] == 'X')
			{
				Score += 2;
			}
			else if (myText[2] == 'Y')
			{
				Score += 6;
			}
			else if (myText[2] == 'Z')
			{
				Score += 7;
			}
		}
	}

	cout << Score;
	// Close the file
	MyFile.close();
}