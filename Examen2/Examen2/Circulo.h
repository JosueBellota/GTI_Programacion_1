#ifndef CIRCULO_H
#define CIRCULO_H

#include "Punto.h"

class Circulo {
private:
    Punto centro; 
    double radio; 

public:

    Circulo(double r, const Punto& c);

    double getRadio() const;   
    Punto getCentro() const;   
};

#endif
