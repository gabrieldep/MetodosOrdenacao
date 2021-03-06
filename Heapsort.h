#pragma once
#include "Informacoes.h"
class Heapsort
{
	public:
		Heapsort();
		~Heapsort();

		void Ordena(Informacoes informacoes[], int n);
		void Constroi(Informacoes informacoes[], int n);
		void Refaz(int esq, int dir, Informacoes informacoes[]);
		Informacoes RetiraMaximo(int n, Informacoes informacoes[]);
};

