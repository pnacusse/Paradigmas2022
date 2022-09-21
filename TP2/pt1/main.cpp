#include <iostream>
#include "Libro.hpp"

using namespace std;

int main(){
    Libro nuevo(1, "Danza", "Bueno", "jorge", "clasico", 50);
    nuevo.listarInfo();

    return 0;
}