#include <string>
#include "Menu.h"

// should eventually be deleted and used in Game.cpp
#include "Card.h"
#include "Deck.h"
#include "Player.h"

int main() {
	bool run = true;

	printTitle();

	while(run) {
		printMenu();

		char usr_cmd;
		std::cin >> usr_cmd;
		if(usr_cmd == '1')
		{
			Deck mainDeck = Deck();
			mainDeck.initPlayDeck();
			mainDeck.shuffle();
			Player pl = Player();
			pl.take(mainDeck.give());
			pl.take(mainDeck.give());
			pl.showHand();
			std::cout << "-- discard card at 0 --" << std::endl;
			pl.discard(0);
			pl.showHand();
			pl.showDiscardPile();
		}
		else if (usr_cmd == '2') printInstructions();
		else if (usr_cmd == '3') printAbout();
		else if (usr_cmd == '0') run = false;
	}

	return 0;
}