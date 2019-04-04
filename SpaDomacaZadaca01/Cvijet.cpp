#include "Cvijet.h"
using namespace sf;

Cvijet::Cvijet(RenderWindow * window)
{
	this->window = window;
}

void Cvijet::draw()
{
	//CVIJET
	krug.setPosition(340.f, 240.f);
	krug.setFillColor(Color(255, 251, 35));
	krug.setOutlineColor(Color(173, 170, 1));
	krug.setOutlineThickness(8.f);

	stabljika.setPosition(390.f, 300.f);
	stabljika.setFillColor(Color(96, 33, 0));

	list.setPointCount(4);
	list.setPoint(0, Vector2f(400.f, 450.f));
	list.setPoint(1, Vector2f(450.f, 390.f));
	list.setPoint(2, Vector2f(570.f, 420.f));
	list.setPoint(3, Vector2f(480.f, 490.f));
	list.setFillColor(Color(0, 193, 32));

	//LATICE
	latica.setPosition(450.f, 250.f);
	latica.setFillColor(Color(214, 2, 111));
	latica.setOutlineColor(Color(226, 2, 2));
	latica.setScale(2.f, 1.f);

	latica1.setPosition(270.f, 240.f);
	latica1.setFillColor(Color(214, 2, 111));
	latica1.setOutlineColor(Color(226, 2, 2));
	latica1.setScale(2.f, 1.f);

	latica2.setPosition(430.f, 320.f);
	latica2.setFillColor(Color(214, 2, 111));
	latica2.setOutlineColor(Color(226, 2, 2));
	latica2.setScale(2.f, 1.f);
	latica2.setRotation(20.f);

	latica3.setPosition(280.f, 310.f);
	latica3.setFillColor(Color(214, 2, 111));
	latica3.setOutlineColor(Color(226, 2, 2));
	latica3.setScale(2.f, 1.f);
	latica3.setRotation(10.f);

	latica4.setPosition(420.f, 170.f);
	latica4.setFillColor(Color(214, 2, 111));
	latica4.setOutlineColor(Color(226, 2, 2));
	latica4.setScale(2.f, 1.f);
	latica4.setRotation(90.f);

	//OBLAK
	oblak.setPosition(420.f, 50.f);
	oblak.setFillColor(Color(255, 255, 255));
	oblak.setOutlineThickness(4.f);
	oblak.setOutlineColor(Color(137, 136, 136));
	oblak.setScale(3.f, 1.f);

	kap1.setPosition(470.f, 110.f);
	kap1.setFillColor(Color(45, 6, 216));
	kap3.setPosition(505.f, 140.f);
	kap3.setFillColor(Color(45, 6, 216));
	kap2.setPosition(540.f, 110.f);
	kap2.setFillColor(Color(45, 6, 216));

	//LIVADA
	livada.setPosition(0.f, 560.f);
	livada.setFillColor(Color(0, 155, 2));

	//SUNCE
	sunce.setPosition(80.f, 80.f);
	sunce.setFillColor(Color(252, 248, 0));
	sunce.setOutlineColor(Color(219, 216, 48));
	sunce.setOutlineThickness(5.f);

	zrake.setPosition(118.f, 130.f);
	zrake.setFillColor(Color(255, 170, 0));
	zrake.rotate(30.f);


	window->draw(list);
	window->draw(stabljika);
	window->draw(latica);
	window->draw(latica1);
	window->draw(latica2);
	window->draw(latica3);
	window->draw(latica4);
	window->draw(livada);
	window->draw(kap1);
	window->draw(kap2);
	window->draw(kap3);
	window->draw(oblak);
	window->draw(krug);
	window->draw(zrake);
	window->draw(sunce);
}
