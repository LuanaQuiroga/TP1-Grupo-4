#pragma once
#include <iostream>
#include <string.h>
#include "cJefes.h"
#include "cFecha.h"
#include "Lista.h"

using namespace std;

class cEntregas
{
private:
	int Num_Etapa;
	int ID_Proyecto;
	cFecha* FechaEntrega;
	bool Aceptada;
	int CantEntregas;
public:
	cEntregas(int Num_Etapa, int ID, bool aceptada);
	~cEntregas();
	void Actualizar();
};

