#include "Radixsort.h"
#include "OrdenacaoControl.h"
#include <iostream>
Radixsort::Radixsort()
{
}

Radixsort::~Radixsort()
{
}

/// <summary>
/// 
/// </summary>
/// <param name="informacoes">Array a ser ordenado</param>
/// <param name="n">Tamanho do array</param>
void Radixsort::Ordena(Informacoes informacoes[], int n)
{
	int max = PegaMax(informacoes, n);
	for (int place = 1; max / place > 0; place *= 10)
		OrdenaRadixsort(informacoes, n, place, max);
}

/// <summary>
/// Pega o maior elemento do vetor
/// </summary>
/// <param name="dados"></param>
/// <param name="n"></param>
/// <returns></returns>
int Radixsort::PegaMax(Informacoes informacoes[], int n) {
	int max = informacoes[0].GetDadosInt();
	for (int i = 1; i < n; i++)
		if (informacoes[i].GetDadosInt() > max)
			max = informacoes[i].GetDadosInt();
	return max;
}

/// <summary>
/// Ordena o vetor a nivel de bit
/// </summary>
/// <param name="informacoes">Array com as informacoes a serem ordenadas</param>
/// <param name="tam">Tamanho do vetor</param>
/// <param name="place"></param>
/// <param name="max">Maior valor de vetor</param>
void Radixsort::OrdenaRadixsort(Informacoes informacoes[], int tam, int place, int max)
{
	Informacoes* resultado = new Informacoes[tam];
	int* contador = new int[max];

	for (int i = 0; i < max; ++i)
		contador[i] = 0;
	for (int i = 0; i < tam; i++)
		contador[(informacoes[i].GetDadosInt() / place) % 10]++;
	for (int i = 1; i < max; i++)
		contador[i] += contador[i - 1];
	for (int i = tam - 1; i >= 0; i--) {
		resultado[contador[(informacoes[i].GetDadosInt() / place) % 10] - 1] = informacoes[i];
		contador[(informacoes[i].GetDadosInt() / place) % 10]--;
	}
	for (int i = 0; i < tam; i++)
		informacoes[i] = resultado[i];
}

