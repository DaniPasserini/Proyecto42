#include <stdio.h>
int main ()
{
int numero1;
int numero2;
int suma;
printf ("Introduzca 1 numero entero:");
scanf ("%d",&numero1);
printf ("introduzca otro numero entero:");
scanf ("%d",&numero2);
suma=numero1+numero2; 

if (suma >0)
{
	printf ("la suma es mayor que 0");
}
else 
{
	printf ("la suma es menor que 0");
}

return 0;
}
