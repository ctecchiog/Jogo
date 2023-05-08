#include "Fase.h"

Fase::Fase(Jogador *player)
{
    this->player = player;
    listaEnt = new ListaEntidades;
    inicializaElementos();
}

Fase::~Fase()
{
}

ListaEntidades* Fase::getListaEnt()
{
    return listaEnt;
}

void Fase::executar()
{
}

void Fase::gerenciar_colisoes()
{
}

void Fase::inicializaElementos()
{
    listaEnt.push(player);
    listaEnt.push(obst);
}