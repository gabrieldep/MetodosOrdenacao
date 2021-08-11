#include "Informacoes.h"

Informacoes::Informacoes()
{
	this->PrimeiraString = "";
	this->SegundaString = "";
}

Informacoes::Informacoes(std::string primeira, std::string segunda)
{
	this->PrimeiraString = primeira;
	this->SegundaString = segunda;
}

Informacoes::~Informacoes()
{
	delete this;
}

void Informacoes::SetPrimeiraString(std::string primeiraString)
{
	this->PrimeiraString = primeiraString;
}

void Informacoes::SetSegundaString(std::string segundaString)
{
	this->SegundaString = segundaString;
}

std::string Informacoes::GetPrimeiraString()
{
	return this->PrimeiraString;
}

std::string Informacoes::GetSegundaString()
{
	return this->SegundaString;
}
