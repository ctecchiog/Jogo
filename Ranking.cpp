#include "Ranking.h"

Ranking::Ranking()
{
	ranking = new Lista <Entidade>;
}

Ranking::~Ranking()
{

}

Jogador* Ranking::setJogador(Jogador *pJ)
{
	player = pJ;
}

void Ranking::organizar(Jogador *pJ)
{

}
