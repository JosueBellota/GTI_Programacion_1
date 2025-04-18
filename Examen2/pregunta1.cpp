#include <iostream>
using namespace std;


// ------------------------------------------------
//
// <x:R>
// ->
// cos()
// -> 
// <res:R>
// ------------------------------------------------
double cos(double x){

    double signo = 1.0;
    double num = 1.0;
    double den = 1.0;
    double res = signo*(num/den);

    for (int k = 2; k <= 200; k = k + 2)
    {
        signo = -signo;
        num = num*x*x;
        den = den*k*(k-1);
        res = res + ((num/den) * signo);
    }
    
    return res;
}

int main(){

    double x = 3.14 / 4;

    double esp = (2*0.5)/2;

    double res = cos(x);

    if(res <= esp && res <= 0.7 ){
        cout << "ha ocurrido un errror";
    }

    return 0;
}
