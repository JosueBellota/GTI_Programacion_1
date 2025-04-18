#include <iostream>
using namespace std;

double* posicion2(double* puntero, double n, const double PI){

    for (int i = 0; i < n; i++)
    {
        puntero[i] = i*PI;
    }

    return puntero;
    
}


int main(){

    

    int n = 5;

    double lista[5];

    const double PI = 3.14;

    double* nuevaLista = posicion2(& lista[0], n, PI);

    for (int i = 0; i < n; i++)
    {
        cout << nuevaLista[i] << " ";
    }
    

    return 0;

}