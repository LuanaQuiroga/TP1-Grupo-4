#include "cEntregas.h"

cEntregas::cEntregas(int Num_etapa, int ID, bool Aceptada)
{
	this->Num_Etapa = Num_etapa;
	this->ID_Proyecto = ID;
	this->Aceptada = Aceptada;
}

void cEntregas::Actualizar(cJefes* jefe)
{
	CantEntregas = CantEntregas + 1;
	if(Aceptada==1)
	{
		
	//indicar finalizacíon

	}
	else
	{
	//imprimir slicitud de re entrega¨)
	}
}
