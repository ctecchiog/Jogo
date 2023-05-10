#pragma once
#include <stdafx.h>
#include "Ente.h"
#include "Jogador.h"
#include "Obst_TipoA.h"
#include "ListaEntidades.h"

class Fase : public Ente {
private:
    Obst_TipoA obst;
    ListaEntidades listaEnt;
    Gerenciador_Colisoes gerColisoes;

public:
    Fase();
    ~Fase();
    ListaEntidades* getListaEnt();
    virtual void executar();
    void gerenciar_colisoes();
};
