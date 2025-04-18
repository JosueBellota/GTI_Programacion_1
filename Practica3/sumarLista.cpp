#include <iostream>
using namespace std;

// ------------------------------------------------
// Autor: Josue Bellota
// Fecha: 09/25/2024
// ------------------------------------------------

// ------------------------------------------------
// 
// lista: [N]
// ->
// sumarLista()
// -> 
// <N>
// ------------------------------------------------

int sumarLista(int* puntero, int n){

    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma = suma + puntero[i];
    }
    
    return suma;
}

int main(){

    int lista[5] = {1,2,3,4,5};

    //prueba automatica
    if (sumarLista(& lista[0], 5) != 15)
    {
        cout << "ha ocurrido un error";
    }
    

    return 0;
}