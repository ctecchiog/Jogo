#pragma once
#include <stdafx.h>
#include "Ente.h"
#include "Jogador.h"
#include "Obst_Facil.h"
#include "ListaEntidades.h"

class Fase : public Ente {
private:
    Obst_Facil obst1;
    ListaEntidades listaEnt;
    Gerenciador_Colisoes *gerCol;
public:
    Fase();
    ~Fase();
    ListaEntidades* getListaEnt();
    virtual void executar();
    void gerenciar_colisoes();
    void criarInimMedios();
    void:criarObstMedios();
};
