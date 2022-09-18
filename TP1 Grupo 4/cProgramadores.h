#pragma once
#include <iostream>
#include <string.h>

#include "Lista.h"
#include <ctime>

using namespace std;
enum eHorario {FULLTIME, PARTTIME};

class cProgramadores
{
private:
	string Nombre;
	string Apellido;
	time_t FechaNacimiento= time(0);
	string Telefono;
	eHorario horario;
	bool Disponible;
public:
	cProgramadores(string nombre, string apellido, string telefono, eHorario Hora, bool disponible, time_t FechaNacimiento);
	~cProgramadores();
	void AsignarProyecto();
	void EntregarProyecto();
	void FinProyecto();
};

