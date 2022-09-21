/*
 * Venta.cpp
 *
 *  Created on: 16 sept 2022
 *      Author: Pablin
 */

#include "Venta.h"

Venta::Venta(Fecha & fechaV):fechaVenta(fechaV){

}

bool Venta::agregarLibro(Libro * nuevoLibro, int codigo, Cliente cliente){
	libros.insert(libros.end(), nuevoLibro);
	this->codigo = codigo;
	this->cliente = cliente;
	return true;
}

Fecha Venta::getFecha(){
	return this->fechaVenta;
}

void Venta::listarElementos(){
	cout<<"Los productos de la venta son: "<<endl;
	for (Libro * l:libros){
		l->listarInfo();
	}
}

float Venta::montoVenta(){
	float montoVenta = 0;

	for (Libro * l:libros){
		montoVenta = montoVenta + l->calcularPrecioVenta();
	}
	return montoVenta;
}
Venta::Venta() {
	// TODO Auto-generated constructor stub

}

Venta::~Venta() {
	// TODO Auto-generated destructor stub
}
