#include "cProyecto.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

cProyecto::cProyecto(cJefes* Lider, string Nom, int ID, eEstado est, int etapa, time_t FechaInicio, time_t FechaFin)
{
	this->lider = Lider;
	this->Nombre = Nom;
	this->ID_Proyecto = ID;
	this->estado = est;
	this->Etapa = 0;
	this->FechaInicio = FechaInicio;
	this->FechaInicio = FechaFin;


	lista = new cEntregas * [maxproyectos];
	for (int i = 0; i < maxproyectos; i++)
	{
		lista[i] = NULL;
	}

}

cProyecto::~cProyecto()
{


}

void cProyecto::ReasignarProyecto(cJefes* NuevoLider) 
{//Reapunta el puntero L�der al nuevo jefe del proyecto que recibe por par�metro.

	this->lider = NuevoLider;

}

void cProyecto::RecibirEntrega()
{//Agrega la entrega a la lista


}

