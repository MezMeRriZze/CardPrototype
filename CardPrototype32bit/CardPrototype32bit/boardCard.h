#ifndef BOARDCARD_H
#define BOARDCARD_H
#include "activeCard.h"
class BoardCard{
private:
	
	struct listNode{
		ActiveCard * elem;
		listNode * prev;
		listNode * next;
		listNode(ActiveCard * theCard);
		~listNode();
	};

public:

	BoardCard();
	~BoardCard();
	void insertCard(bool whoseCard);
	void destructCard(bool whoseCard, int cardNum);



private:
	int numOfCardsPOne , numOfCardsPTwo;
	listNode * headForPOne, * headForPTwo;
	void _clear();


};

#endif