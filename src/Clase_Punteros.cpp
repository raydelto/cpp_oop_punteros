#include <iostream>
#include "Estudiante.h"

using namespace std;
using namespace ITLA;

void agitar(Estudiante* estudiante);
void relajar(Estudiante* estudiante);


void agitar(Estudiante* estudiante){
	Estudiante valdali("Valdali");
	cout << "Agitando a " << estudiante -> getNombre() << endl;
	estudiante -> tomarExamen();
	relajar(estudiante);
	relajar(&valdali);

}

void relajar(Estudiante* estudiante){
	cout << "relajando a " << estudiante -> getNombre() << endl;;
	estudiante -> dormir();
}





int main() {

	/*Estudiante valdali("Valdali");
	valdali.dormir();*/

	Estudiante* dania = new Estudiante("Dania");
//	dania -> dormir();
	agitar(dania);

	return 0;
}
