//Julia Smith
//CIS 1202
//December 1, 2020

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Function Prototype!------------------------------------
char character(char start, int offset);

//Exceptions!--------------------------------------------
string invalidCharacterException = "Sorry, Invalid Character";
string invalidRangeException = "Sorry, Invalid Range";


//Main with driver to test the the character function!---
int main(char start, int offset)
{
	cout << "Please enter a letter: ";
		cin >> start;
	cout << "Please enter a number: ";
		cin >> offset;

	//Call the character handler function!
		character(start, offset);
}

//Character Function!------------------------------------
char character(char start, int offset)
{
	if (isalnum(start) || offset >= 0)
	{
		return start;
	}
	else if (ispunct(start) || ispunct(offset))
	{
		throw invalidCharacterException;
	}
	//-------------------------------------------------------
	if (offset < 0)
	{
		throw invalidRangeException;
	}



}