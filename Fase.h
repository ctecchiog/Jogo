#pragma once
#include <stdafx.h>
#include "Ente.h"
#include "ListaEntidades.h"

class Fase : public Ente {
protected:
    int id;
    ListaEntidades listaEnt;
public:
    Fase();
    ~Fase();
    virtual void executar();
    void gerenciar_colisoes();
};
