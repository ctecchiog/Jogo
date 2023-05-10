#include "Inim_TipoA.h"

Inim_TipoA::Inim_TipoA()
{

}

Inim_TipoA::~Inim_TipoA()
{

}

void Inim_TipoA::lancaProjetil(Projetil *pP)
{

}

bool Inim_TipoA::acertou(Projetil *pP, Jogador *pJ, bool *hit)
{

}

int Inim_TipoA::getID()
{
    return this->id;
}

int Inim_TipoA::getX()
{
    return this->x;
}

int Inim_TipoA::getY()
{
    return this->y;
}

int Inim_TipoA::getVidas()
{
    return this->num_vidas;
}
