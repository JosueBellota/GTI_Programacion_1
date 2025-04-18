
// ------------------------------------------------
// Autor: Josue Bellota
// Fecha: ???
// ------------------------------------------------
#include <iostream>

// ------------------------------------------------
// 
// Lista<R>
// ->
// mostrarArray()
//  
// ------------------------------------------------
void mostrarArray( const double * p, const unsigned int cuantos ) {

  // repetir 0 --- i ---> cuantos-1 (para todas las casillas)
  for( int i=0; i<= cuantos-1; i++ ) {
	// escribir p[i]
	std::cout << p[ i ] << " ";
  } // for

  std::cout << "\n";
} // ()

// ------------------------------------------------
// 
// iniciarArray()
// ->
// Lista<R>
//  
// ------------------------------------------------
void iniciarArray( double * p, const unsigned int cuantos ) {

  // para toda las casillas
  for( int i=0; i<= cuantos-1; i++ ) {
	// p[i] <- 10i 
	p[i] = i*10;
  } // for

} // ()

// ------------------------------------------------
// ------------------------------------------------
int main( ) {
  double lista[10];
  
  // pongo valores en las 3 primeras casillas del array
  iniciarArray( & lista[0], 3 );

  // muestro en pantalla el array
  mostrarArray( & lista[0], 3 );

} // ()