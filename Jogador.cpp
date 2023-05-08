#include "Jogador.h"

Jogador::Jogador()
{
    body.setFillColor(sf::Color::Magenta);
    body.setPosition(sf::Vector2f(200.f, 200.f));
}

Jogador::~Jogador()
{

}

int Jogador::getID()
{
    return id;
}
int Jogador::getX()
{
    return x;
}
int Jogador::getY()
{
    return y;
}

int Jogador::getVidas()
{
    return num_vidas;
}