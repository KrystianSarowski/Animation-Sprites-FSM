#ifndef INPUT_H
#define INPUT_H

#include <string>
// @Author Krystian Sarowski

class Input
{
public:
	Input();
	~Input();

	std::string getCurrent();
	void setCurrent(std::string t_currentAction);

private:

	std::string m_currentAction;	//The cuurent action the user wants to do.
};
#endif