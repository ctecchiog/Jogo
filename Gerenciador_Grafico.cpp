#include "Gerenciador_Grafico.h"
#include <stdafx.h>

Gerenciador_Grafico::Gerenciador_Grafico()
{
    window = new RenderWindow(VideoMode(1400, 1000), "Jogo");
}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
    delete window;
}

void Gerenciador_Grafico::imprimirSe (Ente *pE)
{
    
}

RenderWindow Gerenciador_Grafico::getWindow()
{
    return window;
}

const bool Gerenciador_Grafico::verificaJanelaAberta() 
{
    return window->isOpen();
}

void Gerenciador_Grafico::limpaJanela() 
{
    window->clear();
}

void Gerenciador_Grafico::fechaJanela() 
{
    window->close();
}