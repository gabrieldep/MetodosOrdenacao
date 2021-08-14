#pragma once
#include <string>
#include "Informacoes.h"
class Quicksort
{
	public:
		Quicksort();
		~Quicksort();
		void Ordena(Informacoes informacoes[], int n);
		void OrdenaQuicksort(int esq, int dir, Informacoes informacoes[]);
		void Particiona(int inicio, int fim, int* i, int* j, Informacoes informacoes[]);
};