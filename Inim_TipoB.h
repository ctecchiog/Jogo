#pragma once
#include <stdafx.h>
#include "Inimigo.h"
#include "Projetil.h"

class Inim_TipoB: public Inimigo{
private:
    
public:
    Inim_TipoB();
    ~Inim_TipoB();
    int getID();
    int getX();
    int getY();
    int getVidas();
};