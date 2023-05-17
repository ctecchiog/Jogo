#include "Fase.h"

Fase::Fase()
{
    listaEnt = new ListaEntidades;
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

void Fase::criarInimMedios()
{
}

void Fase::criarObstMedios()
{
}
