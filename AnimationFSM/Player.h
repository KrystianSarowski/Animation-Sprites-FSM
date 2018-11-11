#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <Animation.h>
#include <AnimatedSprite.h>
// @Author Krystian Sarowski

class Player
{
private:

	//The max time we will wait before we go back to idle.
	const Time m_IDLE_COOLDOWN{ sf::seconds(2.0f) };

	Clock m_clock;						//Clock used to measure the time that has passed.
	sf::Time m_timeBeforeIdle;			//Time left before we go back to idle.
	Animation m_animation;				//The FSM of the player class. Use to change state from one to the other.
	AnimatedSprite m_animated_sprite;	//The sprite animation for the player.

	Player();

public:
	Player(const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();
};

#endif // !PLAYER_H
