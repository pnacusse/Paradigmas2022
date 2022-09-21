//============================================================================
// Name        : tp3-pt2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Autor.h"
#include "Libro.h"
#include "Venta.h"
#include "Fecha.h"
#include "Cliente.h"
#include "Sistema.h"
#include <iostream>
using namespace std;

int main() {
	/*Creo un objeto Autor Vacio*/
	Autor nuevoAutor;

	/*Muestro la info de el nuevo objeto para comprobar que se creo correctamente*/
	nuevoAutor.listarDatos();

	/*Creo un nuevo Autos con datos inicializados*/
	Autor nuevoAutor1("Pablin", 30, "Es un nuevo autor");
	/*Muestro la info del nuevo autor*/
	nuevoAutor1.listarDatos();

	/*Creo un nuevo Libro*/
	Libro nuevoLibro;

	/*Mostramos los datos para ver que se creo correctamente*/
	cout<<"-----Libro Nuevo-----"<<endl;
	nuevoLibro.listarInfo();

	Libro nuevoLibro1(1,"El lago de los cisnes", "Es un libro de Cisnes", "Clasico", &nuevoAutor1, 10.50);
	cout<<"-----Libro Nuevo-----"<<endl;
	nuevoLibro1.listarInfo();
	nuevoLibro1.getBiografiaAutor();

	/*Otro Libro*/
	Libro nuevoLibro2(2, "Otro Libro", "Es otro Libro", "Magico", &nuevoAutor1, 11);
	nuevoLibro2.listarInfo();
	nuevoLibro2.getBiografiaAutor();

	/*seteamos la fecha*/

	Fecha fechaActual;
	fechaActual.setFechaActual();

	Cliente nuevoCliente(1, "Pablin");
	Cliente nuevoCliente2(2, "Ismael");

	/*Creo una nueva Venta*/
	Venta nuevaVenta(fechaActual);
	nuevaVenta.agregarLibro(&nuevoLibro1, 1, nuevoCliente);
	nuevaVenta.agregarLibro(&nuevoLibro2, 2, nuevoCliente2);

	/*Listamos la info*/
	cout<<"-----Los Libros Cargados son-----"<<endl;
	nuevaVenta.listarElementos();
	cout<<"El monto total de la venta es: $"<<nuevaVenta.montoVenta()<<endl;

	Sistema nuevoSistema;
	nuevoSistema.agregarVenta(&nuevaVenta);
	cout<<"Monto Recaudado: "<<nuevoSistema.montoRecaudado()<<endl;

	nuevoSistema.buscarVenta(fechaActual);

	return 0;
}
