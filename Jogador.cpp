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

}