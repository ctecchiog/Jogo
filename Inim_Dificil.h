#pragma once
#include <stdafx.h>
#include "Inimigo.h"
#include "Projetil.h"
#include "Jogador.h"

class Inim_Dificil: public Inimigo{
private:
    bool hit;
    Projetil *proj;
    Jogador *player;
public:
    Inim_Dificil();
    ~Inim_Dificil();
    void executar();
    void lancaProjetil(Projetil *pP);
    bool acertou(Projetil *pP, Jogador *pJ, bool *hit);
    int getID();
    int getX();
    int getY();
    int getVidas();
};
