#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class cEntregas
{
private:
	int Num_Etapa;
	int ID_Proyecto;
	//Fecha
	bool Aceptada;
public:
	cEntregas();
	~cEntregas();
	void Actualizar();
};

