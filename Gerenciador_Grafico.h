#pragma once
#include <stdafx.h>
#include "Ente.h"

class Gerenciador_Grafico{
private:
    RenderWindow *window;
public:
    Gerenciador_Grafico();
    ~Gerenciador_Grafico();
    void imprimirSe(Ente *pE);
    RenderWindow getWindow();
    const bool verificaJanelaAberta();
    void limpaJanela();
    void fechaJanela();
};