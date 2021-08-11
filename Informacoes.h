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
		std::string GetPrimeiraString(std::string);
		std::string GetSegundaString(std::string);
	private:
		std::string PrimeiraString;
		std::string SegundaString;
};

