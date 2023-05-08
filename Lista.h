#pragma once
#include <stdafx.h>
#include "Entidade.h"
#include "Elemento.h"

template <class TL>
class Lista{  
private:
    Elemento <TL> *pPrimeiro;
    Elemento <TL> *pUltimo;
    int length;
    
public:
    Lista();
    ~Lista();
    int getLength()
    {
        return length;
    }
    TL* getInfo(int posicao)
    {
        Elemento <TL>* temp = pPrimeiro;
        if(pPrimeiro==0)
            return temp->getInfo();
        else{
            for (int i=0; i<posicao; i++)
            {
                temp = temp->getProx();
            }
            return temp->getInfo();
        }    
    }
    void push(TL* item)
    {
        if (pPrimeiro == NULL)
        {
            pPrimeiro = new Elemento<TL>;
            pPrimeiro = setInfo(item);
            pUltimo = pPrimeiro;
        }
        else
        {
            Elemento<TL> *temp = new Elemento <TL>;
            temp->setInfo(item);
            pUltimo->setProx(temp);
            pUltimo = temp;
        }
        length++;
    }
    void pop(TL *item)
    {
        Elemento<TL> *temp = pPrimeiro;
        Elemento<TL> *tempAnt = NULL;
        while (temp->getInfo != item)
        {
            tempAnt = temp;
            temp = temp->getProx();
        }
        if (temp ==p Primeiro)
            pPrimeiro = temp->getProx();
        else if (temp == pUltimo)
            tempAnt->setProx(NULL);
        else
            tempAnt->setProx(temp->getProx());
        delete temp;
        length--;
    }
};

template <class TL>
inline Lista<TL>::Lista()
{
    pPrimeiro = NULL;
    pUltimo = NULL;
    length = 0;
}

template <class TL>
inline Lista<TL>::~Lista()
{
    pPrimeiro = NULL;
    pUltimo = NULL;
}