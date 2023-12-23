#ifndef DEALER_H
#define DEALER_H

#include "player.cpp"

class Dealer: virtual public Player{
 public:
 	Dealer(); /* Creating Player... */
 	void hit();

 	bool m_flag;
};

#endif