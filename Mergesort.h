#pragma once
#include "Informacoes.h"
class Mergesort
{
	public:
		Mergesort();
		~Mergesort();
		void Ordena(Informacoes informacoes[], int n);
		void OrdenaMergesort(int esq, int dir, Informacoes informacoes[]);
		void Merge(int esq, int meio, int dir, Informacoes informacoes[]);
};

