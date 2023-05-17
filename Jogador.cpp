#include "Jogador.h"

Jogador::Jogador(): pontuacao(0)
{

}

Jogador::~Jogador()
{

}

int Jogador::getID()
{
    return this->id;
}
int Jogador::getX()
{
    return this->x;
}
int Jogador::getY()
{
    return this->y;
}

int Jogador::getVidas()
{
    return this->num_vidas;
}

int Jogador::getPont()
{
    return pontuacao;
}

void Jogador::mover()
{
    if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A)))
    {
        // move left...
    }
    else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::S)))
    {
        // move right...
    }
    else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::W)))
    {
        // move up...
    }
    else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)))
    {
        // move down...
    }
}
