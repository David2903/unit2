#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv)
{
	float hipo;
	
	float cat1=atof(argv[1]);
	float cat2=atof(argv[2]);
	float radio=atof(argv[3]);
	
	float cuadrado1=(cat1*cat1);
	float cuadrado2=(cat2*cat2);
	float suma=(cuadrado1+cuadrado2);
	hipo=sqrt(suma);
	printf("El punto se encuentra a %.2f unidades del centro, en el circulo de radio %.2f",hipo,radio);
	
	
		if(hipo < radio) printf("\nPor lo tanto el punto esta dentro del circulo");
		else if(hipo > radio) printf("\nPor lo tanto el punto esta fuera del circulo");
		else printf("\nPor lo tanto el punto esta en el borde del circulo");
	
	return 0;
}
