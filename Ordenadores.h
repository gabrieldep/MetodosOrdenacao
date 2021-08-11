#pragma once
#include <string>
#include "Fila.h"
class Ordenadores
{
	public:
		void Quicksort(std::string parameter, Fila* fila);
		void Mergesort(std::string parameter, Fila* fila);
		void Heapsort(std::string parameter, Fila* fila);
		void Radix(std::string parameter, Fila* fila);
};

