#pragma once
#include <iostream>
#include <string.h>

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

public:
	cProyecto(string Nombre, int ID_Proyecto, eEstado estado, int Etapa);
	~cProyecto();
	void ReasignarProyecto();
	void RecibirEntrega();
};

