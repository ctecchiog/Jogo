#pragma once
#include <stdafx.h>
#include "Inimigo.h"

class Inim_Facil: public Inimigo{
private:
    
public:
    Inim_Facil();
    ~Inim_Facil();
    int getID();
    int getX();
    int getY();
    int getVidas();
};
