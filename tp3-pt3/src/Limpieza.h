/*
 * Limpieza.h
 *
 *  Created on: 22 sept 2022
 *      Author: untadmin
 */

#ifndef LIMPIEZA_H_
#define LIMPIEZA_H_
#include "Producto.h"

class Limpieza : public Producto{
	bool advertencia;
public:
	Limpieza();
	bool esToxic();
	virtual ~Limpieza();
};

#endif /* LIMPIEZA_H_ */
