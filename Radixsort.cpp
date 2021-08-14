#include "Radixsort.h"
#include "OrdenacaoControl.h"
Radixsort::Radixsort()
{
}

Radixsort::~Radixsort()
{
}

void Radixsort::Ordena(Informacoes informacoes[], int n)
{
	OrdenaRadixsort(0, n - 1, 0, informacoes);
}

void Radixsort::OrdenaRadixsort(int esq, int dir, int indexBit, Informacoes informacoes[])
{
	int const maxBit = 7;

	Informacoes aux;
	int i = esq, j = dir, w = indexBit;
	if (indexBit > maxBit) {
		return;
	}

	do {
		while (informacoes[i].GetDados()[indexBit] == '0') {
			i++;
		}
		while (informacoes[j].GetDados()[indexBit] == '1') {
			j++;
		}

		if (i <= j) {
			aux = informacoes[i];
			informacoes[i] = informacoes[j];
			informacoes[j] = aux;
			(i)++;
			(j)--;
		}
	} while (i <= j);
}
