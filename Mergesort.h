#pragma once
#include "Informacoes.h"
class Mergesort
{
	public:
		Mergesort(bool primeira);
		~Mergesort();
		Informacoes* Ordena(int esq, int dir, Informacoes informacoes[]);
		Informacoes* Merge(int esq, int dir, Informacoes informacoesEsq[], Informacoes informacoesDir[]);
	private:
		bool Primeira;
};

