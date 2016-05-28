/*
 * Estudiante.h
 *
 *  Created on: May 28, 2016
 *      Author: raydelto
 */

#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_
#include <string>
#include "Persona.h"
namespace ITLA {

	class Estudiante : public Persona {
	public:
		void estudiar();
		bool tomarExamen();
		Estudiante(std::string nombre);
		virtual ~Estudiante();
	};

} /* namespace ITLA */

#endif /* ESTUDIANTE_H_ */
