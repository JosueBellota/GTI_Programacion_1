#include <iostream> 
using namespace std;

// ------------------------------------------------
// Autor: Josue Bellota
// Fecha: 18/09/2024
// ------------------------------------------------



// ------------------------------------------------
// 
// <R>
// ->
// porTres()
// -> 
// <R>
// ------------------------------------------------
// ------------------------------------------------

int porTres(int a){

    return(a*3);
}

// ------------------------------------------------
// ------------------------------------------------

main(){

    cout << porTres(2);

    //prueba automatica
    if(porTres(2) != 6){

        cout << "ha ocurrido un error";
    }

    return 0;
}