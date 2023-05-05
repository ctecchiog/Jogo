#pragma once
#include <stdafx.h>
#include "Personagem.h"

class Inimigo: public Personagem{
private:
    int num_vidas;
public:
    Inimigo();
    ~Inimigo();
};