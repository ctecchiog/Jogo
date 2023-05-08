#pragma once
#include <stdafx.h>
#include "Ente.h"

class Entidade : public Ente {
protected:
    int x;
    int y;
    sf::RectangleShape body;
    sf::RenderWindow *window;
public:
    Entidade();
    ~Entidade();
    virtual void executar();
    void setWindow(sf::RenderWindow* window);
    void draw();
};
