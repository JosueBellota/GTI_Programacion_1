#include "Conjunto2.h"

Conjunto::Conjunto() {
   
}

int Conjunto::talla() {
    return elementos.size();
}

void Conjunto::vaciar() {
    elementos.clear();
}

int Conjunto::donde(double elemento) {
    for (int i = 0; i < elementos.size(); ++i) {
        if (elementos[i] == elemento) {
            return i;
        }
    }
    return -1;
}

bool Conjunto::contiene(double elemento) {
    return donde(elemento) != -1;
}

void Conjunto::anyadir(double elemento) {
    if (contiene(elemento)) {
        std::cout << "elemento repetido detectado" << std::endl;
    } else {
        elementos.push_back(elemento); 
    }
}

void Conjunto::eliminar(double elemento) {
    int id = donde(elemento);
    if (id != -1) {
        elementos.erase(elementos.begin() + id); 
    }
}
void Conjunto::unir(const Conjunto& otro) {


    for (int i = 0; i < otro.elementos.size(); i++)
    {
        anyadir(otro.elementos[i]);
    }
    
}

void Conjunto::mostrar() {
    std::cout << "Conjunto: { ";
    for (size_t i = 0; i < elementos.size(); ++i) {
        std::cout << elementos[i];
        if (i < elementos.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " }" << std::endl;
}
