#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(int argc,const char ** argv) 
{
    float x = atof(argv[1]);
    const char *operacion=(argv[2]);
	float y = atof(argv[3]);
	float resultado;

    switch (*operacion)
    {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case 'x':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        default:
            printf("Intentalo de nuevo");
    }

   printf("El resultado es %.2f\n", resultado);


    return 0;
}
