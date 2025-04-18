#include <iostream> 
using namespace std;

// ------------------------------------------------
// Autor: Josue Bellota
// Fecha: 18/09/2024
// ------------------------------------------------

// ------------------------------------------------
// 
// <N>
// ->
// esPrimo()
// -> 
// <V/F>
// ------------------------------------------------

bool esPrimo(int n){

    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            return false;
        }
    }

    return true;
    
}

main(){

    if(esPrimo(25) != false){
    cout << "ha ocurrido un error";
    }

    return 0;
}
