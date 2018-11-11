#ifndef SHOVELING_H
#define SHOVELING_H

#include <State.h>
// @Author Krystian Sarowski

class Shoveling : public State
{
public:
	Shoveling();
	~Shoveling();

	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation * a);
	void hammering(Animation * a);
	void shoveling(Animation * a);
	void swordsmanship(Animation * a);
};

#endif // !SHOVELING_H
