// -------------------------------------------------------------------
//
// Fichero: Conjunto.cpp
// Autor:Josue Bellota Ichaso
// Fecha:27/12/2024
// Descripción:
//
// -------------------------------------------------------------------


#include <iostream>
#include "Conjunto.h"

    Conjunto::Conjunto() {
        cuantos = 0;
    }

    void Conjunto::mostrar() {
        std::cout << "Conjunto: { ";
        for (int i = 0; i < cuantos; ++i) {
            std::cout << elementos[i];
            if (i < cuantos - 1) {
                std::cout << ", ";
            }
        }
        std::cout << " }" << std::endl;
    }
 
    int Conjunto::talla(){

        return cuantos;   
    }
    void Conjunto::vaciar(){
        delete[] elementos;

        elementos = nullptr;

        cuantos = 0; 
    }
    
    int Conjunto::donde(double elemento) const{
        for (int i = 0; i < cuantos; i++)
        {
            if(elementos[i] == elemento){
                return i;
            }
           
        }
 
        return -1;
               
    }

    bool Conjunto::contiene(double elemento) const{

        if(cuantos == 0){
            return false;
        }
        else{

            if(donde(elemento) != -1){
                return true;
            }
            else{
                return false;
            }
        }
        
    }

    void Conjunto::anyadir(double elemento){

        if(contiene(elemento) == true){
            std::cout << "elemento repetido detectado" << std::endl;
        }
        else{   
           
            cuantos++;
            // Asignar memoria a cuantos
            double* puntero = new double[cuantos];

            if (cuantos > 1){
                for (int i = 0; i < cuantos - 1; i++){
                    puntero[i] = elementos[i];
                }
            }

            puntero[cuantos - 1] = elemento;
            //se utiliza para liberar memoria que fue asignada con new[]
            delete[] elementos;

            elementos = puntero; 
        }
                     
    }

    void Conjunto::eliminar(double elemento){
        int id = donde(elemento);
        if(id != -1){
            double* puntero = new double[cuantos-1];
            for(int i = 0; i < id; i++){
                puntero[i] = elementos[i];
            } 
            for(int i = id + 1; i < cuantos; i++){
                puntero[i-1] = elementos[i];
            }
            cuantos--;
            delete[] elementos;
        
            elementos = puntero;
        }

    }

    void Conjunto::unir(const Conjunto& otro) {
        for (int i = 0; i < otro.cuantos; ++i) {
            anyadir(otro.elementos[i]);
        }
    }

void Conjunto::interseccion(const Conjunto& otro) {
   
    Conjunto c3;


    for (int i = 0; i < cuantos; ++i) {

        if (otro.contiene(elementos[i])) {
            c3.anyadir(elementos[i]);
        }
    }

    
    *this = c3;
}

void Conjunto::diferencia(const Conjunto& otro) {

    Conjunto c4;

    for (int i = 0; i < cuantos; ++i) {

        if (otro.contiene(elementos[i]) == false) {
            c4.anyadir(elementos[i]);
        }
    }

    *this = c4;
}

void Conjunto::diferenciaSimetrica(const Conjunto& otro) {

    Conjunto c5;

    for (int i = 0; i < cuantos; ++i) {

        if (otro.contiene(elementos[i]) == false) {
            c5.anyadir(elementos[i]);
        }
    }

     for (int i = 0; i < otro.cuantos; ++i) {

        if (contiene(otro.elementos[i]) == false) {
            c5.anyadir(otro.elementos[i]);
        }
    }

    *this = c5;
}

    





