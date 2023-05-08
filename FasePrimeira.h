#pragma once
#include <stdafx.h>
#include "Fase.h"

class FasePrimeira: public Fase{
private:
    int id;
    Inim_TipoA inim;
public:
    FasePrimeira();
    ~FasePrimeira();
};