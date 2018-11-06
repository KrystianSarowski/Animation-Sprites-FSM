#include <Input.h>

Input::Input() 
{
	m_currentAction = "Idle";
}
Input::~Input() {}

void Input::setCurrent(std::string t_currentAction) 
{
	m_currentAction = t_currentAction;
}

std::string Input::getCurrent() {
	return m_currentAction;
}
