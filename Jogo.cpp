#include "Jogo.h"

Jogo::Jogo(): window(sf::VideoMode(400, 400), "Jogo"), shape(sf::Vector2f(100.f, 100.f))
{
    player1.setWindow(&window);
    player2.setWindow(&window);
    shape.setFillColor(sf::Color:Green);
    inicializar();
}

Jogo::~Jogo()
{

}

void Jogo::inicializar()
{
    while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			shape.move(sf::Vector2f(0.1f, 0.1f));
		}

		player1.mover();
        player2.mover();
        window.clear();
		player1.draw();
        player2.draw();        
		window.display();
	}
}