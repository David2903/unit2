#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
int i;
int prime;
int  count;
 printf("prime number between 1 to 2000 are \n");

 for(i=1; i<= 2000; i++)
{
 	count=0;
	for(prime=1; prime<=i; prime++)
{
	if(i%prime ==0)
		count++;
}
 	if(count==2)
	printf("%d\t", i);
}
	return (0);
}

