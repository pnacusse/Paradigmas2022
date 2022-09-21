/*
 * Cliente.h
 *
 *  Created on: 16 sept 2022
 *      Author: untadmin
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <iostream>
using namespace std;

class Cliente {
	int codigo;
	string nombre;
public:
	Cliente();
	Cliente(int codigo, string nombre);
	int getCodigo();
	string getNombre();
	virtual ~Cliente();
};

#endif /* CLIENTE_H_ */
