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
	bool _active;
	bool _protected;

public:
	Player()
	{
		Deck _hand           = Deck();
		DiscardPile _discard = DiscardPile();
		_active              = true;
		_protected           = false;
	}

	void discard(int i)
	{
		_discard.add(_hand.remove(i));
	}

	void lose() 
	{
		_active = false;
	}

	void protect()
	{
		_protected = true;
	}

	void unprotect()
	{
		_protected = false;
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