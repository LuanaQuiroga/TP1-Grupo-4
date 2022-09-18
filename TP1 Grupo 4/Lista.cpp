#include "Lista.h"

Lista::Lista(int tam_max, int ca)
{
	this->TAM_MAX = 20;
	this->CA = 0;
	lista = new cProyecto * [TAM_MAX]; //pido memoria
	for (int i = 0; i < TAM_MAX; i++)
	{
		lista[i] = NULL;
	}
}
Lista::~Lista()
{
	for (int i = 0; i < CA; i++)  //elimino objetos
	{
		if (lista[i] != NULL)
			delete lista[i];
	}
	delete[]lista;
}
