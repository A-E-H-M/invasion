#pragma once

#include <string>
#include <vector>

#include "window.h"

class Game {
	public:
		//Window
		windowSettings wWindow;
		sf::RenderWindow wGameWindow;
	
		//Texture
		sf::Texture mp_texture;

		void run();
};
