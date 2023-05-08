#include "Entidade.h"

Entidade::Entidade()
{
}

Entidade::~Entidade()
{
}

void Entidade::executar()
{
}

void Entidade::setWindow (sf::RenderWindow* window)
{
    this->window = window;
}

void draw()
{
    window->draw(body);
}