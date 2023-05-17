#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Obstaculo : public Entidade {
protected:
    bool danoso;

public:
    Obstaculo();
    ~Obstaculo();
    virtual void executar() = 0;
};
