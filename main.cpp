
#include <SFML/Graphics.hpp>
int main()
{
	sf::RenderWindow window(sf::VideoMode(2 * 8 * 10 * 4, 8 * 20 * 4), "Tetris");
	window.setView(sf::View(sf::FloatRect(0, 0, 2 * 8 * 10, 4 * 20)));
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.display();
	}
	return 0;
}