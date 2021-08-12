#include "Quicksort.h"
#include "Informacoes.h"
#include "OrdenacaoControl.h"

Quicksort::Quicksort(bool primeira)
{
	this->primeira = primeira;
}

Quicksort::~Quicksort()
{
}

void Quicksort::OrdenaQuicksort(Informacoes Informacoes[], int n)
{
	Ordena(0, n - 1, Informacoes);
}

void Quicksort::Ordena(int esq, int dir, Informacoes informacoes[])
{
	int i, j;
	Particiona(esq, dir, &i, &j, informacoes);
	if (esq < j) {
		Ordena(esq, j, informacoes);
	}
	if (i < dir) {
		Ordena(i, dir, informacoes);
	}
}

void Quicksort::Particiona(int inicio, int fim, int* i, int* j, Informacoes informacoes[])
{
	Informacoes pivo, w;
	*i = inicio; *j = fim;

	pivo = informacoes[(*i + *j) / 2];

	do {
		while (OrdenacaoControl().VemAntes(informacoes[*i].GetString(this->primeira), pivo.GetString(this->primeira))) (*i)++;
		while (OrdenacaoControl().VemAntes(pivo.GetString(this->primeira), informacoes[*j].GetString(this->primeira))) (*j)--;
		if (*i <= *j) {
			w = informacoes[*i]; informacoes[*i] = informacoes[*j]; informacoes[*j] = w;
			(*i)++;
			(*j)--;
		}
	} while (*i <= *j);
}