// ---------------------------------------------------
// main.cpp
// g++ Conjunto.cpp main.cpp
// ---------------------------------------------------
#include <iostream>
#include "Conjunto2.h"
// ---------------------------------------------------
// ---------------------------------------------------
void probarTalla() {
    Conjunto c1;
    unsigned int a = c1.talla();
    if (a != 0) {
        std::cout << "mmm, parece que no va bien talla()\n";
        return; // pues termino
    }
  
} // ()
// ---------------------------------------------------
// ---------------------------------------------------
void probarAnyadir() {
    Conjunto c1;
    c1.anyadir(10.0);
    c1.anyadir(20.0);
    c1.anyadir(10.0); // Intentar añadir un duplicado
    if (c1.talla() != 2) {
        std::cout << "mmm, parece que no va bien anyadir()\n";
        return;
    }

} // ()
// ---------------------------------------------------
// ---------------------------------------------------
void probarEliminar() {
    Conjunto c1;
    c1.anyadir(10.0);
    c1.anyadir(20.0);
    c1.eliminar(10.0);
    if (c1.talla() != 1 || c1.contiene(10.0)) {
        std::cout << "mmm, parece que no va bien eliminar()\n";
        return;
    }

} // ()
// ---------------------------------------------------
// ---------------------------------------------------
void probarUnir() {
    Conjunto c1, c2;
    c1.anyadir(10.0);
    c1.anyadir(20.0);
    c2.anyadir(20.0);
    c2.anyadir(30.0);
    c1.unir(c2);
    if (c1.talla() != 3 || !c1.contiene(30.0)) {
        std::cout << "mmm, parece que no va bien unir()\n";
        return;
    }

} // ()
// ---------------------------------------------------
// ---------------------------------------------------
int main() {
    probarTalla();
    probarAnyadir();
    probarEliminar();
    probarUnir();
} // ()
