#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include <Hammering.h>
#include <Swordsmanship.h>
#include <Shoveling.h>

Walking::Walking()
{
}

Walking::~Walking()
{
}

void Walking::idle(Animation * a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Walking::jumping(Animation * a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Walking::climbing(Animation * a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Walking::walking(Animation * a)
{
}

void Walking::hammering(Animation * a)
{
	std::cout << "Walking -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Walking::shoveling(Animation * a)
{
	std::cout << "Walking -> Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Walking::swordsmanship(Animation * a)
{
	std::cout << "Walking -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
