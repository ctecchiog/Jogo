#pragma once
#include <stdafx.h>
#include "Fase.h"
#include "Inim_TipoB.h"

class FaseSegunda: public Fase{
private:
    int id;
    Inim_TipoB inimB;
public:
    FaseSegunda();
    ~FaseSegunda();
    void executar();
};