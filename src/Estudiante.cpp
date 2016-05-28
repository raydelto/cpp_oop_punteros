/*
 * Estudiante.cpp
 *
 *  Created on: May 28, 2016
 *      Author: raydelto
 */

#include "Estudiante.h"
#include <iostream>

using namespace std;

namespace ITLA {

Estudiante::Estudiante(std::string nombre)  {
	setNombre(nombre);
	cout << "Esta naciendo el estudiante "<< getNombre() << endl;
}

void Estudiante::estudiar() {
	cout << getNombre()   << "  esta estudiando" << endl;
}

bool Estudiante::tomarExamen() {
	cout << getNombre()   << " esta tomando un examen" << endl;
	return true;
}

Estudiante::~Estudiante() {
	cout << getNombre()  << " esta siendo destruido" << endl;
}

} /* namespace ITLA */
