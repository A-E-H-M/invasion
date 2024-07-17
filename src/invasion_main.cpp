
#include <iostream>
#include <string>
#include <vector>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

int main(){
	
// Window settings
	sf::VideoMode desktop = sf::VideoMode::getDesktopMode();				// Get the current desktop video mode
	// Render window
	int wWidth {1280};
	int wHeight {920};
	sf::RenderWindow window(sf::VideoMode(wWidth, wHeight, desktop.bitsPerPixel), "Alien Invasion");
	window.setFramerateLimit(60);

	// Cat
	sf::Texture texture;
	texture.loadFromFile("cat.png");					
	sf::Vector2 textureSize = texture.getSize();								// Get the size of the texture in pixels
	
	sf::Sprite sprite;
	sprite.setTexture(texture);
	float spriteScale {.25};
	
	sprite.scale(spriteScale, spriteScale);										// Rescale the size to be less than the 
																				// original texture
	sprite.setOrigin((textureSize.x/2)*spriteScale, (textureSize.y/2)*spriteScale); // Like setting the centroid for the sprite
	sprite.setPosition((wWidth/2), (wHeight-textureSize.y*spriteScale));		// Setting the position based on screen

// Start game loop
	while (window.isOpen()){
		sf::Event event;
		// Start event handling
		while(window.pollEvent(event)){
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
				sprite.move(-5, 0);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
				sprite.move(5, 0);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
				window.close();
			}
			if (event.type == sf::Event::Closed)
				window.close();
		}; //End event handling
		// Start of rending sequence
		
		window.draw(sprite);
		window.display();

		window.clear(sf::Color(255, 255, 255, 255));						// Set the color of the window when cleared
	}

return 0;
}
