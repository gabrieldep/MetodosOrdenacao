#include "Mergesort.h"
#include "OrdenacaoControl.h"

Mergesort::Mergesort(bool primeira)
{
	this->Primeira = primeira;
}

Mergesort::~Mergesort()
{
}

Informacoes* Mergesort::Ordena(int esq, int dir, Informacoes informacoes[])
{
	int meio;

	if (esq < dir) {
		meio = (esq + dir) / 2;
		informacoes = Merge(esq, dir, Ordena(esq, meio, informacoes), Ordena(meio + 1, dir, informacoes));
	}
	return informacoes;
}

Informacoes* Mergesort::Merge(int tamanhoEsq, int tamanhoDir, Informacoes informacoesEsq[], Informacoes informacoesDir[])
{
	Informacoes* result = new Informacoes[tamanhoDir + tamanhoEsq]();
	int i = 0, j = 0, k = 0;

	while (i < tamanhoEsq && j < tamanhoDir) {
		if (OrdenacaoControl().VemAntes(informacoesEsq[i].GetString(this->Primeira), informacoesDir[j].GetString(this->Primeira))) {
			result[k] = informacoesEsq[i];
			i++;
		}
		else {
			result[k] = informacoesDir[j];
			j++;
		}
		k++;
	}

	if (k < tamanhoEsq + tamanhoDir) {
		for (; i < tamanhoEsq; i++) {
			result[k] = informacoesEsq[i];
			k++;
		}
		for (; j < tamanhoDir; j++) {
			result[k] = informacoesDir[j];
			k++;
		}
	}
	return result;
}
