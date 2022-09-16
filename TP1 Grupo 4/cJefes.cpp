#include "cJefes.h"
cJefes::cJefes(string nombre, string apellido, int dni, string tel, bool disponible, int maxproyectos)
{

	this->Nombre = nombre;
	this->Apellido = apellido;
	this->DNI = dni;
	this->Telefono = tel;
	this->Disponible = disponible;
	this->MaximoProyectos = maxproyectos;

	ListaProyectos = new cProyecto * [maxproyectos];
	for (int i = 0; i < maxproyectos; i++)
	{
		ListaProyectos[i] = NULL;
	}

	ListaProgramadores = new cProgramadores * [3];
	for (int i = 0; i < 3; i++)
	{
		ListaProgramadores[i] = NULL;
	}

}

void cJefes::AsignarProyecto(cProyecto proyecto)
{
	if(Disponible == 1)
	{


	
		//Agregar al proyecto a la lista
	}
	else
	{

	

		//imprimir “ {nombre} {apellido} no está disponible

	//ver longitud de la lista y comparar con maximo de proyectos 
	}

}

void cJefes::ReasignarProgramador(cJefes* nuevojefe)
{
	//recibe al nuevo jefe del programador por parámetro, lo quita de la lista de programados y se lo asigna a uno nuevo.


}

void cJefes::RevisarEntrega()
{

}
