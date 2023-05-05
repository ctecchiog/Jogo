#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Personagem : public Entidade {
private:
    int id;
    int x;
    int y;
protected:
    int num_vidas;
public:
    Personagem();
    ~Personagem();
    virtual void executar();
};
