#ifndef CARD_H
#define CARD_H
#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include <string.h>
#include <iostream>
#include "boardCard.h"
#include "handCard.h"
using namespace sf;
using namespace std;
class Card : public CObject{
	//DECLARE_SERIAL(Card)
public :
	enum Type
	{
		Spell , Creature , Trap , Weapon , Else
	};
	enum Package
	{
		First
	};
	Card();
	void Serialize(CArchive & archive);
	Card(const Vector2f & att, const string & con, const string & path, Type tp, Package pack, int cardNum, bool & flag);
	virtual	~Card();
	void display(RenderWindow & window, bool update, Vector2f & pos);
	virtual void deployEffect(RenderWindow & target, CardHand & hand, CardHand & oppoHand, BoardCard & board) = 0;

private:
	Type type;
	int cardNumber;
	Package package;
	Sprite * card;
	string content;
	Vector2f attribute;
	Texture * illustration;
	void render();

};
#endif
