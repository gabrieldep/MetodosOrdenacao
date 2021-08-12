#include "Mergesort.h"
#include "OrdenacaoControl.h"

Mergesort::Mergesort(bool primeira)
{
	this->Primeira = primeira;
}

Mergesort::~Mergesort()
{
}

void Mergesort::Ordena(int esq, int dir, Informacoes informacoes[])
{
	int meio = 0;
	if (esq < dir) {
		meio = (esq + dir) / 2;
        Ordena(esq, meio, informacoes);
        Ordena(meio + 1, dir, informacoes);
        Merge(esq, meio, dir, informacoes);
	}
}

void Mergesort::Merge(int comeco, int meio, int fim, Informacoes informacoes[])
{
    int esquerda = comeco, direita = meio + 1, k = 0, tam = fim - comeco + 1;
    Informacoes* auxiliar = new Informacoes[tam]();;

    while (esquerda <= meio && direita <= fim) {
        if (OrdenacaoControl().VemAntes(informacoes[esquerda].GetString(Primeira), informacoes[direita].GetString(Primeira))) {
            auxiliar[k] = informacoes[esquerda];
            esquerda++;
        }
        else {
            auxiliar[k] = informacoes[direita];
            direita++;
        }
        k++;
    }

    while (esquerda <= meio) {
        auxiliar[k] = informacoes[esquerda];
        k++;
        esquerda++;
    }

    while (direita <= fim) {
        auxiliar[k] = informacoes[direita];
        k++;
        direita++;
    }

    for (k = comeco; k <= fim; k++) {
        informacoes[k] = auxiliar[k - comeco];
    }

    delete[] auxiliar;
}
