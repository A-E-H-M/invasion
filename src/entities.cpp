
#include <iostream>
#include <string>
#include <vector>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class ETexture {
	public:
		sf::Texture eTexture;

		//ETexture(const std::string& filename) :  { [] (eTexture.loadFromFile(filename)) };
};

class ESprite {
	public:
		sf::Sprite eSprite;
		int eSpriteScale {0};

		ESprite(const ETexture& eSpriteTexture, float scale) : eSpriteScale(scale) {
			eSprite.setTexture(eSpriteTexture.eTexture);
			eSprite.scale(eSpriteScale, eSpriteScale);
		};
};

	sprite.setOrigin((textureSize.x/2)*spriteScale, (textureSize.y/2)*spriteScale); // Like setting the centroid for the sprite
	sprite.setPosition((wWidth/2), (wHeight-textureSize.y*spriteScale));		// Setting the position based on screen

}
