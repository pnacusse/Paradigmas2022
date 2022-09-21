/*
 * Sistema.cpp
 *
 *  Created on: 19 sep. 2022
 *      Author: Alumno
 */

#include "Sistema.h"

bool Sistema::agregarVenta(Venta * venta){
	ventas.insert(ventas.end(), venta);
	return true;
}

float Sistema::montoRecaudado(){
	float montoRecaudado;
	cout<<"El monto recaudado es: "<<endl;
	for(Venta * v:ventas){
		montoRecaudado += v->montoVenta();
	}
	return montoRecaudado;
}

void Sistema::buscarVenta(Fecha &fecha){
	for(Venta * v:ventas){
		if(v->getFecha().getAnio() == fecha.getAnio()
				&& v->getFecha().getMes() == fecha.getMes()
				&& v->getFecha().getDia() == fecha.getDia()){
			v->listarElementos();
		}else{
			cout<<"No se encontraron Ventas"<<endl;
		}
	}
}

Sistema::Sistema() {
	// TODO Auto-generated constructor stub

}

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}
