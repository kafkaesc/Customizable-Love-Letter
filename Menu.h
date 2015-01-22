#include <iostream>

void printTitle()
{
	std::cout << 
		"Love Letter" << std::endl <<
		"It's a card game." << std::endl <<
		"Programming by Jared Hettinger" << std::endl;
}

void printMenu()
{
	std::cout << std::endl <<
		"1. Start Game" << std::endl <<
		"2. Instructions" << std::endl <<
		"3. About" << std::endl << std::endl <<
		"0. Exit Game" << std::endl << std::endl << 
		"-> ";
}

void printInstructions()
{
	std::cout << std::endl << "- Instructions for the game. -" 
		<< std::endl << std::endl;
}

void printAbout()
{
	std::cout << std::endl << "- About the game. -" 
		<< std::endl << std::endl;
}