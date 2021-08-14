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
	FILE* arquivo = fopen("C:/Users/Gabriel/Documents/teste1000.txt", "rt");
	int aux = 0;
	while (!feof(arquivo))
	{
		result = fgets(Linha, 100, arquivo);
		if (result == NULL)break;
		string s = result;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				(*informacoes)[aux].SetPrimeiraString(s.substr(0, i));
				(*informacoes)[aux].SetSegundaString(s.substr(i + 1, s.size()));
				break;
			}
		}
		aux++;
	}
	fclose(arquivo);
}

int main(int argc, char* argv[])
{
	int entrada = 7;
	Informacoes* informacoes = new Informacoes[entrada]();

	PreencheVetor(&informacoes, &argv[1]);

	Heapsort(true).Constroi(informacoes, entrada);

	for (int i = 0; i < entrada; i++) {
		cout << informacoes[i].GetPrimeiraString() << endl;
	}
	return 0;
}