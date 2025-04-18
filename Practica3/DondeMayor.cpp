#include <iostream>
using namespace std;

// ------------------------------------------------
// Autor: Josue Bellota
// Fecha: 09/25/2024
// ------------------------------------------------

// ------------------------------------------------
// 
// lista: [R]
// ->
// dondeEstaElMayor()
// -> 
// n: N
// ------------------------------------------------

double dondeEstaElMayor(double* puntero, int n){

    double mayor = puntero[0];

    for (int i = 0; i < n; i++)
    {
        if(puntero[i] > mayor){
            
            mayor = puntero[i];

        }
    }

    for (int i = 0; i < n; i++)
    {
        if (mayor == puntero[i]){
            return i;
        }
    }
    
    
}

int main(){

    double lista[4] = {-10, -7, -2, -3};

    cout << dondeEstaElMayor(& lista[0], 4);

    //prueba automatica

    if(dondeEstaElMayor(& lista[0], 4) != 2){

        cout << "ha ocurrido un error";
    }
    return 0;

}