#pragma once
#include <iostream>
#include <string.h>

using namespace std;
enum eHorario {FULLTIME, PARTTIME};

class cProgramadores
{
private:
	string Nombre;
	string Apellido;
	//Fecha
	string Telefono;
	eHorario horario;
	bool Disponible;
public:
	cProgramadores(string Nombre, string Apellido, string Telefono, eHorario Hora, bool Disponible);
	~cProgramadores();
	void AsignarProyecto();
	void EntregarProyecto();
	void FinProyecto();
};

