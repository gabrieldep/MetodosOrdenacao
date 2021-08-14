#pragma once
#include "Informacoes.h"
class Heapsort
{
	public:
		Heapsort(bool primeira);
		~Heapsort();

		void Constroi(Informacoes informacoes[], int n);
		void Refaz(int esq, int dir, Informacoes informacoes[]);

	private:
		bool Primeira;
};

