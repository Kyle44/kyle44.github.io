#ifndef HAND_H
#define HAND_H

#include "dealer.h"
#include "card.h"

#include <vector>

class Hand{
 public:
 	Hand();
 	void addCard(Card card);
 	int getTotal(); /* Calculate the total in your hand, return as int */
 	void hit();

 	void getTotalValue();
 	void getCardsInHand();
 	void getDealerHand();

// private:
 	vector<Card> m_myCards; /* Use myCards.push_back(cardVar) to add cards */
 	int m_total; /* Total value in your hand */
 	bool m_smallAce; /* If true, then total doesn't actually exceed 21, could be value 10 less */
};

#endif