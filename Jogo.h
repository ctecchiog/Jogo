#pragma once
#include <stdafx.h>
#include "Menu.h"
#include "FasePrimeira.h"
#include "FaseSegunda.h"
#include "Gerenciador_Grafico.h"
#include "Gerenciador_Colisoes.h"
#include "Personagem.h"

class Jogo {
private:
    Personagem player1;
    Personagem player2;
    FasePrimeira phase1;
    FaseSegunda phase2;
    Menu menu;
    Gerenciador_Grafico gerGraf;
    Gerenciador_Colisoes gerCol;

public:
    Jogo();
    ~Jogo();
    inicializar();
};
