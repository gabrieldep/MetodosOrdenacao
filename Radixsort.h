#pragma once
#include "Informacoes.h"
class Radixsort
{
	public:
		Radixsort();
		~Radixsort();

		void Ordena(Informacoes informacoes[], int n);
		void OrdenaRadixsort(int esq, int dir, int w, Informacoes informacoes[]);
};

