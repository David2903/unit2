#include <stdio.h>
#include <math.h>
#include <string.h>

float add_two_int(float x, float y)
{
        return (x*x+y*y);
}

float distance(float x, float y)
{
        return sqrt(x*x+y*y);
}

int main (int argc, char** argv)
{

        int i;
        float num1=atof(argv[1]);
        float num2=atof(argv[2]);
        for(i=0; i<argc; i++)
        {   printf("argv[%d] is %s \n",i,argv[i]);
        }
	printf("the hipo  is %f\n",distance(num1,num2));

	return(0);
}
