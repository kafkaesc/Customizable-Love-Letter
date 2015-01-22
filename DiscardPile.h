#ifndef DISCARDPILE_H
#define DISCARDPILE_H

#include <string>
#include <vector>

#include "Card.h"

class DiscardPile {
private:
	std::vector<Card> _discard;
public:
	void add(Card c)
	{
			_discard.push_back(c);
	}

	void print()
	{
		for(int i = 0; i < _discard.size(); ++i) 
		{
			std::cout << i + 1 << ". ";
			_discard[i].print();
			std::cout << std::endl;
		}
	}
};

#endif