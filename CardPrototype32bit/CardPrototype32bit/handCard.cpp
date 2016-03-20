#include "handCard.h"
using namespace std;
using namespace sf;

CardHand::CardHand(){
	tail = head = NULL;
	numOfCards = 0;
}

CardHand::~CardHand(){
	_clear();
}

void CardHand::insertCard( Card * theCard){
	if (head == NULL){
		head = new listNode(theCard);
		head->prev = NULL;
		head->next = NULL;
		tail = head;
	}
	else{
		listNode * temp = head;
		head = new listNode(theCard);
		head->prev = NULL;
		head->next = temp;
	}
	numOfCards++;
}

void CardHand::useCard(Card * theCard , bool & useSucc){
	listNode * temp = head;
	while (temp != NULL){
		if (temp->elem == theCard){
			//temp->useThisCard();
			if (temp->prev != NULL){
				temp->prev->next = temp->next;
			}
			else{
				head = temp->next;
			}
			if (temp->next != NULL){
				temp->next->prev = temp->prev;
			}
			else{
				tail = temp->prev;
			}
			temp = NULL;
			numOfCards --;
			return;
		}
		temp = temp->next;
	}
	useSucc = false;

}

void CardHand::showCards(RenderWindow & target, bool whoseCard,  bool update){
	listNode * temp = head;
	Vector2f position;
	position.y = whoseCard ? 730 : 0;
	position.x = whoseCard ? 0 : 400;
	float distance = 1270.0 / numOfCards;
	while (temp != NULL){
		temp->elem->display(target, update , position);
		position.x += distance;
		temp = temp->next;
	}
}


CardHand::listNode::listNode( Card * theCard){
	elem = theCard;
}

CardHand::listNode::~listNode(){
	delete elem;
}

void CardHand::_clear(){
	listNode * temp = head;
	while (temp != NULL){
		listNode * next = temp->next;
		temp = NULL;
		temp = next;
	}
	tail = head = NULL;
	numOfCards = 0;
}