#ifndef ACTIVECARD_H
#define ACTIVECARD_H
#include "card.h"
#include "cardStruct.h"
using namespace sf;
class CardHand;
class BoardCard;
class ActiveCard{

public :
	ActiveCard(CardStruct * theCards , Card::Type tp, Card::Package pack, int cardNum);
	~ActiveCard();
	void display(RenderWindow & target, bool update, Vector2f & position);
	void useCard( CardHand & hand, CardHand & oppoHand, BoardCard & board);
private:
	Card * ptrToCard;
	Card::Type typeOfCard;
	int cost, lifePoint, defense, attack;
};

#endif