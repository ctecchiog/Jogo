#pragma once
#include <stdafx.h>
#include "Menu.h"
#include "FasePrimeira.h"
#include "FaseSegunda.h"

class Jogo {
private:
    Personagem player1;
    Personagem player2;
    Fase Primeira phase1;
    Fase Segunda phase2;
    Menu menu;
    Gerenciador_Grafico gerGraf;
    Gerenciador_Colisoes gerCol;

public:
    Jogo();
    ~Jogo();
    inicializar();
}
