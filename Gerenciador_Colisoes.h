#pragma once
#include <stdafx.h>
#include "Jogador.h"
#include "Inimigo.h"
#include "Obstaculo.h"

class Gerenciador_Colisoes{
private:
    vector <Inimigo*> LIs;
    list <Obstaculo*> LOs;
    Jogador *player;
public:
    Gerenciador_Colisoes();
    ~Gerenciador_Colisoes();
};