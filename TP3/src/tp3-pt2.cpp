//============================================================================
// Name        : tp3-pt2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Autor.h"
#include "Libro.h"
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

	return 0;
}
