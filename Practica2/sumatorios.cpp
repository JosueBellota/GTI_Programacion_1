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
// sumatorios()
// -> 
// <N>
// ------------------------------------------------
// ------------------------------------------------
int sumatorio1(int n){

    return((n*(n+1)/2));

}

int sumatorio2(int n){

    int res = 0;

    for(int i=1; i<=n; i++){

        res = res + i;

    }

    return res;
}

int main(){

    if(sumatorio1(4) != 10){
        cout << "ha ocurrido un error";
    }
    
    if(sumatorio2(4) != 10){
    cout << "ha ocurrido un error";
    }
    return 0;
}