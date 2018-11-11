#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Hammering.h>
#include <Swordsmanship.h>
#include <Shoveling.h>
// @Author Krystian Sarowski

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Hammering::climbing(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Hammering::walking(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Hammering::hammering(Animation * a)
{
}

void Hammering::shoveling(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Hammering::swordsmanship(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}
