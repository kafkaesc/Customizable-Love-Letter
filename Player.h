#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Card.h"
#include "Deck.h"
#include "DiscardPile.h"

class Player {
private:
	Deck _hand;
	DiscardPile _discard;
	bool active;
public:
	void discard(int i)
	{
		_discard.add(_hand.remove(i));
	}

	void lose() 
	{
		active = false;
	}

	void showDiscardPile() 
	{
		_discard.print();
	}

	void showHand() 
	{
		_hand.print();
	}

	void take(Card c) 
	{
		_hand.add(c);
	}
};

#endif