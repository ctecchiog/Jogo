#pragma once
#include <stdafx.h>
#include "Entidade.h"

class Personagem : public Entidade {
protected:
    int num_vidas;
public:
    Personagem();
    ~Personagem();
    virtual void executar();
};
