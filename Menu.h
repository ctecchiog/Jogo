#pragma once
#include <stdafx.h>
#include "Ente.h"
#include "Ranking.h"

class Menu: public Ente{
private:
    int id;
    Ranking* ranking;
public:
    Menu();
    ~Menu();
    void executar();
};