#pragma once

#include <string>

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

struct windowSettings {
	int wWidth {1280};
	int wHeight {920};
	int R {255};
	int G {255};
	int B {255};
	sf::VideoMode wDesktop = sf::VideoMode::getDesktopMode();
	std::string title = "Alien Invastion";
};
