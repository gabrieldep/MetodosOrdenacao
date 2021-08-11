#pragma once
#include <string>
class Informacoes
{
	public:
		Informacoes();
		Informacoes(std::string primeira, std::string segunda);
		~Informacoes();
		void SetPrimeiraString(std::string);
		void SetSegundaString(std::string);
		std::string GetPrimeiraString();
		std::string GetSegundaString();
	private:
		Informacoes* prox;
		std::string PrimeiraString;
		std::string SegundaString;

	friend class Fila;
};

