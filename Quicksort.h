#pragma once
#include <string>
#include "Informacoes.h"
class Quicksort
{
	public:
		Quicksort(bool primeira);
		~Quicksort();
		void OrdenaQuicksort(Informacoes informacoes[], int n);
		void Ordena(int esq, int dir, Informacoes informacoes[]);
		void Particiona(int inicio, int fim, int* i, int* j, Informacoes informacoes[]);
	private:
		bool primeira;
};