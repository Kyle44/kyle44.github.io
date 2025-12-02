#include "dealer.h"

Dealer::Dealer()
	:m_flag(false)
{}

void Dealer::hit(){
	m_myHand.hit();
}