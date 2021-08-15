#include "Mergesort.h"
#include "OrdenacaoControl.h"

Mergesort::Mergesort()
{
}

Mergesort::~Mergesort()
{
}

/// <summary>
/// 
/// </summary>
/// <param name="informacoes">Array a ser ordenado</param>
/// <param name="n">Tamanho do array</param>
void Mergesort::Ordena(Informacoes informacoes[], int n)
{
    OrdenaMergesort(0, n - 1, informacoes);
}

/// <summary>
/// Método recursivo para ordenar o vetor
/// </summary>
/// <param name="esq">Indice inicial da partição a ser ordenada</param>
/// <param name="dir">Indice final da partição a ser ordenada</param>
/// <param name="informacoes">Array com os dados</param>
void Mergesort::OrdenaMergesort(int esq, int dir, Informacoes informacoes[])
{
    int meio = 0;
    if (esq < dir) {
        meio = (esq + dir) / 2;
        OrdenaMergesort(esq, meio, informacoes);
        OrdenaMergesort(meio + 1, dir, informacoes);
        Merge(esq, meio, dir, informacoes);
    }
}

/// <summary>
/// Junta os pequenos arrays ja ordenados.
/// </summary>
/// <param name="comeco">Inidice inicial</param>
/// <param name="meio">Indice do meio</param>
/// <param name="fim">Indice final</param>
/// <param name="informacoes">Array com as informacoes</param>
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
