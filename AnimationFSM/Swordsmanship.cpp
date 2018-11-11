#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Hammering.h>
#include <Swordsmanship.h>
#include <Shoveling.h>
// @Author Krystian Sarowski

Swordsmanship::Swordsmanship()
{
}

Swordsmanship::~Swordsmanship()
{
}

void Swordsmanship::idle(Animation * a)
{
	std::cout << "Swordsmanship -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Swordsmanship::jumping(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Swordsmanship::climbing(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Swordsmanship::walking(Animation * a)
{
	std::cout << "Swordsmanship -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Swordsmanship::hammering(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Swordsmanship::shoveling(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Swordsmanship::swordsmanship(Animation * a)
{
}
