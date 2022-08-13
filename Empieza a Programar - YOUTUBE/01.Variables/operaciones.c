// C02 Operaciones con variables 
#include <stdio.h>
#define PI 3.1416 //Aqui definimos la macro

int main()
{
	float x;
	int y;
	x = PI;
printf("Introduce un valor para Y: \n\n");
scanf("%i",&y); // scanf escanea lo que pongamos en teclado, 
// Ahora vamos a realizar la operacion 

x = x*y;

printf("El valor de la operacion es: %f.\n\n",x);

return 0;
}

