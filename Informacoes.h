#pragma once
#include <string>
class Informacoes
{
	public:
		Informacoes();
		Informacoes(std::string primeira, int segunda);
		~Informacoes();
		void SetNome(std::string nome);
		void SetDados(std::string dados);
		std::string GetNome();
		std::string GetDados();
	private:
		Informacoes* prox;
		std::string Nome;
		std::string Dados;

	friend class Fila;
};

