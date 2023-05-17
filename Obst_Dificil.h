#pragma once
#include <stdafx.h>
#include "Obstaculo.h"

class Obst_Dificil : public Obstaculo {
private:

public:
    Obst_Dificil();
    ~Obst_Dificil();
    void executar();
    int getID();
    int getX();
    int getY();
};
