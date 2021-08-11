#pragma once
#include "TipoItem.h"
class TipoCelula :
	public TipoItem
{
public:
	TipoCelula();
private:
	TipoItem item;
	TipoCelula* prox;

	friend class Fila;
};

