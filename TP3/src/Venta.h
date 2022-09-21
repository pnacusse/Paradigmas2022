/*
 * Venta.h
 *
 *  Created on: 16 sept 2022
 *      Author: Pablin
 *
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
	Fecha fechaVenta;
	vector <Libro*> libros;
	Cliente cliente;
public:
	Venta();
	Venta(Fecha & fechaV);
	bool agregarLibro(Libro * nuevoLibro, int codigo, Cliente cliente);
	float montoVenta();
	Fecha getFecha();
	void listarElementos();
	virtual ~Venta();
};

#endif /* VENTA_H_ */
