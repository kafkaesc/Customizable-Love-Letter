#ifndef DECK_H
#define DECK_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include "Card.h"

class Deck {
private:
	vector<Card> _deck;
public:
	Deck() {};
	void initPlayDeck(std::string deckFilename = "default.txt") 
	{
		ifstream read;
		read.open(deckFilename);

		if (read.is_open())
		{
			std::string name;
			std::string s_value;
			int value;

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "Guard action."), 5);

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "Priest action."), 2);

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "Baron action."), 2);

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "Handmaid action."), 2);

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "Prince action."), 2);

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "King action."));

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "Countess action."));

			getline(read, name);
			getline(read, s_value);
			value = atoi(s_value.c_str());
			add(Card(name, value, "Princess action."));
		}
		read.close();
	}

	void add(Card c, int n = 1)
	{
		for (int i = 0; i < n; ++i) 
		{
			_deck.push_back(c);
		}
	}

	Card give() 
	{
		Card temp = _deck.back();
		_deck.pop_back();
		return temp;
	}

	void print()
	{
		for(int i = 0; i < _deck.size(); ++i) 
		{
			_deck[i].print();
			std::cout << std::endl;
		}
	}

	void shuffle()
	{
		srand (time(NULL));
		int shufflePosition;

		for(int i = 0; i < _deck.size(); ++i) 
		{
			shufflePosition = rand() % _deck.size();
			Card temp = _deck[i];
			_deck[i] = _deck[shufflePosition];
			_deck[shufflePosition] = temp;
		}
	}

};

#endif