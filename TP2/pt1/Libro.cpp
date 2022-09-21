#include <iostream>
#include "Libro.hpp"

using namespace std;

Libro::Libro(int cod, string tit, string desc, string aut, string cat, float prec){
    codigo = cod;
    titulo = tit;
    descripcion = desc;
    autor = aut;
    categoria = cat;
    precioBase = prec;
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
    cout<<"Autor: "<<autor<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    cout<<"Precio Base: "<<precioBase<<endl;
}

float Libro::calcularPrecioVenta(){
    return precioBase + precioBase * IVA;
}
