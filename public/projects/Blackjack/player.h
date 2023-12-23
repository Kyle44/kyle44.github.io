#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

#include "hand.cpp"
#include "card.cpp"

class Player{
 public:
 	Player(); /* Creating Player... */
 	Player(string name);
 	void hit();
 	void getName();
 	int getHandValue();

 	void handDetails();

// private:
 	string m_name;
 	bool m_flag; /* To identify this as player(1) or dealer(0) */
 	Hand m_myHand;
};



#endif