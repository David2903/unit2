#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(int argc, char ** argv) 
{
    int op = argc / 2, i,c=1;
    if (argc%2 == 0) 
	{
        printf("Olvidaste un valor o componte\n");
    } else 
	{
        float x[3], y[3], z[3];
        for (i = 0; i < op; i++) 
		{
            x[i] = atof(argv[i+c]);
            y[i] = atof(argv[op+i+c]);
            printf("i = %d x = %.2f, y = %.2f \n",i, x[i], y[i]);
        }
        z[0] = (x[1] * y[2]) - (x[2] * y[1]);
        z[1] = (x[2] * y[0]) - (x[0] * y[2]);
        z[2] = (x[0] * y[1]) - (x[1] * y[0]);
        printf("zi = %.2f, zj = %.2f zk = %.2f\n", z[0], z[1], z[2]);
    }
return 0;
}
