#include "activeCard.h"
using namespace sf;

ActiveCard::ActiveCard(CardStruct * theCards, Card::Type tp, Card::Package pack, int cardNum){
	ptrToCard = theCards->getCardPtr(tp, pack, cardNum);
	typeOfCard = tp;
	if (tp == Card::Type::Creature){
		cost = ptrToCard->getCost();
		lifePoint = ptrToCard->getLifePoint();
		attack = ptrToCard->getAttack();
		defense = ptrToCard->getDefense();
	}
	else if (tp == Card::Type::Spell){
		cost = ptrToCard->getCost();
		lifePoint = attack = defense = -1;
	}
		
}

ActiveCard::~ActiveCard(){
}

void ActiveCard::display(RenderWindow & target, bool update, Vector2f & position){
	ptrToCard->display(target, update, position);
}


void ActiveCard::useCard( CardHand & hand, CardHand & oppoHand, BoardCard & board){
	ptrToCard->deployEffect( hand, oppoHand, board);
}
