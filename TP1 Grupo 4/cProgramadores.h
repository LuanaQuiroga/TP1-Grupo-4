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
	cProgramadores();
	~cProgramadores();
	void AsignarProyecto();
	void EntregarProyecto();
	void FinProyecto();
};

