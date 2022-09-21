/*
 * Sistema.h
 *
 *  Created on: 19 sep. 2022
 *      Author: Alumno
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_
#include <vector>
#include <iostream>
#include "Venta.h"
#include "Fecha.h"

using namespace std;

class Sistema {
	vector <Venta*> ventas;
public:
	Sistema();
	bool agregarVenta(Venta * venta);
	float montoRecaudado();
	void buscarVenta(Fecha &fecha);
	virtual ~Sistema();
};

#endif /* SISTEMA_H_ */
