/*
 * Autor.cpp
 *
 *  Created on: 16 sept 2022
 *      Author: untadmin
 */

#include "Autor.h"
#include <iostream>
using namespace std;

string Autor::getBiografia(){
	return this->biografia;
}

int Autor::getEdad(){
	return this->edad;
}

string Autor::getNombre(){
	return this->nombre;
}

void Autor::listarDatos(){
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Edad: "<<this->edad<<endl;
	cout<<"Biografia: "<<this->biografia<<endl;
}

Autor::Autor(string nombre, int edad, string bio){
	this->nombre = nombre;
	this->edad = edad;
	this->biografia = bio;
}

Autor::Autor() {
	// TODO Auto-generated constructor stub

}

Autor::~Autor() {
	// TODO Auto-generated destructor stub
}

