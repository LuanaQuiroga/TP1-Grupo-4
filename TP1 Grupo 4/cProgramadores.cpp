#include "cProgramadores.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

cProgramadores::cProgramadores(string Nombre, string Apellido, string Telefono, eHorario Hora, bool Disponible)
{
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Telefono = Telefono;
	this->horario = Hora;
	this->Disponible = Disponible;

}

void cProgramadores::AsignarProyecto()
{


}
