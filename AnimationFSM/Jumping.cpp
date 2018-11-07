#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Hammering.h>
#include <Swordsmanship.h>
#include <Shoveling.h>

Jumping::Jumping()
{
}

Jumping::~Jumping()
{
}

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::jumping(Animation * a)
{
}

void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::walking(Animation * a)
{
	std::cout << "Jumping -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Jumping::hammering(Animation * a)
{
	std::cout << "Jumping -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Jumping::shoveling(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Jumping::swordsmanship(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}
