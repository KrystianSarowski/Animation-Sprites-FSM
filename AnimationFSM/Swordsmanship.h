#ifndef SWORDSMANSHIP_H
#define SWORDSMANSHIP_H

#include <State.h>

class Swordsmanship : public State
{
public:
	Swordsmanship();
	~Swordsmanship();

	void idle(Animation* a);
	void jumping(Animation* a);
	void climbing(Animation* a);
	void walking(Animation * a);
	void hammering(Animation * a);
	void shoveling(Animation * a);
	void swordsmanship(Animation * a);
};

#endif // !SWORDSMANSHIP_H
