/*
 * Venta.h
 *
 *  Created on: 16 sept 2022
 *      Author: untadmin
 */

#ifndef VENTA_H_
#define VENTA_H_
#include "Fecha.h"
#include "Libro.h"
#include "Cliente.h"
#include <iostream>
#include <vector>
using namespace std;

class Venta {
	int codigo;
	Fecha fecha;
	vector <Libro*> libros;
	Cliente cliente;
public:
	Venta();
	float montoVenta();
	virtual ~Venta();
};

#endif /* VENTA_H_ */
