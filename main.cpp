#include <iostream>
#include "Informacoes.h"
#include "Fila.h"
using namespace std;
int main(int argc, char* argv[])
{
	int entrada = 200000;
	Informacoes* informacoes = new Informacoes[entrada]();
	Informacoes* info;
	char Linha[100];
	char* result;
	FILE* arquivo = fopen("C:/Users/Gabriel/Documents/homologacao.txt", "rt");
	int aux = 0;
	while (!feof(arquivo))
	{
		result = fgets(Linha, 100, arquivo);
		if (result == NULL)break;
		string s = result;
		string nome;
		string dados;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				nome = s.substr(0, i);
				dados = s.substr(i + 1, s.size());
				break;
			}
		}

		informacoes[aux].SetPrimeiraString(nome);
		informacoes[aux].SetSegundaString(dados);
		aux++;
	}

	fclose(arquivo);

	return 0;
}