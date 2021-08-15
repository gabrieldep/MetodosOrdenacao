#include "OrdenacaoControl.h"
#include <iostream>

OrdenacaoControl::OrdenacaoControl()
{
}

OrdenacaoControl::~OrdenacaoControl()
{
}

/// <summary>
/// Verifica se uma string vem antes que outra na ordem alfabética
/// </summary>
/// <param name="primeira"></param>
/// <param name="segunda"></param>
/// <returns>True caso a primeira string seja anterior na ordem alfabética e False caso não</returns>
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