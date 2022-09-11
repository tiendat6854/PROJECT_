#pragma once
#include <set>
#include "Card.h"

class QLCard
{
private:
	set<Card> dsCard;
public:
	void addCard();
	void deleteCard();
	void display();
};

