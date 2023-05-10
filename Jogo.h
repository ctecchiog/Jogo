#pragma once
#include <stdafx.h>
#include "Menu.h"
#include "FasePrimeira.h"
#include "FaseSegunda.h"
#include "Gerenciador_Grafico.h"
#include "Jogador.h"

class Jogo {
private:
    Jogador player1;
    Jogador player2;
    FasePrimeira phase1;
    FaseSegunda phase2;
    Menu menu;
    Gerenciador_Grafico gerGraf;
    
public:
    Jogo();
    ~Jogo();
    void inicializar();
};
