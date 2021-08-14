#pragma once
#include "Informacoes.h"
class Radixsort
{
	public:
		Radixsort();
		~Radixsort();

		void Ordena(Informacoes informacoes[], int n);
		void OrdenaRadixsort(Informacoes dados[], int tam, int place, int max);
		int PegaMax(Informacoes dados[], int n);
};

