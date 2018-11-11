#ifndef HAMMERING_H
#define HAMMERING_H

#include <State.h>
// @Author Krystian Sarowski

class Hammering : public State
{
public:
	Hammering();
	~Hammering();

	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation * a);
	void hammering(Animation * a);
	void shoveling(Animation * a);
	void swordsmanship(Animation * a);
};

#endif // !HAMMERING_H
