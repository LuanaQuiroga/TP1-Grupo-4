#include "cProgramadores.h"

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

cProgramadores::cProgramadores(string nombre, string apellido, string telefono, eHorario Hora, bool disponible)
{
	this->Nombre = nombre;
	this->Apellido = apellido;
	this->Telefono = telefono;
	this->horario = Hora;
	this->Disponible = disponible;

}

cProgramadores::~cProgramadores() {}

void cProgramadores::AsignarProyecto()
{


}

void cProgramadores::EntregarProyecto() 
{

}
void cProgramadores::FinProyecto() 
{

}