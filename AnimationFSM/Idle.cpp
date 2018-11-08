#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Hammering.h>
#include <Swordsmanship.h>
#include <Shoveling.h>

Idle::Idle()
{
}

Idle::~Idle()
{
}

void Idle::idle(Animation * a)
{
}

void Idle::jumping(Animation* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::walking(Animation * a)
{
	std::cout << "Idle -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Idle::hammering(Animation * a)
{
	std::cout << "Idle -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Idle::shoveling(Animation * a)
{
	std::cout << "Idle -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Idle::swordsmanship(Animation * a)
{
	std::cout << "Idle -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
