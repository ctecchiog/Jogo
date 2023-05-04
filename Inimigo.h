#pragma once
#include <stdafx.h>
#include "Personagem.h"

class Inimigo : public Personagem {
private:
	int id;
	int x;
	int y;
public:
	Inimigo();
	~Inimigo();
};