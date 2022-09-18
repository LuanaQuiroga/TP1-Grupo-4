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
cJefes::~cJefes() {}

void cJefes::AsignarProyecto(cProyecto proyecto)
{//Recibe un proyecto y se agrega a la lista si el jefe está disponible, en caso contrario imprime en pantalla “{ nombre } {apellido} no está
	//disponible”.No olvidar actualizar las atributos funcionales del jefe.

	if (Disponible == 1)
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
{//recibe al nuevo jefe del programador por parámetro, lo quita de la lista de programados y se lo asigna a uno nuevo.


}

void cJefes::RevisarEntrega()
{//Si el proyecto efectivamente está a cargo del jefe, se envían los datos al proyecto(Recibir Entrega).Actualiza los datos del proyecto
 //(cambia / etapa estado) y llama a RecibirEntrega de proyecto.En caso de tratarse 		de la segunda entrega, se verifica que la primera esté lista.La probabilidad de
	//que la entrega sea aceptada es del 50 % .


}

void cJefes::FinProyecto()
{//Se llama a este método en caso de haber finalizado todas las etapas del proyecto para quitar el puntero correspondiente del jefe(NO LO
	//ELIMINA) y lo devuelve por izquierda.


}
void cJefes::CambiarFechadeFin() 
{//Recibe una fecha y un proyecto y le cambia la fecha de fin

}