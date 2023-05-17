#pragma once
#include <stdafx.h>
#include "Lista.h"
#include "Entidade.h"

class ListaEntidades{
private:
    Lista <Entidade> LE;
public:
    ListaEntidades();
    ~ListaEntidades();
    void incluir(Entidade *pE);
};
