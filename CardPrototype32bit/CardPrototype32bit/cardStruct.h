#ifndef CARDSTRUCT_H
#define CARDSTRUCT_H
#include "card.h"
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




private :




};


#endif