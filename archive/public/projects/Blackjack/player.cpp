#include "player.h"

Player::Player()
	:m_flag(true)
{

}

Player::Player(string name)
{
	m_name = name;
}

void Player::hit(){
	m_myHand.hit();
	handDetails();
}

void Player::getName(){
	cout << "This player is named " << m_name << "." << endl;
}

int Player::getHandValue(){
	return m_myHand.getTotal();
}

void Player::handDetails(){
	m_myHand.getCardsInHand();
	m_myHand.getTotalValue();
}