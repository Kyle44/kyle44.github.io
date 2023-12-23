#include "hand.h"

Hand::Hand()
	:m_smallAce(false)
{
	/* Setup first two cards in the hand for the player */
	Card card1, card2;
	card1.randomCard();
	card2.randomCard();
	addCard(card1); addCard(card2);

	getTotal();
}

void Hand::addCard(Card card){
	m_myCards.push_back(card);
}

int Hand::getTotal(){
	bool flag = 1; /* Player */
	m_total = 0;
	
	for(int i = 0; m_myCards[i].m_value != '\0'; i++){
		
		m_total += m_myCards[i].m_value;
		if(m_myCards[i].m_value == 11){ /* Check if Ace is there */
			m_smallAce = true; }
	}

	if(m_smallAce && m_total > 21){
		m_total -= 10;
	}

	return m_total;
}

void Hand::getTotalValue(){
	cout << "Your current total is " << m_total << endl;
}

void Hand::getCardsInHand(){
	cout << endl;
	for(int i = 0; m_myCards[i].m_value != '\0'; i++){
		cout << "You have the " << m_myCards[i].m_face << " of " << m_myCards[i].m_suit << endl; }
}

void Hand::getDealerHand(){
	cout << "Dealer has the " << m_myCards[0].m_face << " of " << m_myCards[0].m_suit << " and one other card face down\n";
}

void Hand::hit(){
	Card card;
	card.randomCard();
	m_myCards.push_back(card);
//	cout << "You drew the " << card.getFace() << " of " << card.m_suit << endl;
	getTotal();
}