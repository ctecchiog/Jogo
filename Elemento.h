#pragma once
#include <stdafx.h>
template <class TE>
class Elemento{
 private:
    Elemento <TE> *pProx;
    TE *pinfo;
public:
    Elemento ();
    ~Elemento();
    void setProx(Elemento<TE> *pProx)
    {
        this->pProx = pProx;
    }
    void setInfo(TE *pinfo)
    {
        this->pinfo = pinfo;
    }
    Elemento<TE>* getProx()
    {
        return pProx;
    }
    TE* getInfo()
    {
        return pinfo;
    }
};

template <class TE>
inline Elemento<TE>::Elemento ()
{
    pProx = NULL;
    pinfo = NULL;
}

template <class TE>
inline Elemento<TE>::~Elemento()
{
    pProx = NULL;
    pinfo = NULL;
}
