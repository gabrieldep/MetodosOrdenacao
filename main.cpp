#include <iostream>
#include "Informacoes.h"
#include "Fila.h"

int main(int argc, char* argv[])
{
	Fila* servidor = new Fila();
	Informacoes* info;
	char Linha[100];
	char* result;
	FILE* arquivo = fopen("C:/Users/Gabriel/Documents/homologacao.txt", "rt");
	while (!feof(arquivo))
	{
		result = fgets(Linha, 100, arquivo);
		if (result == NULL)break;
		std::string s = result;
		std::string primeira = "";
		std::string segunda = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ') {
				primeira = s.substr(0, i);
				segunda = s.substr(i + 1, s.size());
				break;
			}
		}

		info = new Informacoes(primeira, segunda);
		servidor->Enfileira(*info);
	}
	fclose(arquivo);

	return 0;
}