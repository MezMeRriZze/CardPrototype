#ifndef ACTIVECARD_H
#define ACTIVECARD_H
#include "card.h"
using namespace sf;
class ActiveCard{

public :
	ActiveCard(Card::Type tp, Card::Package pack, int cardNum);
	~ActiveCard();
	void useCard(RenderWindow & target, CardHand & hand, CardHand & oppoHand, BoardCard & board);
private:
	Card * ptrToCard;

};

#endif