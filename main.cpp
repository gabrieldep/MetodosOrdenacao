#include <iostream>
#include "Informacoes.h"


int main(int argc, char* argv[])
{
	int quantidade = 1000;
	Informacoes* informacoes = new Informacoes[quantidade]();

	informacoes = (Informacoes*)malloc(1000 * sizeof(Informacoes));


	for (int i = 0; i < quantidade; i++) {
		//informacoes[i] = new Informacoes();
	}




	informacoes[0].SetPrimeiraString("Gabriel doidao");
	informacoes[1].SetPrimeiraString("Vinicius doidao");
	informacoes[2].SetPrimeiraString("Patricia doidao");
	informacoes[3].SetPrimeiraString("Abidu doidao");

	
	return 0;
}