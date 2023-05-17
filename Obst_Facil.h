#pragma once
#include <stdafx.h>
#include "Obstaculo.h"

class Obst_Facil : public Obstaculo {
private:

public:
    Obst_Facil();
    ~Obst_Facil();
    void executar();
    int getID();
    int getX();
    int getY();
};

