#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Obstaculo : public Entidade {
public:
    Obstaculo();
    ~Obstaculo();
    void executar();
    int getX();
    int getY();
};
