#include "Radixsort.h"
#include "OrdenacaoControl.h"
#include <iostream>
Radixsort::Radixsort()
{
}

Radixsort::~Radixsort()
{
}

void Radixsort::Ordena(Informacoes informacoes[], int n)
{
	int max = PegaMax(informacoes, n);
	for (int place = 1; max / place > 0; place *= 10)
		OrdenaRadixsort(informacoes, n, place, max);
}

int Radixsort::PegaMax(Informacoes dados[], int n) {
	int max = dados[0].GetDadosInt();
	for (int i = 1; i < n; i++)
		if (dados[i].GetDadosInt() > max)
			max = dados[i].GetDadosInt();
	return max;
}

void Radixsort::OrdenaRadixsort(Informacoes dados[], int tam, int place, int max)
{
	Informacoes* resultado = new Informacoes[tam];
	int* contador = new int[max];

	for (int i = 0; i < max; ++i) {
		contador[i] = 0;
	}
	for (int i = 0; i < tam; i++) {
		contador[(dados[i].GetDadosInt() / place) % 10]++;
	}
	for (int i = 1; i < max; i++) {
		contador[i] += contador[i - 1];
	}
	for (int i = tam - 1; i >= 0; i--) {
		resultado[contador[(dados[i].GetDadosInt() / place) % 10] - 1] = dados[i];
		contador[(dados[i].GetDadosInt() / place) % 10]--;
	}
	for (int i = 0; i < tam; i++) {
		dados[i] = resultado[i];
	}
}

