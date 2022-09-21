#include "Libro.h"

#include <iostream>

using namespace std;

Libro::Libro(){

}
Libro::Libro(int cod, string tit, string desc, string cat, Autor * autor, float prec){
    this->codigo = cod;
    this->titulo = tit;
    this->descripcion = desc;
    this->autor = *autor;
    this->categoria = cat;
    this->precioBase = prec;
}
float Libro::getIva(){
    return precioBase*IVA;
}

float Libro::getPrecio(){
    return precioBase;
}

void Libro::listarInfo(){
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Titulo: "<<titulo<<endl;
    cout<<"Descripcion: "<<descripcion<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    cout<<"Precio Base: "<<precioBase<<endl;
}

void Libro::getBiografiaAutor(){
	cout<<"---Datos del autor---"<<endl;
	cout<<"Nombre: "<<this->autor.getNombre()<<endl;
	cout<<"Edad: "<<this->autor.getEdad()<<endl;
	cout<<"Biografia: "<<this->autor.getBiografia()<<endl;
}
float Libro::calcularPrecioVenta(){
    return precioBase + precioBase * IVA;
}
