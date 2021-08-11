#include "TipoCelula.h"
#include <cstddef>

/// <summary>
/// Construtor sem valor inicial.
/// </summary>
TipoCelula::TipoCelula() {
	this->item.SetChave("-1");
	prox = NULL;
}
