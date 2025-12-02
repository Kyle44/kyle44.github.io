/*  Name: Kyle Fritz
	File: main.cpp
	Date Created: Summer 2016
	Description: Blackjack game
*/

#include "dealer.cpp"

int main(){
	Dealer dealer;
	Player p1("Kyle");

	p1.handDetails();
	dealer.m_myHand.getDealerHand();

	/* Automatic Wins */
	if(dealer.getHandValue() == 21){
		cout << "Wait! Dealer's facedown card is the " << dealer.m_myHand.m_myCards[1].m_face << " of " << dealer.m_myHand.m_myCards[1].m_suit << "!\n";
		cout << "Dealer has 21! Dealer Wins!\n";
		return 0; }
	else if(p1.getHandValue() == 21){ 
		cout << "Player Wins!\n"; 
		return 0; }

	/* The game begins */
	cout << "Hit or Stay? (h or s)\n";
	char answer;
	while(answer != 'h' && answer != 's'){
		cin >> answer;
		answer = tolower(answer);
	}

	while(answer == 'h'){ /* Hit */
		p1.hit();
			if(p1.getHandValue() > 21){
				cout << "Uh Oh! You went over! Dealer Wins!\n";
				return 0; }
			else if(p1.getHandValue() == 21){
				break;
			}
			cout << "Hit again?\n";
			cin >> answer; 
	}

//	dealer.handDetails();
	while(dealer.getHandValue() < 17){
		dealer.hit(); }

	cout << endl;
	for(int i = 0; dealer.m_myHand.m_myCards[i].m_value != '\0'; i++){
		cout << "Dealer has the " << dealer.m_myHand.m_myCards[i].m_face << " of " << dealer.m_myHand.m_myCards[i].m_suit << endl; }
	cout << "The Dealer's total is " << dealer.getHandValue() << endl;

	if(dealer.getHandValue() > 21 || dealer.getHandValue() < p1.getHandValue()){
		cout << "You beat the Dealer!\n"; }
	else if(dealer.getHandValue() == p1.getHandValue()){
		cout << "Push!!!\n"; }
	else{
		cout << "Sorry! Better luck next time!\n"; }

	return 0;
}