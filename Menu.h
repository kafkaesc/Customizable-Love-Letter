#include <iostream>

using namespace std;

void printTitle()
{
	cout << 
		"Love Letter" << endl <<
		"It's a card game." << endl <<
		"Programming by Jared Hettinger" << endl;
}

void printMenu()
{
	cout << endl <<
		"1. Start Game" << endl <<
		"2. Instructions" << endl <<
		"3. About" << endl << endl <<
		"0. Exit Game" << endl << endl << 
		"-> ";
}

void printInstructions()
{
	cout << endl << "- Instructions for the game. -" << endl << endl;
}

void printAbout()
{
	cout << endl << "- About the game. -" << endl << endl;
}