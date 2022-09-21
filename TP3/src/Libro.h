#ifndef LIBRO_H_
#define LIBRO_H_
#include <iostream>
#include "Autor.h"

using namespace std;

class Libro {
    int codigo;
    string titulo, descripcion, categoria;
    Autor autor;
    float precioBase;
    const float IVA = 0.21;
protected:
    float getIva();
    float getPrecio();
public:
    Libro();
    Libro(int, string, string, string, Autor*, float);
    void getBiografiaAutor();
    void listarInfo();
    float calcularPrecioVenta();
    //~Libro();
};
#endif /* LIBRO_H_ */
