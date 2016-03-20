#include "activeCard.h"
using namespace sf;

ActiveCard::ActiveCard(Card::Type tp, Card::Package pack, int cardNum){
	
}

ActiveCard::~ActiveCard(){
	delete ptrToCard;
}

void ActiveCard::useCard(RenderWindow & target, CardHand & hand, CardHand & oppoHand, BoardCard & board){
	ptrToCard->deployEffect(target, hand, oppoHand, board);
}