#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Hammering.h>
#include <Swordsmanship.h>
#include <Shoveling.h>

Climbing::Climbing()
{
}

Climbing::~Climbing()
{
}

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::climbing(Animation * a)
{
}

void Climbing::walking(Animation * a)
{
	std::cout << "Climbing -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Climbing::hammering(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}

void Climbing::shoveling(Animation * a)
{
	std::cout << "Climbing -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Climbing::swordsmanship(Animation * a)
{
	std::cout << "No can do right now!" << std::endl;
	Beep(1000, 500);
}
