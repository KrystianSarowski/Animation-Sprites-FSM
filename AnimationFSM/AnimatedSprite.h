#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SFML\Graphics\Sprite.hpp>
#include <SFML\System\Clock.hpp>
#include <vector>
#include <Debug.h>
// @Author Krystian Sarowski

using namespace std;
using namespace sf;

class AnimatedSprite : public Sprite 
{
public:
	AnimatedSprite();
	AnimatedSprite(const Texture&);
	~AnimatedSprite();

	const Clock& getClock();
	const Time& getTime();
	const IntRect getCurrentFrame();
	void update();

	void setFrameRow(int t_newFrameRow);
	
private:

	Clock m_clock;				//Clock used to mesure the time that has passed.
	Time m_time;				//The time that needs to pass before we change frame again.
	IntRect m_currentFrame;		//The current frame we are displaying from the spirtesheet.

	int m_currentFrameRow;		//The current row of the frame we are displaying.
	int m_currentFrameCol;		//The current column of the frame we are displaying.

	void setCurrentFrame();
};

#endif // !ANIMATED_SPRITE_H
