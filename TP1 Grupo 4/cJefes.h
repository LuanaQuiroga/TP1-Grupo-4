#pragma once
#include <iostream>
#include <string.h>
#include "cProgramadores.h"
#include "cProyecto.h"
#include "Lista.h"
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
	cJefes(string nombre, string apellido, int dni, string tel, bool disponible, int maxproyectos);
	~cJefes();
	void AsignarProyecto(cProyecto proyecto);
	void ReasignarProgramador(cJefes* nuevojefe);
	void RevisarEntrega();
	void FinProyecto();
	void CambiarFechadeFin();
};

