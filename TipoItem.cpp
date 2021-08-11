#include "TipoItem.h"
#include <iostream>
#include <string>

/// <summary>
/// Construtor sem valor inicial.
/// </summary>
TipoItem::TipoItem()
{
	this->chave = -1;
}

/// <summary>
/// Construtor com valor inicial.
/// </summary>
/// <param name="caractere"></param>
TipoItem::TipoItem(std::string text)
{
	this->chave = text;
}

/// <summary>
/// Alterar o valor da chave.
/// </summary>
/// <param name="text">Novo valor da chave</param>
void TipoItem::SetChave(std::string text)
{
	this->chave = text;
}

/// <summary>
/// Retorna o valor da chave
/// </summary>
/// <returns>string com o valor da chave.</returns>
std::string TipoItem::GetChave()
{
	return this->chave;
}

/// <summary>
/// Imprime no terminal o valor da chave.
/// </summary>
void TipoItem::Imprime()
{
	std::string a = GetChave();
	std::cout << a << "\n";
}
