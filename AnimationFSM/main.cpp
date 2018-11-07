#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return 0;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);

	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (sf::Event::KeyPressed == event.type)
			{
				switch (event.key.code)
				{
				case sf::Keyboard::Escape:
					window.close();
					break;
				case sf::Keyboard::Left:
					input.setCurrent("Walking");
					break;
				case sf::Keyboard::Right:
					input.setCurrent("Walking");
					break;
				case sf::Keyboard::Up:
					input.setCurrent("Climbing");
					break;
				case sf::Keyboard::Down:
					input.setCurrent("Shoveling");
					break;
				case sf::Keyboard::Space:
					input.setCurrent("Jumping");
					break;
				case sf::Keyboard::Z:
					input.setCurrent("Swordsmanship");
					break;
				case sf::Keyboard::X:
					input.setCurrent("Hammering");
					break;
				default:
					break;
				}
			}
			else
			{
				input.setCurrent("Idle");
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return 1;
};