#include <iostream>
using namespace std;

// ------------------------------------------------
//
// <lista:R>
// <res:R>
// ->
// desp()
// -> 
// <res:R>
// ------------------------------------------------

void desp(double* p, double* r, int n){

    int j = 0;
    double temp;
    for (int i = 0; i < n-1; i++)
    {
        if (i<1)
        {
            temp = p[i];
            p[i] = p[n-1];
            p[n-1] = temp;
        }

        else{
            temp = p[j];
            p[j ] = p[i];
            p[i] = temp;

            j++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        r[i] = p[i];
    }
    
}

int main(){

    double lista[4] = {0,1.0,2.0,3.0};
    double res[4];


    double esp[4] = {1.0,2.0,3.0,0};

    desp(&lista[0], &res[0], 4);

    for (int i = 0; i < 4; i++)
    {
        if (res[i] != esp[i])
        {
            cout << "error";
        }

    }
    
    return 0;
}