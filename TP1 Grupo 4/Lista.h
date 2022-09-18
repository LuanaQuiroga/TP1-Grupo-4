#pragma once
#include <iostream>
#include "cJefes.h"
#include "cProgramadores.h"
#include "cEntregas.h"
#include "cProyecto.h"


class Lista
{
public: 
	int TAM_MAX;
	int CA;
	Lista(int tam_max, int ca);
	~Lista();
	cProyecto** lista;
	
};

