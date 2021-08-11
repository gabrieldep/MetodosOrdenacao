#include "Fila.h"
#include <cstddef>

/// <summary>
/// Construtor da fila.
/// </summary>
Fila::Fila()
{
	tamanho = 0;
	frente = new TipoCelula;
	tras = frente;
}

/// <summary>
/// Destrutor da fila.
/// </summary>
Fila::~Fila()
{
	Limpa();
	delete frente;
}

/// <summary>
/// Retorna quantos elementos tem na fila.
/// </summary>
/// <returns>Retorna o tamanho da fila.</returns>
int Fila::GetTamanho()
{
	return tamanho;
}

/// <summary>
/// Verifica se a fila está vazia ou não.
/// </summary>
/// <returns>True se a fila estiver vazia e False se a fila tiver pelo menos um elemento.</returns>
bool Fila::Vazia()
{
	return tamanho == 0;
}

/// <summary>
/// Adiciona uma célula ao final da fila.
/// </summary>
/// <param name="tipoCelula">Celula a ser adicionada.</param>
void Fila::Enfileira(TipoCelula tipoCelula)
{
	TipoCelula* nova;

	nova = new TipoCelula();
	nova->SetChave(tipoCelula.GetChave());
	tras->prox = nova;
	tras = nova;
	tamanho++;
}

/// <summary>
/// Remove o primeiro item da fila.
/// </summary>
/// <returns>TipoCelula removido do inicio da fila.</returns>
TipoCelula Fila::Desenfilera()
{
	TipoCelula* p;
	TipoCelula aux;

	if (tamanho == 0) {
		throw "Fila vazia";
	}

	aux = *frente->prox;
	p = frente;
	frente = frente->prox;
	delete p;
	tamanho--;
	return aux;
}

/// <summary>
/// Remove todos os elementos da fila.
/// </summary>
void Fila::Limpa()
{
	TipoCelula* p;

	p = frente->prox;
	while (p != NULL) {
		frente->prox = p->prox;
		delete p;
		p = frente->prox;
	}
	tamanho = 0;
	tras = frente;
}