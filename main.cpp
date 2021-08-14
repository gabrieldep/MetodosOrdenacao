#include <iostream>
#include "Informacoes.h"
#include "Quicksort.h"
#include "Mergesort.h"
#include "Heapsort.h"
using namespace std;

void PreencheVetor(Informacoes* informacoes[], char* caminho[]) {
	char* result;
	char Linha[100];
	//*caminho = "C:/Users/Gabriel/Documents/homologacao.txt";
	FILE* arquivo = fopen("C:/Users/Gabriel/Documents/homologacao.txt", "rt");
	int aux = 0;
	while (!feof(arquivo))
	{
		result = fgets(Linha, 100, arquivo);
		if (result == NULL)break;
		string s = result;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				(*informacoes)[aux].SetNome(s.substr(0, i));
				(*informacoes)[aux].SetDados(s.substr(i + 1, s.size()));
				break;
			}
		}
		aux++;
	}
	fclose(arquivo);
}

int main(int argc, char* argv[])
{
	int entrada = 200000;
	Informacoes* informacoes = new Informacoes[entrada]();

	PreencheVetor(&informacoes, &argv[1]);

	Heapsort().Ordena(informacoes, entrada);

	for (int i = 0; i < entrada; i++) {
		cout << informacoes[i].GetDados() << endl;
	}
	return 0;
}