#include <iostream>
using namespace std;

// ––––––––––––––––––––––––
// ––––––––––––––––––––––––
void mostrarArray( const double * p, const unsigned int cuantos ) {
for( int i=0; i<= cuantos-1; i++ ) {
cout << p[ i ] << " ";
} // for
cout << "\n";
} // ()

void iniciarArray( double * p, const unsigned int cuantos ) {
for( int i=0; i<= cuantos-1; i++ ) {
p[i] = i*10;
} // for
} // ()

// ––––––––––––––––––––––––
// ––––––––––––––––––––––––

int main( ) {
double lista[10];
iniciarArray( & lista[0], 3 );
mostrarArray( & lista[0], 3 );
} // ()
