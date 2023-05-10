#pragma once
#include <stdafx.h>
#include "Inimigo.h"
#include "Projetil.h"

class Inim_TipoA: public Inimigo{
private:
    int id;
    int x;
    int y;
    int num_vidas;
    bool hit;
    Projetil *proj;
    Jogador* player;
public:
    Inim_TipoA();
    ~Inim_TipoA();
    bool lancaProjetil(Projetil *pP, Jogador *pJ);
    int getID();
    int getX();
    int getY();
    int getVidas();
};