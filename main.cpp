#include <iostream>
#include "Informacoes.h"
#include "Quicksort.h"
#include "Mergesort.h"
#include "Heapsort.h"
#include "Radixsort.h"
using namespace std;

/// <summary>
/// Faz a leitura de um arquivo e preenche um array com os dados
/// </summary>
/// <param name="informacoes">Vetor passado por referência para ser preenchido</param>
/// <param name="caminho">Caminho do arquivo</param>
/// <param name="tamanho">Quantidade de linhas a serem lidas</param>
void PreencheVetor(Informacoes* informacoes[], const char caminho[], int tamanho) {
	char* result;
	char Linha[100];
	FILE* arquivo = fopen(caminho, "rt");
	int aux = 0;
	while (!feof(arquivo) && aux < tamanho)
	{
		result = fgets(Linha, 100, arquivo);
		if (result == NULL)break;
		string s = result;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				(*informacoes)[aux].SetNome(s.substr(0, i));
				(*informacoes)[aux].SetDados(s.substr(i + 1, s.size()));
				(*informacoes)[aux].SetDadosInt(stoi(s.substr(i + 1, s.size())));
				break;
			}
		}
		aux++;
	}
	fclose(arquivo);
}

int main(int argc, const char* argv[])
{
	int entrada = stoi(argv[3]);
	Informacoes* informacoes = new Informacoes[entrada]();
	PreencheVetor(&informacoes, argv[1], entrada);

	int configuracao = stoi(argv[2]);
	if (configuracao == 1) {
		Heapsort().Ordena(informacoes, entrada);
		Quicksort().Ordena(informacoes, entrada);
	}
	else if (configuracao == 2) {
		Radixsort().Ordena(informacoes, entrada);
		Quicksort().Ordena(informacoes, entrada);
	}
	else if (configuracao == 3) {
		Heapsort().Ordena(informacoes, entrada);
		Mergesort().Ordena(informacoes, entrada);
	}
	else if (configuracao == 4) {
		Radixsort().Ordena(informacoes, entrada);
		Mergesort().Ordena(informacoes, entrada);
	}

	for (int i = 0; i < entrada; i++) {
		cout << informacoes[i].GetNome() << " " << informacoes[i].GetDados();
	}

	return 0;
}