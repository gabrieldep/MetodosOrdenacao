#include "Heapsort.h"
#include "Informacoes.h"
#include "OrdenacaoControl.h"
#include <iostream>

Heapsort::Heapsort(bool primeira)
{
	this->Primeira = primeira;
}

Heapsort::~Heapsort()
{
}

void Heapsort::Ordena(Informacoes informacoes[], int n)
{
	Constroi(informacoes, n);

	Informacoes* auxiliar = new Informacoes[n]();
	for (int i = n; i > 0; i--) {
		auxiliar[i - 1] = RetiraMaximo(i, informacoes);
	}
	for (int i = 0; i < n; i++) {
		informacoes[i] = auxiliar[i];
	}
}

void Heapsort::Constroi(Informacoes informacoes[], int n)
{
	int esq;
	esq = (n / 2) + 1;

	while (esq > 1) {
		esq--;
		Refaz(esq, n, informacoes);
	}
}

void Heapsort::Refaz(int esq, int dir, Informacoes informacoes[])
{
	int i, j;
	Informacoes info;
	i = esq;
	j = i * 2;
	info = informacoes[i - 1];

	while (j <= dir) {
		if (j < dir) {
			if (OrdenacaoControl().VemAntes(informacoes[j - 1].GetString(this->Primeira), informacoes[j].GetString(this->Primeira))) {
				j++;
			}
		}
		if (OrdenacaoControl().VemAntes(informacoes[j - 1].GetString(this->Primeira), info.GetString(this->Primeira))
			|| informacoes[j - 1].GetString(this->Primeira) == info.GetString(this->Primeira)) {
			break;
		}
		informacoes[i - 1] = informacoes[j - 1];
		i = j;
		j = i * 2;
	}
	informacoes[i - 1] = info;
}

Informacoes Heapsort::RetiraMaximo(int n, Informacoes informacoes[])
{
	Informacoes max;
	max = informacoes[0];
	informacoes[0] = informacoes[n - 1];
	n--;
	Refaz(1, n, informacoes);
	return max;
}
