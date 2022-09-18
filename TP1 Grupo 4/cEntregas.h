#pragma once
#include <iostream>
#include <string.h>
#include <ctime>
#include "cJefes.h"

#include "Lista.h"

using namespace std;

class cEntregas
{
private:
	int Num_Etapa;
	int ID_Proyecto;
	time_t FechaEntrega = time(0); 
	bool Aceptada;
	int CantEntregas;
public:
	cEntregas(int Num_Etapa, int ID, bool aceptada, int CantEntregas, time_t FechaEntrega);
	~cEntregas();
	void Actualizar();
};

