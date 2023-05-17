#pragma once
#include <stdafx.h>
#include "Personagem.h"

class Inimigo: public Personagem{
protected:
    int nivel_maldade;
public:
    Inimigo();
    ~Inimigo();
    virtual void executar();
};
