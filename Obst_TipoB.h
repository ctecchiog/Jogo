#pragma once
#include <stdafx.h>
#include "Obstaculo.h"

class Obst_TipoB : public Obstaculo {
private:
    int id;
public:
    Obst_TipoB();
    ~Obst_TipoB();
    int getX();
    int getY();
};
