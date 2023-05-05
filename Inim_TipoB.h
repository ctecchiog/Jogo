#pragma once
#include <stdafx.h>
#include "Inimigo.h"
#include "Projetil.h"

class Inim_TipoB: public Inimigo{
private:
    int id;
    int x;
    int y;
public:
    Inim_TipoB();
    ~Inim_TipoB();
};