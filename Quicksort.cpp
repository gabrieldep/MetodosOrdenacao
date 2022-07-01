#include "Quicksort.h"
#include "Informacoes.h"
#include "OrdenacaoControl.h"

Quicksort::Quicksort()
{
}

Quicksort::~Quicksort()
{
}

/// <summary>
/// 
/// </summary>
/// <param name="informacoes">Array a ser ordenado</param>
/// <param name="n">Tamanho do array</param>
void Quicksort::Ordena(Informacoes Informacoes[], int n)
{
	OrdenaQuicksort(0, n - 1, Informacoes);
}

/// <summary>
/// Método particiona um array e ordena suas metades
/// </summary>
/// <param name="esq">Indice da chave inicial do subvetor</param>
/// <param name="dir">Indice da chave final do subvetor</param>
/// <param name="informacoes">Array com as informacoes</param>
void Quicksort::OrdenaQuicksort(int esq, int dir, Informacoes informacoes[])
{
	int i, j;
	Particiona(esq, dir, &i, &j, informacoes);
	if (esq < j)
		OrdenaQuicksort(esq, j, informacoes);
	if (i < dir)
		OrdenaQuicksort(i, dir, informacoes);
}

/// <summary>
/// Particiona um vetor em dois e o divide em dois de acordo com o valor do pivô.
/// </summary>
/// <param name="inicio">Indice da chave inicial do subvetor</param>
/// <param name="fim">Indice da chave final do subvetor</param>
/// <param name="i">Valor passado como referência para definir a chave inicial</param>
/// <param name="j">Valor passado como referência para definir a chave final</param>
/// <param name="informacoes">Array com as informacoes</param>
void Quicksort::Particiona(int inicio, int fim, int* i, int* j, Informacoes informacoes[])
{
	Informacoes pivo, w;
	*i = inicio; *j = fim;
	pivo = informacoes[(*i + *j) / 2];

	do {
		while (OrdenacaoControl().VemAntes(informacoes[*i].GetNome(), pivo.GetNome()))
			(*i)++;

		while (OrdenacaoControl().VemAntes(pivo.GetNome(), informacoes[*j].GetNome()))
			(*j)--;

		if (*i <= *j) {
			w = informacoes[*i];
			informacoes[*i] = informacoes[*j];
			informacoes[*j] = w;
			(*i)++;
			(*j)--;
		}
	} while (*i <= *j);
}