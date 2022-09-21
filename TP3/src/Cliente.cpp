/*
 * Cliente.cpp
 *
 *  Created on: 16 sept 2022
 *      Author: untadmin
 */

#include "Cliente.h"

Cliente::Cliente() {
	// TODO Auto-generated constructor stub

}

Cliente::Cliente(int codigo, string nombre){
	this->codigo = codigo;
	this->nombre = nombre;
}

Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}

int Cliente::getCodigo(){
	return this->codigo;
}

string Cliente::getNombre(){
	return this->nombre;
}
