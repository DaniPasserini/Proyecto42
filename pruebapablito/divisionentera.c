#include <stdio.h>
int main ()
{
int dividendo, divisor, resultado, resto; 
printf("introduzca dividendo por favor:");
scanf("%d",&dividendo);
printf ("introduzca divisor por favor:");
scanf("%d",&divisor);
resultado=dividendo/divisor;
resto=dividendo%divisor; 
printf ("%d div %d=%d (resto=%d)",dividendo,divisor,resultado,resto);
return 0;
}
