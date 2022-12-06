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
		if (myText[2] == 'X')
		{
			Score += 1;
			if (myText[0] == 'A')
			{
				Score += 3;
			}
			else if (myText[0] == 'B')
			{
				Score += 0;
			}
			else if (myText[0] == 'C')
			{
				Score += 6;
			}
		}
		else if (myText[2] == 'Y')
		{
			Score += 2;
			if (myText[0] == 'A')
			{
				Score += 6;
			}
			else if (myText[0] == 'B')
			{
				Score += 3;
			}
			else if (myText[0] == 'C')
			{
				Score += 0;
			}
		}
		else if (myText[2] == 'Z')
		{
			Score += 3;
			if (myText[0] == 'A')
			{
				Score += 0;
			}
			else if (myText[0] == 'B')
			{
				Score += 6;
			}
			else if (myText[0] == 'C')
			{
				Score += 3;
			}
		}
	}

	cout << Score;
	// Close the file
	MyFile.close();
}