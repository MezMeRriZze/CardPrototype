#include "spell.h"
using namespace sf;
Spell::Spell(const Vector2f & att, const string & con, const string & path, Package pack, int cardNum, int cost1, bool & flag) : Card(att, con, path, Card::Type::Spell, pack, cardNum, flag){
	cost = cost1;

}


Spell::~Spell(){

}

