#include "Circulo.h"


Circulo::Circulo(double r, const Punto& c)
    : radio(r), centro(c) { }


double Circulo::getRadio() const {
    return radio;
}

Punto Circulo::getCentro() const {
    return centro;
}
