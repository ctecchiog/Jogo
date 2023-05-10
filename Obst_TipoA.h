#pragma once
#include <stdafx.h>
#include "Obstaculo.h"

class Obst_TipoA : public Obstaculo {
private:

public:
    Obst_TipoA();
    ~Obst_TipoA();
    int getID();
    int getX();
    int getY();
};

