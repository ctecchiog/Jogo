#pragma once
#include <stdafx.h>
#include "Obstaculo.h"

class Obst_TipoB : public Obstaculo {
private:

public:
    Obst_TipoB();
    ~Obst_TipoB();
    int getID();
    int getX();
    int getY();
};
