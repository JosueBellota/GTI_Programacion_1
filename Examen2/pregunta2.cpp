#include <iostream>
using namespace std;


// ------------------------------------------------
//
// <x:R>
// <lista:R> 
//
// ->
// polinomio()
// -> 
// <pol:R>
// ------------------------------------------------

double polinomio(double x, double* p, int n){

    double pol = 0;
    
    for (int i = 0; i < n; i++)
    {
        int pot = 1;

        for (int j = 0; j < i; j++)
        {
            pot = pot * x;
        }
        cout << pot;
        
        pol = pol + p[i]*pot;
    }

    return pol;
    
}

int main(){

    double as[5] ={0, -5, 1, 8, 3};

    double x = 2;

    double res = polinomio(x, &as[0], 5);

    if (res != 106.0)
    {
        cout << "ha ocurrido un error";
    }

    cout << res;
    
    return 0;
}