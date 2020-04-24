#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv)
{
	float punto;
	
	float i=atof(argv[1]);
	float j=atof(argv[2]);
	float k=atof(argv[3]);
	float h=atof(argv[4]);
	
	float x=atof(argv[5]);
	float y=atof(argv[6]);
	float z=atof(argv[7]);
	float w=atof(argv[8]);	

	float n=(i*x);
	float m=(y*j);
	float l=(k*z);
	float t=(h*w);

	punto=(n+m+l+t);
	printf("El producto punto es %.2f\n",punto);
	return 0;
}
