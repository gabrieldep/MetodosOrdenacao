#pragma once
#include <string>
class Informacoes
{
	public:
		Informacoes();
		Informacoes(std::string primeira, int segunda);
		~Informacoes();
		void SetNome(std::string nome);
		void SetDados(int dados);
		std::string GetNome();
		int GetDados();
	private:
		Informacoes* prox;
		std::string Nome;
		int Dados;

	friend class Fila;
};

