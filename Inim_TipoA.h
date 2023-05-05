#pragma once
#include <stdafx.h>
#include "Inimigo.h"
#include "Projetil.h"

class Inim_TipoA: public Inimigo{
private:
    int id;
    bool hit;
    Projetil *proj;
public:
    Inim_TipoA();
    ~Inim_TipoA();
    bool lancaProjetil(Projetil *pP);
};