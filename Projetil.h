#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Projetil : public Entidade {

private:
    int id;
    int x;
    int y;
public:
    Projetil(int xx=0, int yy=0);
    ~Projetil();
    void executar();
};
