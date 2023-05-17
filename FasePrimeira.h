#pragma once
#include <stdafx.h>
#include "Fase.h"
#include "Inim_Facil.h"

class FasePrimeira: public Fase{
private:
    Inim_Facil *inim;
public:
    FasePrimeira();
    ~FasePrimeira();
    void executar();
    void criarInimFaceis();
    void criarObstDificeis();
};
