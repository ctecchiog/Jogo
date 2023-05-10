#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Projetil : public Entidade {
private:

public:
    Projetil();
    ~Projetil();
    void executar();
    int getID();
    int getX();
    int getY();
};
