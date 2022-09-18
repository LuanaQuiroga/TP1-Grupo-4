#include "cEntregas.h"


cEntregas::cEntregas(int num_etapa, int ID, bool aceptada)
{
	this->Num_Etapa = num_etapa;
	this->ID_Proyecto = ID;
	this->Aceptada = aceptada;
}
cEntregas::~cEntregas() {}

void cEntregas::Actualizar(cJefes* jefe)
{//Recibe al jefe y actualiza fecha de última entrega y cantidad de entregas.Si la entrega es aprobada, se indica la finalización y si no se imprime
	//en pantalla la solicitud de reentrega junto al nombre y apellido del jefe.

	CantEntregas = CantEntregas + 1;
	if (Aceptada == 1)
	{

		//indicar finalizacíon

	}
	else
	{
		//imprimir slicitud de re entrega¨)
	}
}
