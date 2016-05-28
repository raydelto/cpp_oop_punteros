/*
 * Persona.h
 *
 *  Created on: May 28, 2016
 *      Author: raydelto
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <string>
namespace ITLA {

class Persona {
public:
	Persona();
	void dormir();
	virtual ~Persona();
	const std::string& getNombre() const {
		return _nombre;
	}

	void setNombre(const std::string& nombre) {
		_nombre = nombre;
	}

	private:
		std::string _nombre;

};

} /* namespace ITLA */

#endif /* PERSONA_H_ */
