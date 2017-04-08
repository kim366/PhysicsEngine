#include <const.hpp>
#include <Ball.hpp>
#include <SFML/Window.hpp>

int main()
{

	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	sf::RenderWindow window{{cst::window_size.x, cst::window_size.y}, "SFML Physics", sf::Style::Default, settings};
	//window.setFramerateLimit(144);
	Ball ball;

	sf::Clock clock;
	while (true)
	{
		sf::Time delta_time = clock.restart();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
				return 0;
		}

		ball.update(delta_time.asSeconds());
		ball.print();

		window.clear();
		window.draw(ball);
		window.display();
	}

	return 0;
}