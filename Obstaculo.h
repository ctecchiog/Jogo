#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Obstaculo : public Entidade {
private:
    int id;
    int x;
    int y;
public:
    Obstaculo();
    ~Obstaculo();
    virtual void executar();
};
