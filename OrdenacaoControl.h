#pragma once
#include <string>
#include "Informacoes.h"
class OrdenacaoControl
{
	public:
		OrdenacaoControl();
		~OrdenacaoControl();
		bool VemAntes(std::string primeira, std::string segunda);
};

