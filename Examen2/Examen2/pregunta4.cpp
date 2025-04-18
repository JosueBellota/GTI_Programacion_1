#include <iostream>
using namespace std;

#include "Punto.h"
#include "Circulo.h"

// ------------------------------------------------
//
// <Circulo:c1>
// <Circulo:c2> 
// ->
// dentro()
// -> 
// <V/F>
// ------------------------------------------------

bool dentro(Circulo c1, Circulo c2){
    Punto p01 = c1.getCentro();
    Punto p02 = c2.getCentro();

    if (p01.distancia(p02) + c2.getRadio() > c1.getRadio())
    {
        return false;
    }

    return true;
    
}

// ------------------------------------------------
//
// <Lista:Circulo>
//
// ->
// dentro()
// -> 
// <V/F>
// ------------------------------------------------



bool todos(Circulo* p, int n){

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (dentro(p[j], p[i]) != true)
        {
            return false;
        }
            
    }

    return true;
    
}

int main()
{

    Punto p0;
    Circulo c3(1.0, p0);
    Circulo c2(2.0, p0);
    Circulo c1(3.0, p0);

    Circulo Lista[3] = {c1,c2,c3};

    if (todos(&Lista[0], 3) != true)
    {
        cout << "error";
    }
    
    return 0;
}
