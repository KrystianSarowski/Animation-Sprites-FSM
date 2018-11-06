#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

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

AnimatedSprite& Player::getAnimatedSprite()
{
	m_animated_sprite.setTextureRect(m_animated_sprite.getCurrentFrame());
	return m_animated_sprite;
}

void Player::handleInput(Input t_input)
{
	DEBUG_MSG("Handle Input");

	if ("Walking" == t_input.getCurrent())
	{
		m_animation.walking();
		m_animated_sprite.setFrameRow(1);
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
}

void Player::update()
{
	m_animated_sprite.update();

	if (sf::seconds(0.0f) < m_timeBeforeIdle)
	{
		m_timeBeforeIdle -= m_clock.getElapsedTime();
		m_clock.restart();
	}
}