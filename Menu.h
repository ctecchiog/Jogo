#pragma once
#include <stdafx.h>
#include "Ente.h"
#include "Ranking.h"

class Menu: public Ente{
private:
    Ranking* ranking;
public:
    Menu();
    ~Menu();
    int getID();
    void executar();
};