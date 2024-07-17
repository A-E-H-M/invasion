
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

return 0;
}
