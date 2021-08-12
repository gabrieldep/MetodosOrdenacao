#pragma once
#include <string>
#include "Informacoes.h"
class OrdenacaoControl
{
	public:
		bool VemAntes(std::string primeira, std::string segunda);
		void Particiona(int inicio, int fim, std::string* i, std::string* j, Informacoes informacoes[]);
};

