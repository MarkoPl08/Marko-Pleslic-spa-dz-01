#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Cvijet
{
private:
	RenderWindow* window;
	//cvjetic
	CircleShape krug{ 60.f };
	RectangleShape stabljika{ Vector2f(20.f, 300.f) };
	ConvexShape list;

	//latica
	CircleShape latica{ 20.f };
	CircleShape latica1{ 20.f };
	CircleShape latica2{ 20.f };
	CircleShape latica3{ 20.f };
	CircleShape latica4{ 20.f };

	//oblak
	CircleShape oblak{ 30.f };
	RectangleShape kap1{ Vector2f(5.f, 40.f) };
	RectangleShape kap2{ Vector2f(5.f, 40.f) };
	RectangleShape kap3{ Vector2f(5.f, 40.f) };

	//sunce 
	CircleShape sunce{ 40.f };
	RectangleShape zrake{ Vector2f(8.f, 100.f) };

	//livada
	RectangleShape livada{ Vector2f(800.f, 70.f) };

public:
	Cvijet(RenderWindow* window);
	void draw();
};

