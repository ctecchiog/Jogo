#pragma once
#include <stdafx.h>
#include "Menu.h"
#include "FasePrimeira.h"
#include "FaseSegunda.h"
#include "Gerenciador_Grafico.h"
#include "Gerenciador_Colisoes.h"
#include "Jogador.h"
#include <SFML/Graphics.hpp>

class Jogo {
private:
    Jogador player1;
    Jogador player2;
    FasePrimeira phase1;
    FaseSegunda phase2;
    Menu menu;
    Gerenciador_Grafico gerGraf;
    Gerenciador_Colisoes gerCol;
    
    sf::RenderWindow window;
    sf::RectangleShape shape;

public:
    Jogo();
    ~Jogo();
    void inicializar();
    void jogarSequencialmente();
    void jogarPrimeiraFase();
    void jogarSegundaFase();
    void Menu();
};
