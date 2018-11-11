#include <AnimatedSprite.h>
// @Author Krystian Sarowski

AnimatedSprite::AnimatedSprite() 
{
	m_currentFrameCol = 0;
	m_currentFrameRow = 0;
	setCurrentFrame();
}

AnimatedSprite::AnimatedSprite(const sf::Texture& t) : 
	Sprite(t), 
	m_currentFrameCol(0), 
	m_currentFrameRow(0),
	m_time(seconds(0.5f))
{
	setCurrentFrame();
}

AnimatedSprite::~AnimatedSprite() 
{
}

/// <summary>
/// @brief Returns the m_clock of the animatedSprite.
/// 
/// </summary>
const sf::Clock& AnimatedSprite::getClock() 
{
	return m_clock;
}

/// <summary>
/// @brief Return the m_time of the animatedSprite.
/// 
/// </summary>
const sf::Time& AnimatedSprite::getTime()
{
	return m_time;
}

/// <summary>
/// @brief Returns the current frame of the animatedSprite.
/// 
/// </summary>
const IntRect AnimatedSprite::getCurrentFrame() 
{
	return m_currentFrame;
}

/// <summary>
/// @brief Checks if the time elapsed since last update is greater than the time needed.
/// If yes we update the current frame that we are displaying.
/// 
/// </summary>
void AnimatedSprite::update()
{
	if (m_clock.getElapsedTime() > m_time) 
	{
		if (m_currentFrameCol < 5)
		{
			m_currentFrameCol++;
		}
		else
		{
			m_currentFrameCol = 0;
		}
		setCurrentFrame();
		m_clock.restart();
	}
}

/// <summary>
/// @brief Set the row we want tomove are animation on.
/// 
/// </summary>
void AnimatedSprite::setFrameRow(int t_newFrameRow)
{
	m_currentFrameRow = t_newFrameRow;
}

/// <summary>
/// @brief Sets the current frame that is being displayed.
/// 
/// </summary>
void AnimatedSprite::setCurrentFrame()
{
	m_currentFrame = IntRect(3 + m_currentFrameCol * 85, 3 + m_currentFrameRow * 85, 85, 85);
}

