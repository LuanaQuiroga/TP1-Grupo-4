#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class cJefes
{
private:
	string Nombre;
	string Apellido;
	int DNI;
	string Telefono;
	bool Disponible;
	//MaximoProyectos
public:
	cJefes();
	~cJefes();
	void AsignarProyecto();
	void ReasignarProgramador();
	void RevisarEntrega();
	void FinProyecto();
	void CambiarFechadeFin();
};

