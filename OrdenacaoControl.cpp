#include "OrdenacaoControl.h"

bool OrdenacaoControl::VemAntes(std::string primeira, std::string segunda)
{
	int tamanho = primeira.size() > segunda.size() ?
		segunda.size() : primeira.size();

	for (int i = 0; i < tamanho; i++) {
		if (primeira[i] != segunda[i]) {
			return primeira[i] < segunda[i];
		}
	}
	return primeira.size() < segunda.size();
}

void OrdenacaoControl::Particiona(int inicio, int fim, std::string* i, std::string* j, Informacoes informacoes[])
{
}
