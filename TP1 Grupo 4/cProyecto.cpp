#include "cProyecto.h"

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

cProyecto::cProyecto(string Nombre, int ID_Proyecto, eEstado estado, int Etapa)
{
	this-> Nombre = Nombre;
	this-> ID_Proyecto = ID_Proyecto;
	this-> estado = estado;
	this-> Etapa = etapa;
	//deberiamos agregar un enum para las etapas, o definir que representa cada numero, si es así siempre inicializariamos la etapa como 0
	//Etapa=0;
	
	ListaEntregasRealizadas = new cEntregas * [maxproyectos];
	for (int i = 0; i < maxproyectos; i++)
	{
		ListaProyectos[i] = NULL;
	}


}

cProyecto::~cProyecto() {}

void cProyecto::ReasignarProyecto(cJefes* NuevoLider)
{
	this->lider = NuevoLider;

}

void cProyecto::RecibirEntrega()
{


}
