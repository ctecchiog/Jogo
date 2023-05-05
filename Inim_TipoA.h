#pragma once
#include <stdafx.h>
#include "Inimigo.h"
#include "Projetil.h"

class Inim_TipoA: public Inimigo{
private:
    int id;
    int x;
    int y;
    bool hit;
    Projetil *proj;
public:
    Inim_TipoA();
    ~Inim_TipoA();
    bool lancaProjetil(Projetil *pP);
    int getX();
    int getY();
};