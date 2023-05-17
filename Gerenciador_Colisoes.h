#pragma once
#include <stdafx.h>
#include "Jogador.h"
#include "Inimigo.h"
#include "Obstaculo.h"

class Gerenciador_Colisoes{
private:
    static Gerenciador_Colisoes *gerCol;
    vector <Inimigo*> LIs;
    list <Obstaculo*> LOs;
    Jogador *player;
    static Gerenciador_Colisoes();
    
public:
    
    ~Gerenciador_Colisoes();
    static Gerenciador_Colisoes* getInstance();
    void incluirObstaculo(Obstaculo *pO);
};
