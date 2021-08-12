#pragma once
#include "Informacoes.h"
class Mergesort
{
	public:
		Mergesort(bool primeira);
		~Mergesort();
		void Ordena(int esq, int dir, Informacoes informacoes[]);
		void Merge(int esq, int meio, int dir, Informacoes informacoes[]);
	private:
		bool Primeira;
};

