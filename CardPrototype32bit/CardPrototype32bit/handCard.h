#ifndef CARDHAND_H
#define CARDHAND_H
#include "cardStruct.h"
#include "activeCard.h"
using namespace sf;
using namespace std;
class CardHand{

private:
	struct listNode{
		ActiveCard * elem;
		listNode * prev;
		listNode * next;
		listNode( ActiveCard * theCard);
		~listNode();
	};

public:

	CardHand();
	~CardHand();
	void insertCard( Card * theCard);
	void useCard( Card * theCard , bool & useSucc);
	void showCards(RenderWindow & target, bool whoseCard ,bool update);
	//void examineCard( Card * theCard);


private:
	int numOfCards;
	listNode * head , * tail;
	void _clear();



};

#endif