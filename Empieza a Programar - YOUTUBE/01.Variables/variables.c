#include <stdio.h> //1. incluimos la libreria

int main () //2. función principal
{

//3. Declaramos las variables	
int numerox;		// Variable del tipo entero
float numeroy;		// Variable del tipo flotante 32bits
double numeroz;	// Variable del tipo flotante 64bits
char c;				// Caracter
// Ahora asignamos a cada variable un valor
numerox = 5;
numeroy = 2.14;
numeroz = 20.12;
c = 'c';

// Ahora usamos la funcion printf para mostrar en pantalla
printf ("valor de numerox:%i \n", numerox);
printf ("Valor de numeroy:%f \n ", numeroy);
printf ("Valor numeroz:%f \n", numeroz);
printf ("Valor de char:%c \n ", c);
	return 0;
}
