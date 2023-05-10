#pragma once
#include <stdafx.h>
#include "Personagem.h"

class Jogador: public Personagem{
private:
    int id;
    int x;
    int y;
    int num_vidas;
    int pontuacao;
public:
    Jogador();
    ~Jogador();
    int getID();
    int getX();
    int getY();
    int getVidas();
    int getPont();
    void mover();
};