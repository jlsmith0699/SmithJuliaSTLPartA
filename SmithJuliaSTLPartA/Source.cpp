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
string invalidRangeException = "Sorry, Invalid Range"


//Main with driver to test the the character function!---
int main(char start, int offset)
{

}

//Character Function!------------------------------------
char character(char start, int offset)
{
	if (isalnum(start) && start > 0)
	{
		return 'b';
	}
	else
	{
		throw invalidCharacterException;
	}
	
	if (ispunct(start))

}