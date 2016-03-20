#include "card.h"
using namespace sf;
using namespace std;

Card::Card(const Vector2f & att, const string & con, const string & path, Type tp, Package pack, int cardNum, bool & flag){
	content = con;
	cardNumber = cardNum;
	attribute = att;
	type = tp;
	package = pack;
	illustration = new Texture;
	if (!illustration->loadFromFile(path)) flag = false;
	card = new Sprite();
	card->setTexture(*illustration, true);
	IntRect tempRectangle = card->getTextureRect();
	card->setScale(att.x / tempRectangle.width, att.y / tempRectangle.height);

}

Card::~Card(){
	delete card;
	delete illustration;
}

void Card::display(RenderWindow & window, bool update, Vector2f & pos){
	card->setPosition(pos);
	if (update) render();
	window.draw(*card);
}

void Card::render(){
	card->setTexture(*illustration, true);
	IntRect tempRectangle = card->getTextureRect();
	card->setScale(attribute.x / tempRectangle.width, attribute.y / tempRectangle.height);

}
