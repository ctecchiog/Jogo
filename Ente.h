#pragma once
#include <stdafx.h>

class Ente {
protected:
    int id;
    static Gerenciador_Grafico *pGG;
    Figura *pFig;
public:
    Ente();
    ~Ente();
    virtual void executar() = 0;
    void desenhar();
};
