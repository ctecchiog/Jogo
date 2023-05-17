#pragma once
#include <stdafx.h>
#include "Menu.h"
#include "FasePrimeira.h"
#include "FaseSegunda.h"
#include "Gerenciador_Grafico.h"
#include "Jogador.h"

class Jogo {
private:
    static Jogo* jogo;
    Jogador player1;
    Jogador player2;
    FasePrimeira phase1;
    FaseSegunda phase2;
    Menu menu;
    Gerenciador_Grafico gerGraf;
    Jogo ();
    
public:

    ~Jogo();
    void inicializar();
    static Jogo* getInstance();
};
