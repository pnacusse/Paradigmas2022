#include <iostream>

using namespace std;

class Libro {
    int codigo;
    string titulo, descripcion, autor, categoria;
    float precioBase;
    const float IVA = 0.21;
protected:
    float getIva();
    float getPrecio();
public: 
    //Libro();
    Libro(int, string, string, string, string, float);
    void listarInfo();
    float calcularPrecioVenta();
    //~Libro();
};