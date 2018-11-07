#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle();
	~Idle();

	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation * a);
	void hammering(Animation * a);
	void shoveling(Animation * a);
	void swordsmanship(Animation * a);
};

#endif // !IDLE_H