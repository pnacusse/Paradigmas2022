/*
 * Autor.h
 *
 *  Created on: 16 sept 2022
 *      Author: untadmin
 */

#ifndef AUTOR_H_
#define AUTOR_H_
#include <iostream>
using namespace std;

class Autor {
	string nombre;
	int edad;
	string biografia;
public:
	Autor();
	Autor(string, int, string);
	string getNombre();
	int getEdad();
	string getBiografia();
	void listarDatos();
	virtual ~Autor();
};

#endif /* AUTOR_H_ */
