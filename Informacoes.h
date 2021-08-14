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
		void SetDadosInt(int dadosInt);
		std::string GetNome();
		std::string GetDados();
		int GetDadosInt();
		void operator=(const Informacoes& info);
	private:
		std::string Nome;
		std::string Dados;
		int DadosInt;

	friend class Fila;
};

