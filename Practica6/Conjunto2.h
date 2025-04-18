#ifndef CONJUNTO2_YA_INCLUIDO
#define CONJUNTO2_YA_INCLUIDO

#include <iostream>
#include <vector>

class Conjunto {
private:
    std::vector<double> elementos; 

public:
    Conjunto();

    int talla();

    void vaciar();

    int donde(double elemento);

    bool contiene(double elemento);

    void anyadir(double elemento);

    void eliminar(double elemento);

    void unir(const Conjunto& otroConjunto);

    void mostrar();
};

#endif
