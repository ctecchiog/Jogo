#pragma once
#include <stdafx.h>
#include "Ente.h"
#include "Jogador.h"
#include "Obst_TipoA.h"
#include "ListaEntidades.h"

class Fase : public Ente {
private:
    Jogador player;
    Obst_TipoA obst;
    ListaEntidades listaEnt;

public:
    Fase(Jogador *player);
    ~Fase();
    ListaEntidades* getListaEnt();
    virtual void executar();
    void gerenciar_colisoes();
    void inicializaElementos();
};
