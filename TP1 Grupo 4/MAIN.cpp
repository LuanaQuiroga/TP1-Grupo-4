#include <iostream>
#include "cJefes.h"
#include "cProgramadores.h"
#include "cEntregas.h"
#include "cProyecto.h"

int main() {

	cProyecto* proyecto1 = new cProyecto();
	cJefes* jefe1 = new cJefes();
	cProgramadores* programador1 = new cProgramadores();
	cProgramadores* programador2 = new cProgramadores();
	cProgramadores* programador3 = new cProgramadores();
	cEntregas* entrega1 = new cEntregas();

	proyecto1->ReasignarProyecto(jefe1);
	proyecto1->RecibirEntrega();

	jefe1->AsignarProyecto();
	jefe1->ReasignarProgramador();
	jefe1->RevisarEntrega();
	jefe1->FinProyecto();
	jefe1->CambiarFechadeFin();

	entrega1->Actualizar();

	programador1->AsignarProyecto();
	programador1->EntregarProyecto();
	programador1->FinProyecto();
	programador2->AsignarProyecto();
	programador2->EntregarProyecto();
	programador2->FinProyecto();
	programador3->AsignarProyecto();
	programador3->EntregarProyecto();
	programador3->FinProyecto();
	
	//destruyo los objetos

	delete proyecto1;
	delete jefe1;
	delete programador1;
	delete programador2;
	delete programador3;
	delete entrega1;
}