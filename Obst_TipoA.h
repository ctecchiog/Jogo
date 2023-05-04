#pragma once
#include <stdafx.h>
#include "Obstaculo.h"

class Obst_TipoA : public Obstaculo {
private:
    int id;
    int x;
    int y;
public:
    Obst_TipoA();
    ~Obst_TipoA();
    void executar();
}

