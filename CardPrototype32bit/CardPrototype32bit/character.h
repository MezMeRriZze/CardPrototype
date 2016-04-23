#ifndef CHARACTERS_H
#define CHARACTERS_H
#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include <string.h>
#include <iostream>
using namespace sf;
using namespace std;
class Characters{

public :
	Characters(const Vector2f & att, const string & nm , const string & des , const string & path , Vector2f & pos , bool & flag);
	~Characters();
	void display(RenderWindow & window , bool update);

private:

	Sprite * chara;
	string name , description;
	Vector2f position, attribute;
	Texture * illustration;
	void render();


};
#endif
