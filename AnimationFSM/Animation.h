#ifndef ANIMATION_H
#define ANIMATION_H
// @Author Krystian Sarowski

class Animation
{

private:

	class State* m_current;		//Pointer to the current state we are in.
	class State* m_previous;	//Pointer to the previous state we were in.
public:

	Animation();
	~Animation();
	void setCurrent(State* s);
	void setPrevious(State* s);
	State* getCurrent();
	State* getPrevious();
	
	void idle();
	void jumping();
	void climbing();
	void walking();
	void hammering();
	void shoveling();
	void swordsmanship();

};

#endif // !ANIMATION_H
