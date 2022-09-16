#pragma once
#include <iostream>
#include <string.h>
#include "cProgramadores.h"
#include "cProyecto.h"

using namespace std;

class cJefes
{
private:
	string Nombre;
	string Apellido;
	int DNI;
	string Telefono;
	bool Disponible;
	int MaximoProyectos;
	cProgramadores** ListaProgramadores;
	cProyecto** ListaProyectos;
public:
	cJefes(string Nombre, string Apellido, int DNI, string Telefono, bool Disponible, int MaximoProyectos);
	~cJefes();
	void AsignarProyecto(cProyecto proyecto);
	void ReasignarProgramador(cJefes* nuevojefe);
	void RevisarEntrega();
	void FinProyecto();
	void CambiarFechadeFin();
};

