#include "Mergesort.h"
#include "OrdenacaoControl.h"

Mergesort::Mergesort()
{
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
    int i = comeco, j = meio + 1, k = 0, tam = fim - comeco + 1;
    Informacoes* auxiliar = new Informacoes[tam]();;

    while (i <= meio && j <= fim) {
        if (OrdenacaoControl().VemAntes(informacoes[i].GetNome(), informacoes[j].GetNome())) {
            auxiliar[k] = informacoes[i];
            i++;
        }
        else {
            auxiliar[k] = informacoes[j];
            j++;
        }
        k++;
    }

    while (i <= meio) {
        auxiliar[k] = informacoes[i];
        k++;
        i++;
    }

    while (j <= fim) {
        auxiliar[k] = informacoes[j];
        k++;
        j++;
    }

    for (k = comeco; k <= fim; k++) {
        informacoes[k] = auxiliar[k - comeco];
    }

    delete[] auxiliar;
}
