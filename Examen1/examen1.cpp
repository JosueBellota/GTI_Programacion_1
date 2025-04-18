#include <iostream>
using namespace std;



// ------------------------------------------------
// 
// <n:N>
// <x:R>
// ->
// potencial()
// -> 
// <p:R>
// ------------------------------------------------
double potencial(int n, double x){

    double p = 1;
    if(n>0){
    for (int i = 1; i <= n; i++)
    {
        p = p * x;  
    }
    }
    if(n==0 || x ==0){
        return p;
    }
    if(n<0){
        for (int i = -1; i >=n; i--)
        {
            p = p * x;  
        }
        return(1/p);
    }
    return p;
    
}
// ------------------------------------------------
// 
// <n:N>
// <x:R>
// ->
// potencial()
// -> 
// <res:R>
// ------------------------------------------------
double combinacion(double x, int n){

    double a = 0;
    double b = 0;
    double res = 0;
    for (int i = 1; i <= n; i++)
    {

        a = a + potencial(i, x);

        b = b + potencial(i,i);

        res = res + (a/b);
    }
    return res;
}

// ------------------------------------------------
//
// <as:R>
// <es:N> 
// <x:R>
// ->
// polinomio()
// -> 
// <p:R>
// ------------------------------------------------

double polinomio(double x, double* as, int* es, int n){
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res  = res + (as[i] * potencial(es[i], x));
    }

    return res;
    
}

main(){

    double res = potencial(-1,2);
//0.5
if (res != 0.5)
{
    cout << "error";

}

    
    double res2 = combinacion(2,2);
//3.2
if (res2 != 3.2)
{
    cout << "error";

}

    double as[100] = {3,8,-5,1};
    int es[100] = {4,3,1,2};

    int n = 4;

    double res3 = polinomio(1, &as[0], &es[0], n);
//7
if (res3 != 7)
{
    cout << "error";

}

    return 0;
}