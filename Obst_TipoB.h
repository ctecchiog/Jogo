#pragma once
#include <stdafx.h>
#include "Obstaculo.h"

class Obst_TipoB : public Obstaculo {
private:
    int id;
    int x;
    int y;
public:
    Obst_TipoB();
    ~Obst_TipoB();
    void executar();
}
