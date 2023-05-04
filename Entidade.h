#pragma once
#include <stdafx.h>
#include "Ente.h"

class Entidade : public Ente {
protected:
    int id;
    int x;
    int y;

public:
    Entidade();
    ~Entidade();
    int getX();
    int getY();
    virtual void executar();
}
