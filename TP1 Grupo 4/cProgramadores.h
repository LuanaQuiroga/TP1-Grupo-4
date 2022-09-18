#pragma once
#include <iostream>
#include <string.h>
#include "cFecha.h"
#include "Lista.h"

using namespace std;
enum eHorario {FULLTIME, PARTTIME};

class cProgramadores
{
private:
	string Nombre;
	string Apellido;
	cFecha* FechaNacimiento;
	string Telefono;
	eHorario horario;
	bool Disponible;
public:
	cProgramadores(string nombre, string apellido, string telefono, eHorario Hora, bool disponible);
	~cProgramadores();
	void AsignarProyecto();
	void EntregarProyecto();
	void FinProyecto();
};

