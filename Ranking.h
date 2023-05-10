#pragma once
#include <stdafx.h>
#include "Jogador.h"
#include "Lista.h"

class Ranking {
private:
	Lista <Entidade> ranking;
	Jogador* player;
public:
	Ranking();
	~Ranking();
	Jogador* setJogador(Jogador *pJ);
	void organizar(Jogador *pJ);
};