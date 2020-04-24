#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char **args)
{
float sum=0;
float n=argc-1;
float promedio;
float mayor = strtof(args[1], NULL);
float menor = mayor;

for (int k=1; k<argc; k++)
	
{
 float numTemp = strtof(args[k], NULL);	
 if (numTemp > mayor) mayor = numTemp;
 else if(numTemp < menor) menor = numTemp;
}
printf("El mayor es %.2f\nEl menor es %.2f", mayor, menor);

for (int k=1; k<argc; k++)
{
sum += strtof(args[k], NULL);
}
promedio=(sum/n);
printf("\nPromedio es %.2f",promedio);
return 0;
}
