#pragma once
#include <stdafx.h>
#include "Fase.h"
#include "Inim_Dificil.h"

class FaseSegunda: public Fase{
private:
    int id;
    Inim_Dificil *inim;
public:
    FaseSegunda();
    ~FaseSegunda();
    void executar();
    void criarInimDificeis();
    void criarObstFaceis();
};
