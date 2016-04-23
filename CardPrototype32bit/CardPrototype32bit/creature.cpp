#include "creature.h"
using namespace sf;
Creature::Creature(const Vector2f & att, const string & con, const string & path, Package pack, int cardNum,  int cost1, int lifep, int def, int attack1,  bool & flag) : Card(att, con, path, Card::Type::Creature, pack, cardNum, flag){
	cost = cost1;
	lifePoint = lifep;
	defense = def;
	attack = attack1;
	alive = true;
}


Creature::~Creature(){
	
}
//
//void Creature::takeDamage(int point){
//	lifePoint -= point;
//	if (lifePoint <= 0)
//		alive = false;
//}