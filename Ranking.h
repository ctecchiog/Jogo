#pragma once
#include <stdafx.h>
#include <Jogador.h>

class Ranking {
private:
	list <Jogador*> ranking;
	Jogador* player;
public:
	Ranking();
	~Ranking();
	void organizar();
};