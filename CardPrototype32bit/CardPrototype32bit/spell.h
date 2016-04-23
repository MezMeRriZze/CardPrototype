#ifndef SPELL_H
#define SPELL_H
#include "card.h"
using namespace sf;
class Spell : public Card{
public:
	Spell(const Vector2f & att, const string & con, const string & path, Package pack, int cardNum, int cost1,  bool & flag);
	virtual ~Spell();
	//Creature(){}
	virtual void deployEffect(RenderWindow & target, CardHand & hand, CardHand & oppoHand, BoardCard & board) = 0;
	virtual int getCost() = 0;
	int getLifePoint(){ return -1; }
	int getDefense(){ return -1; }
	int getAttack(){ return -1; }


private:
	int cost;


};

#endif