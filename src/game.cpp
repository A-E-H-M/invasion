// Game

#include <string>
#include <vector>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "window.h"
#include "game.h"
//#include "components.h"

//Window
void Game::run () {
	wGameWindow.create(sf::VideoMode(wWindow.wWidth, wWindow.wHeight, wWindow.wDesktop.bitsPerPixel), wWindow.title);

	mp_texture.loadFromFile("cat.png");

	while (wGameWindow.isOpen()){
		sf::Event event;
		while(wGameWindow.pollEvent(event)){
			if (event.type == sf::Event::Closed)
				wGameWindow.close();
		}
		wGameWindow.display();
		wGameWindow.clear(sf::Color(wWindow.R, wWindow.G, wWindow.B, 255));
	}
}

