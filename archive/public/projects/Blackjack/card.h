#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card{
 public:
 	Card();
 	Card(int value, string suit);
 	void randomCard(); /* Random value of card is set */
 	void setFace(); /* Sets m_face with m_value */
 	char* getFace();


 	int m_value; /* i.e. 3 */
 	char* m_face; /* i.e. A, K, Q, J, 10, 9, etc */
 	string m_suit; /* hearts, spades, clubs, diamonds */
};

#endif