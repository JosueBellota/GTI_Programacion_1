#include <iostream> 
using namespace std;

// ------------------------------------------------
// Autor: Josue Bellota
// Fecha: 18/09/2024
// ------------------------------------------------



// ------------------------------------------------
// 
// <Z>
// ->
// esPositivo()
// -> 
// V/F
// ------------------------------------------------
// ------------------------------------------------
bool esPositivo(int a){

    if(a > 0){
        return true;
    } else {
        return false;
    }

}
// ------------------------------------------------
// ------------------------------------------------
main(){

cout << esPositivo(3) << endl;

//prueba automatica

if (esPositivo(3) != false){

    cout << "el numero es positivo";
}

return 0;

}