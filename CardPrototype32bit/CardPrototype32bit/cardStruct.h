#ifndef CARDSTRUCT_H
#define CARDSTRUCT_H
#include "card.h"
#include "creature.h"
#include "spell.h"
using namespace sf;
using namespace std;
class CardStruct{

private:
	struct freeTreeNode{
		Card * elem;
		freeTreeNode * parent;
		freeTreeNode * leftMostChild;
		freeTreeNode * siblings;
	};

public :
	freeTreeNode * rootFor;
	Card * getCardPtr(Card::Type tp, Card::Package pack, int cardNum);


private :




};


#endif