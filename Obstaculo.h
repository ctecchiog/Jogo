#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Obstaculo : public Entidade {
private:
    int x;
    int y;
public:
    Obstaculo();
    ~Obstaculo();
    void executar();
    int getX();
    int getY();
};
