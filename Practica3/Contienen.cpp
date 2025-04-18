#include <iostream>
using namespace std;

// ------------------------------------------------
// Autor: Josue Bellota
// Fecha: 09/25/2024
// ------------------------------------------------

// ------------------------------------------------
// 
// lista: [N]
// n: N
// ->
// contiene()
// -> 
// V/F
// ------------------------------------------------

int contiene(int* puntero, int n){

    for (int i = 0; i < n; i++)
    {
        if (n == puntero[i])
        {
            return true;
        }
        
    }

    return false;
    
}

int main(){

    int lista[3] = {1,2,3};

    //prueba automatica
    if (contiene(& lista[0], 3) != true)
    {
        cout << "ha ocurrido un error";
    }
    
}





