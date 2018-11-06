#ifndef INPUT_H
#define INPUT_H

#include <string>

class Input
{
public:
	Input();
	~Input();

	void setCurrent(std::string t_currentAction);
	std::string getCurrent();

private:
	std::string m_currentAction;
};
#endif