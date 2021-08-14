#include "Informacoes.h"

Informacoes::Informacoes()
{
	this->Nome = "";
	this->Dados = "0";
}

Informacoes::Informacoes(std::string primeira, int segunda)
{
	this->Nome = primeira;
	this->Dados = segunda;
}

Informacoes::~Informacoes()
{
}

void Informacoes::SetNome(std::string primeiraString)
{
	this->Nome = primeiraString;
}

void Informacoes::SetDados(std::string dados)
{
	this->Dados = dados;
}

std::string Informacoes::GetNome()
{
	return this->Nome;
}

std::string Informacoes::GetDados()
{
	return this->Dados;
}
