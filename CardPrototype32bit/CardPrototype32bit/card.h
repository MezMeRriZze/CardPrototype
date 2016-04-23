#ifndef CARD_H
#define CARD_H
#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include <string.h>
#include <iostream>
using namespace sf;
using namespace std;
class CardHand;
class BoardCard;
class Card{
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
	Card(const Vector2f & att, const string & con, const string & path, Type tp, Package pack, int cardNum, bool & flag);
	virtual	~Card();
	void display(RenderWindow & window, bool update, Vector2f & pos);
	virtual void deployEffect(CardHand & hand, CardHand & oppoHand, BoardCard & board) = 0;
	virtual int getCost() = 0;
	virtual int getLifePoint() = 0;
	virtual int getDefense() = 0;
	virtual int getAttack() = 0;

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
