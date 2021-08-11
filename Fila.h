#pragma once
#include "TipoCelula.h"
class Fila
{
private:
	int tamanho;
	TipoCelula* frente;
	TipoCelula* tras;
public:
	Fila();
	~Fila();
	int GetTamanho();
	bool Vazia();
	void Enfileira(TipoCelula tipoCelula);
	TipoCelula Desenfilera();
	void Limpa();
};

