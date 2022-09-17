#pragma once
#include <iostream>
#include <string.h>
#include "cJefes.h"

using namespace std;

class cEntregas
{
private:
	int Num_Etapa;
	int ID_Proyecto;
	//Fecha
	bool Aceptada;
	int CantEntregas;
public:
	cEntregas(int Num_Etapa, int ID, bool aceptada);
	~cEntregas();
	void Actualizar();
};

