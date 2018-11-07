#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Hammering.h>
#include <Swordsmanship.h>
#include <Shoveling.h>

Shoveling::Shoveling()
{
}

Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation * a)
{
	std::cout << "Shoveling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::jumping(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Shoveling::climbing(Animation * a)
{
	std::cout << "Shoveling -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Shoveling::walking(Animation * a)
{
	std::cout << "Shoveling -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Shoveling::hammering(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Shoveling::shoveling(Animation * a)
{
}

void Shoveling::swordsmanship(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}
