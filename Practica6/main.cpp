// ---------------------------------------------------
// main.cpp
// g++ Conjunto.cpp main.cpp
// ---------------------------------------------------
#include <iostream>
#include "Conjunto.h"
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
// ------------------------------------------------
void probarInterseccion() {
    Conjunto c1, c2;
    c1.anyadir(10.0);
    c1.anyadir(20.0);
    c1.anyadir(30.0);
    c2.anyadir(20.0);
    c2.anyadir(30.0);
    c2.anyadir(40.0);

    c1.interseccion(c2);
    if (c1.talla() != 2 || !c1.contiene(20.0) || !c1.contiene(30.0)) {
        std::cout << "mmm, parece que no va bien interseccion()\n";
        return;
    }
    std::cout << "prueba interseccion() pasada.\n";
} // ()
// ---------------------------------------------------
void probarDiferencia() {
    Conjunto c1, c2;
    c1.anyadir(10.0);
    c1.anyadir(20.0);
    c1.anyadir(30.0);
    c2.anyadir(20.0);
    c2.anyadir(40.0);

    c1.diferencia(c2);
    if (c1.talla() != 2 || c1.contiene(10.0) == false || c1.contiene(30.0) == false) {
        std::cout << "mmm, parece que no va bien diferencia()\n";
        return;
    }
    std::cout << "prueba diferencia() pasada.\n";
} // ()
// ---------------------------------------------------
void probarDiferenciaSimetrica() {
    Conjunto c1, c2;
    c1.anyadir(10.0);
    c1.anyadir(20.0);
    c2.anyadir(20.0);
    c2.anyadir(30.0);

    c1.diferenciaSimetrica(c2);
    if (c1.talla() != 2 || !c1.contiene(10.0) || !c1.contiene(30.0)) {
        std::cout << "mmm, parece que no va bien diferenciaSimetrica()\n";
        return;
    }
    std::cout << "prueba diferenciaSimetrica() pasada.\n";
} // ()
// ---------------------------------------------------
int main() {
    probarTalla();
    probarAnyadir();
    probarEliminar();
    probarUnir();
} // ()
