#include <SFML/Graphics.hpp>
#include <SFML/Window/Mouse.hpp>
#include <iostream>
#include "character.h"
#include "handCard.h"
using namespace sf;
using namespace std;

int main()
{
	
	RenderWindow window(VideoMode(1920, 1080), "Card_Game");
	Vector2f charaSize(350, 400);
	Vector2f cardSize(250, 350);
	Vector2f positionOfChara1(0, 0);
	Vector2f positionOfChara2(1570, 680);
	string pathOfChara1 = "chara1.jpg";
	bool loadSucc = true;
	Characters * chara1 = new Characters(charaSize, "Rogue", "Watch your back", pathOfChara1, positionOfChara1, loadSucc);
	Characters * chara2 = new Characters(charaSize, "Warrior", "Lok'Tar Ogar", pathOfChara1, positionOfChara2, loadSucc);
	//Card * sprint = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	//Card * sprint1 = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	//Card * sprint2 = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	//Card * sprint3 = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	//Card * sprint4 = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	//Card * sprint5 = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	//Card * sprint6 = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	//Card * sprint7 = new Card(cardSize, "kills yourself", pathOfChara1, loadSucc);
	if (!loadSucc) return 1;
	CardHand * myHand = new CardHand(); 
	CardHand * yourHand = new CardHand();
	//myHand->insertCard(sprint);
	//myHand->insertCard(sprint1);
	//myHand->insertCard(sprint2);
	//myHand->insertCard(sprint3);
	//yourHand->insertCard(sprint4);
	//yourHand->insertCard(sprint5);
	//yourHand->insertCard(sprint6);
	//yourHand->insertCard(sprint7);

	while (window.isOpen()){
		Event event;
		while (window.pollEvent(event)){
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		myHand->showCards(window, true, false);
		yourHand->showCards(window, false, false);
		chara1->display(window , false);
		chara2->display(window, false);
		window.display();
	}
	delete chara1;
	delete chara2;
	//delete sprint, sprint1, sprint2, sprint3, sprint4, sprint5, sprint6, sprint7;
	return 0;
}
/*
void getMousePosition(){
	bool flag1 = false, flag2 = false;
	while (!flag1 || !flag2){
		window.clear(Color::White);
		window.display();
		if (Mouse::isButtonPressed(Mouse::Left) && !flag1){
			flag1 = true;
			mouseClick1 = Mouse::getPosition();
			continue;
		}
		if (Mouse::isButtonPressed(Mouse::Left) && !flag2 && flag1){
			flag2 = true;
			mouseClick2 = Mouse::getPosition();
			break;
		}
	}
}

void drawMondrian(int x, int y, int a, int b){
	int difX = (x - a);
	int difY = (y - b);
	double ang = 0;
	if (difX != 0)	ang = atan(difY / difX);
	ang *= 180 / 3.1415926535;
	double length = sqrt(difX * difX + difY * difY);
	RectangleShape line(Vector2f(length, 4));
	//std::cout << ang;
	line.rotate(ang);
	line.setPosition(Vector2f(x, y));
	window.setMouseCursorVisible(false);
	while (window.isOpen())
	{
		Event event;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}


		window.clear(Color::White);
		line.setFillColor(Color::Black);
		window.draw(line);
		window.display();


		//	window.clear(Color::Blue);

	}
	//window.draw(line);
}
*/