#pragma once
#include <stdafx.h>
#include "Ente.h"
#include "Obst_TipoA.h"
#include "ListaEntidades.h"

class Fase : public Ente {
protected:
    int id;
    Obst_TipoA obst;
    ListaEntidades listaEnt;
public:
    Fase();
    ~Fase();
    virtual void executar();
    void gerenciar_colisoes();
};
