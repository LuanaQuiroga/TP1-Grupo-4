#pragma once
#include <iostream>
#include <string.h>
#include <ctime>
#include "cJefes.h"
#include "cEntregas.h"
#include "Lista.h"
using namespace std;

enum eEstado { ESPERA, DESARROLLO, FINALIZADO };

class cProyecto
{
private:
	string Nombre;
	time_t FechaInicio = time(0); 
	time_t FechaFin = time(0);
	int ID_Proyecto;
	eEstado estado;
	int Etapa;
	cJefes* lider;
	cEntregas** lista;

public:
	cProyecto(cJefes* Lider, string Nom, int ID, eEstado est, int etapa, time_t FechaInicio, time_t FechaFin);
	~cProyecto();
	void ReasignarProyecto(cJefes* NuevoLider);
	void RecibirEntrega();
};

