#pragma once
#include <stdafx.h>
#include "Inimigo.h"
#include "Projetil.h"
#include "Jogador.h"

class Inim_TipoA: public Inimigo{
private:
    bool hit;
    Projetil *proj;
    Jogador *player;
public:
    Inim_TipoA();
    ~Inim_TipoA();
    void lancaProjetil(Projetil *pP);
    bool acertou(Projetil *pP, Jogador *pJ, bool *hit);
    int getID();
    int getX();
    int getY();
    int getVidas();
};