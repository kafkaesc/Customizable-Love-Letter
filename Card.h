#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card {
private:
	Card() {};
	std::string _name;
	int         _value;
	std::string _text;
public:
	Card(std::string n, int v, std::string t)
	{
		_name  = n;
		_value = v;
		_text  = t;
	}

	// printers
	void print()
	{
		std::cout << _name << " (" << _value << ") " << 
			_text;
	}

	// getters
	std::string name() { return _name;  }
	int value()        { return _value; }
	std::string text() { return _text;  }

};

#endif