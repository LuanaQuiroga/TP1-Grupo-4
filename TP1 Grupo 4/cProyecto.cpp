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
{//Reapunta el puntero Líder al nuevo jefe del proyecto que recibe por parámetro.

	this->lider = NuevoLider;

}

void cProyecto::RecibirEntrega(cEntregas*entrega)
{//Agrega la entrega a la lista
	if (lista[0] == NULL) 
	{
		lista[0] = entrega;
	}
	else
	{
		lista[cantidadentregas] = entrega;
		
	}
	
	entrega->setCantidadEntregas();


}

