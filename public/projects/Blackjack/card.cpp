#include "card.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <unistd.h>

Card::Card()
: m_value(0)
{}

Card::Card(int value, string suit)
: m_value(value), m_suit(suit)
{}

char* Card::getFace(){
	return m_face;
}


void Card::setFace(){

	if(m_value == 1){
		m_face = "A";
		m_value = 11; }
	else if(m_value == 2){
		m_face = "2";}
	else if(m_value == 3){
		m_face = "3";}
	else if(m_value == 4){
		m_face = "4";}
	else if(m_value == 5){
		m_face = "5";}
	else if(m_value == 6){
		m_face = "6";}
	else if(m_value == 7){
		m_face = "7";}
	else if(m_value == 8){
		m_face = "8";}
	else if(m_value == 9){
		m_face = "9";}
	else if(m_value == 10){ /* No ascii value for 10, so have to do it manually */
		m_face = "10"; }
	else if(m_value == 11){
		m_face = "J";
		m_value = 10; }
	else if(m_value == 12){
		m_face = "Q";
		m_value = 10; }
	else{ /* m_value = 0 */
		m_face = "K";
		m_value = 10; }
}

void Card::randomCard(){
	srand(time(NULL)); /* Randomizes everything after a certain amount of time */
	sleep(2); /* Wait 2 seconds before hitting again (for new random card) */
	int randomNumber = rand() % 52 + 1; /* Number from 1-52 */

//	cout << "Making random card...\n";

	/* Get the suit */
	if(randomNumber <= 13){
		m_suit = "hearts"; }
	else if(randomNumber <= 26){
		m_suit = "diamonds"; }
	else if(randomNumber <= 39){
		m_suit = "clubs"; }
	else{
		m_suit = "spades"; }

	/* Get the value */ 
	if(randomNumber%13 + 1 == 1){ /* Ace worth 11, moves down to 1 in Hand class getTotal function */
		m_value = 11; }
	else{
		m_value = randomNumber%13; }

	setFace();
}