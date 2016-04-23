#ifndef CREATURE_H
#define CREATURE_H
#include "card.h"
using namespace sf;
class Creature : public Card{
public :
	Creature(const Vector2f & att, const string & con, const string & path , Package pack, int cardNum, int cost1 , int lifep , int def , int attack1 , bool & flag);
	virtual ~Creature();
	//Creature(){}
	virtual void deployEffect(RenderWindow & target, CardHand & hand, CardHand & oppoHand, BoardCard & board) = 0;
	//void takeDamage(int point);
	//void summon();
	virtual int getCost() = 0;
	virtual int getLifePoint() = 0;
	virtual int getDefense() = 0;
	virtual int getAttack() = 0;

private:
	int cost, lifePoint, defense, attack;
	bool alive;

};

#endif