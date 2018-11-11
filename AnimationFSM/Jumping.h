#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>
// @Author Krystian Sarowski

class Jumping : public State
{
public:
	Jumping();
	~Jumping();

	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation * a);
	void hammering(Animation * a);
	void shoveling(Animation * a);
	void swordsmanship(Animation * a);
};

#endif // !JUMPING_H