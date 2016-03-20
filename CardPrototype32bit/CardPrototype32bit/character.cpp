#include "character.h"
using namespace sf;
using namespace std;

Characters::Characters(const Vector2f & att, const string & nm, const string & des , const string & path , Vector2f & pos , bool & flag){
		name = nm;
		description = des;
		position = pos;
		attribute = att;
		illustration = new Texture;
		if(!illustration->loadFromFile(path)) flag = false;
		chara = new Sprite();
		chara->setTexture(*illustration, true);
		IntRect tempRectangle = chara->getTextureRect();
		chara->setScale(att.x / tempRectangle.width, att.y / tempRectangle.height);
		chara->setPosition(pos);
}

Characters::~Characters(){
	delete chara;
	delete illustration;
}

void Characters::display(RenderWindow & window , bool update){
	if ( update ) render();
	window.draw(*chara);
}

void Characters::render(){
	chara->setTexture(*illustration, true);
	IntRect tempRectangle = chara->getTextureRect();
	chara->setScale(attribute.x / tempRectangle.width, attribute.y / tempRectangle.height);

}
