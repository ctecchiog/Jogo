#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Personagem : public Entidade {
private:
    int x;
    int y;
protected:
    int num_vidas;
public:
    Personagem();
    ~Personagem();
    void executar();
    int getX();
    int getY();
};
