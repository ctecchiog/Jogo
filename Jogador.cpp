#include "Jogador.h"

Jogador::Jogador(): num_vidas(10), pontuacao(0)
{

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

int Jogador::getPont()
{
    return pontuacao;
}

void Jogador::mover()
{

}