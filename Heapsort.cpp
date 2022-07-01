#include "Heapsort.h"
#include "Informacoes.h"
#include "OrdenacaoControl.h"
#include <iostream>

Heapsort::Heapsort()
{
}

Heapsort::~Heapsort()
{
}

/// <summary>
/// Constroi o heap e reordena um array de Informacoes.
/// </summary>
/// <param name="informacoes">Array a ser ordenado</param>
/// <param name="n">Tamanho do array</param>
void Heapsort::Ordena(Informacoes informacoes[], int n)
{
	Constroi(informacoes, n);
	Informacoes* auxiliar = new Informacoes[n]();
	for (int i = n; i > 0; i--) 
		auxiliar[i - 1] = RetiraMaximo(i, informacoes);
	for (int i = 0; i < n; i++)
		informacoes[i] = auxiliar[i];
}

/// <summary>
/// Método que constroi um Heap a partir de um array
/// </summary>
/// <param name="informacoes">Array a ser ordenado</param>
/// <param name="n">Tamanho do array</param>
void Heapsort::Constroi(Informacoes informacoes[], int n)
{
	int esq = (n / 2) + 1;
	while (esq > 1) {
		esq--;
		Refaz(esq, n, informacoes);
	}
}

/// <summary>
/// Reorganiza o Heap a medida que el vai sendo construido
/// </summary>
/// <param name="esq">Indice mais a esquerda a ser reconstruido</param>
/// <param name="dir">Indice mais a direita a ser reconstruido</param>
/// <param name="informacoes">Array com os dados do Heap</param>
void Heapsort::Refaz(int esq, int dir, Informacoes informacoes[])
{
	int i = esq, j = esq * 2;
	Informacoes info = informacoes[i - 1];

	while (j <= dir) {
		if (j < dir) {
			if (informacoes[j - 1].GetDadosInt() < informacoes[j].GetDadosInt())
				j++;
		}
		if (informacoes[j - 1].GetDadosInt() <= info.GetDadosInt())
			break;
		informacoes[i - 1] = informacoes[j - 1];
		i = j;
		j = i * 2;
	}
	informacoes[i - 1] = info;
}

/// <summary>
/// Retira o elemento de maior prioridade do Heap.
/// </summary>
/// <param name="n">Tamanho do array</param>
/// <param name="informacoes">Array com as informacoes</param>
/// <returns></returns>
Informacoes Heapsort::RetiraMaximo(int n, Informacoes informacoes[])
{
	Informacoes max;
	max = informacoes[0];
	informacoes[0] = informacoes[n - 1];
	n--;
	Refaz(1, n, informacoes);
	return max;
}
