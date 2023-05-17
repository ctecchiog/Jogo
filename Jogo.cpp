#include "Jogo.h"

Jogo::Jogo()
{
    
}

Jogo::~Jogo()
{

}

void Jogo::inicializar()
{
    
}

static Jogo* Jogo:: getInstance()
{
    if(jogo == NULL)
        jogo = new Jogo();
    return jogo;
}

