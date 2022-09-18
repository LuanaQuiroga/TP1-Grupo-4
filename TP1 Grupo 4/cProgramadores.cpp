#include "cProgramadores.h"

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

cProgramadores::cProgramadores(string nombre, string apellido, string telefono, eHorario Hora, bool disponible, time_t FechaNacimiento)
{
	this->Nombre = nombre;
	this->Apellido = apellido;
	this->Telefono = telefono;
	this->horario = Hora;
	this->Disponible = disponible;
	this->FechaNacimiento = FechaNacimiento;

}

cProgramadores::~cProgramadores() {}

void cProgramadores::AsignarProyecto()
{//Recibe el proyecto por parámetro y se añade a la lista si el programador está disponible


}

void cProgramadores::EntregarProyecto() 
{//recibe una entrega, llama al método Revisar Entrega del jefe.Se actualiza la fecha de última entrega.

}
void cProgramadores::FinProyecto() 
{//Quita el puntero correspondiente al proyecto finalizado (NO LO ELIMINA) y lo devuelve por izquierda.

}

