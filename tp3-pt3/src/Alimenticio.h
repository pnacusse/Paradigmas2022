/*
 * Alimenticio.h
 *
 *  Created on: 22 sept 2022
 *      Author: untadmin
 */

#ifndef ALIMENTICIO_H_
#define ALIMENTICIO_H_
#include "Producto.h"

class Alimenticio : public Producto {
	int fechaVencimiento;
	bool celiacos;
public:
	Alimenticio();
	bool estaVencido();
	bool aptoCeliacos();
	virtual ~Alimenticio();
};

#endif /* ALIMENTICIO_H_ */
