#include <string>
#include "Menu.h"

// should eventually be deleted and used in Game.cpp
#include "Card.h"
#include "Deck.h"

int main() {
	bool run = true;

	printTitle();

	while(run) {
		printMenu();

		char usr_cmd;
		cin >> usr_cmd;
		if(usr_cmd == '1')
		{
			Deck mainDeck = Deck();
			mainDeck.shuffle();
			mainDeck.print();
		}
		else if (usr_cmd == '2') printInstructions();
		else if (usr_cmd == '3') printAbout();
		else if (usr_cmd == '0') run = false;
	}

	return 0;
}