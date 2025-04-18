// -------------------------------------------------------------------
//
// Fichero: Conjunto.h
// Autor:Josue Bellota Ichaso
// Fecha:27/12/2023
// Descripción:
//
// -------------------------------------------------------------------

#ifndef CONJUNTO_YA_INCLUIDO
#define CONJUNTO_YA_INCLUIDO

// ---------------------------------------------------
#include <iostream>

// ---------------------------------------------------
// ---------------------------------------------------
class Conjunto {
 private:

   int cuantos;
   double* elementos = nullptr;

 public:

    Conjunto();

    int talla();

    void vaciar();
  
    int donde(double elemento) const;

    bool contiene(double elemento) const;

    void anyadir(double elemento);

    void eliminar(double elemento);

    void unir(const Conjunto& otroConjunto);

    void interseccion(const Conjunto& otroConjunto);

    void diferencia(const Conjunto& otroConjunto);

    void diferenciaSimetrica(const Conjunto& otroConjunto);


    void mostrar();

}; // class

// ---------------------------------------------------
#endif

// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
// ---------------------------------------------------
