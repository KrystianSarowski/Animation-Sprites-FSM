#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>
#include <Windows.h>
// @Author Krystian Sarowski

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(Animation* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void walking(Animation* a)
	{
		DEBUG_MSG("State::Walking");
	}
	virtual void hammering(Animation* a)
	{
		DEBUG_MSG("State::Hammering");
	}
	virtual void shoveling(Animation* a)
	{
		DEBUG_MSG("State::Shoveling");
	}
	virtual void swordsmanship(Animation* a)
	{
		DEBUG_MSG("State::Swordsmanship");
	}
};

#endif // ! ANIMATION_H

