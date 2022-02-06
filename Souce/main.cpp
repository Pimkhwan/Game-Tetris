#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>

#include "Global.hpp"

int main()
{   
	//Window
	sf::RenderWindow window(sf::VideoMode(2 * CELL_SIZE * COLUMNS * SCREEN_RESIZE, CELL_SIZE * ROWS * SCREEN_RESIZE), "Tetris", sf::Style::Close);
	//Resizing the window
	window.setView(sf::View(sf::FloatRect(0, 0, 2 * CELL_SIZE * COLUMNS, CELL_SIZE * ROWS)));

	sf::Font font;
	if (!font.loadFromFile("font/font.ttf"))
		printf("error");
		
	sf::Text text("Play Game", font);

	//text.setFont(font);
	//text.setString("Play Game!");
	text.setCharacterSize(1000);
	text.setFillColor(sf::Color::Red);
	text.setPosition(250, 0);
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(text);
		window.display();
	}
	return 0;
}