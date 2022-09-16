#pragma once
#include <iostream>
#include <string.h>
#include "cJefes.h"
#include "cEntregas.h"

using namespace std;

enum eEstado {ESPERA, DESARROLLO, FINALIZADO};

class cProyecto
{
private:
	string Nombre;
	//Fechas
	int ID_Proyecto;
	eEstado estado;
	int Etapa;
	cJefes* lider;
	cEntregas ** ListaEntregasRealizadas;

public:
	cProyecto(string Nombre, int ID_Proyecto, eEstado estado, int Etapa, cJefes* Lider);
	~cProyecto();
	void ReasignarProyecto(cJefes* NuevoLider);
	void RecibirEntrega();
};

