#pragma once
#include <stdafx.h>
#include "Entidade.h"

template <class TL>
class Lista{  
public:
    template <class TE>
    class Elemento{
        private:
            Elemento <TE> *pProx;
            TE *pinfo;
        public:
            Elemento ();
            ~Elemento();
    }

    private:
        Elemento <TL> *pPrimeiro;
        Elemento <TL> *pUltimo;
    
    public:
        Lista();
        ~Lista();
};