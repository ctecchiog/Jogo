#pragma once
#include "Personagem.h"

class Jogador: public Personagem{
private:
    int id;
    int num_vidas;
public:
    Jogador();
    ~Jogador();
    int getID();
    int getX();
    int getY();
    int getVidas();
};