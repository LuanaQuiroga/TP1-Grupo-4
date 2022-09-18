#include "cProyecto.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

cProyecto::cProyecto(cJefes* Lider, string Nom, int ID, eEstado est)
{
	this->lider = Lider;
	this->Nombre = Nom;
	this->ID_Proyecto = ID;
	this->estado = est;
	this->Etapa = 0;

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

void cProyecto::RecibirEntrega()
{//Agrega la entrega a la lista


}

