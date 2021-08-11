#pragma once
#include "Informacoes.h"
class Fila
{
private:
	int tamanho;
	Informacoes* frente;
	Informacoes* tras;
public:
	Fila();
	~Fila();
	int GetTamanho();
	bool Vazia();
	void Enfileira(Informacoes tipoCelula);
	Informacoes Desenfilera();
	void Limpa();
};

