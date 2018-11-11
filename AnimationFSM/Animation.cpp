#include <Animation.h>
#include <Idle.h>
// @Author Krystian Sarowski

Animation::Animation()
{
	m_current = new Idle();
}

Animation::~Animation() {}

/// <summary>
/// @brief Sets the current state we are in.
/// 
/// </summary>
void Animation::setCurrent(State* s)
{
	m_current = s;
}

/// <summary>
/// @brief Returns the current state we are in.
/// 
/// </summary>
State* Animation::getCurrent()
{
	return m_current;
}

/// <summary>
/// @brief Sets the previous state we were in.
/// 
/// </summary>
void Animation::setPrevious(State* s)
{
	m_previous = s;
}

/// <summary>
/// @brief Returns the previous state we were in.
/// 
/// </summary>
State* Animation::getPrevious()
{
	return m_previous;
}

/// <summary>
/// @brief Calls a function to change the current state to idle.
/// 
/// </summary>
void Animation::idle()
{
	m_current->idle(this);
}

/// <summary>
/// @brief Calls a function to change the current state to jumping.
/// 
/// </summary>
void Animation::jumping()
{
	m_current->jumping(this);
}

/// <summary>
/// @brief Calls a function to change the current state to climbing.
/// 
/// </summary>
void Animation::climbing()
{
	m_current->climbing(this);
}

/// <summary>
/// @brief Calls a function to change the current state to walking.
/// 
/// </summary>
void Animation::walking()
{
	m_current->walking(this);
}

/// <summary>
/// @brief Calls a function to change the current state to hammering.
/// 
/// </summary>
void Animation::hammering()
{
	m_current->hammering(this);
}

/// <summary>
/// @brief Calls a function to change the current state to shoveling.
/// 
/// </summary>
void Animation::shoveling()
{
	m_current->shoveling(this);
}

/// <summary>
/// @brief Calls a function to change the current state to swordsmanship.
/// 
/// </summary>
void Animation::swordsmanship()
{
	m_current->swordsmanship(this);
}

