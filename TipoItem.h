#pragma once
#include <string>
class TipoItem
{
public:
	TipoItem();
	TipoItem(std::string caractere);
	void SetChave(std::string caractere);
	std::string GetChave();
	void Imprime();
private:
	std::string chave;

	friend class Fila;
	friend class TipoCelula;
};

