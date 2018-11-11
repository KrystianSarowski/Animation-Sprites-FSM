#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>
// @Author Krystian Sarowski

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& t_sprite) :
	m_animated_sprite(t_sprite),
	m_timeBeforeIdle(sf::seconds(0.0f))
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

/// <summary>
/// @brief Returns a reference to the naimatedSprite of the player.
/// 
/// </summary>
AnimatedSprite& Player::getAnimatedSprite()
{
	m_animated_sprite.setTextureRect(m_animated_sprite.getCurrentFrame());
	return m_animated_sprite;
}

/// <summary>
/// @brief Handles the the input recived by the user for the player and makes changes apropertly.
/// 
/// </summary>
void Player::handleInput(Input t_input)
{
	DEBUG_MSG("Handle Input");

	if ("Walking" == t_input.getCurrent())
	{
		m_animation.walking();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(1);
		}
		m_timeBeforeIdle = m_IDLE_COOLDOWN;
	}
	else if ("Climbing" == t_input.getCurrent())
	{
		m_animation.climbing();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(2);
		}
		m_timeBeforeIdle = m_IDLE_COOLDOWN;
	}
	else if ("Jumping" == t_input.getCurrent())
	{
		m_animation.jumping();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(3);
		}
		m_timeBeforeIdle = m_IDLE_COOLDOWN;
	}
	else if ("Hammering" == t_input.getCurrent())
	{
		m_animation.hammering();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(4);
		}
		m_timeBeforeIdle = m_IDLE_COOLDOWN;
	}
	else if ("Swordsmanship" == t_input.getCurrent())
	{
		m_animation.swordsmanship();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(5);
		}
		m_timeBeforeIdle = m_IDLE_COOLDOWN;
	}
	else if ("Shoveling" == t_input.getCurrent())
	{
		m_animation.shoveling();
		if (m_animation.getCurrent() != m_animation.getPrevious())
		{
			m_animated_sprite.setFrameRow(6);
		}
		m_timeBeforeIdle = m_IDLE_COOLDOWN;
	}
	else
	{
		if (sf::seconds(0.0f) >= m_timeBeforeIdle)
		{
			m_animation.idle();
			m_animated_sprite.setFrameRow(0);
		}
	}

	//Sets the previous state to the current state.
	m_animation.setPrevious(m_animation.getCurrent());
}

/// <summary>
/// @brief Updates the player variables.
/// 
/// </summary>
void Player::update()
{
	m_animated_sprite.update();

	if (sf::seconds(0.0f) < m_timeBeforeIdle)
	{
		m_timeBeforeIdle -= m_clock.getElapsedTime();
		m_clock.restart();
	}
}