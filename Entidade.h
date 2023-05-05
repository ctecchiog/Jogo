#pragma once
#include <stdafx.h>
#include "Ente.h"

class Entidade : public Ente {
protected:
    int x;
    int y;
public:
    Entidade();
    ~Entidade();
    virtual void executar();
};
