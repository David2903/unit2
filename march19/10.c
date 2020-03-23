#include <stdio.h>
int main(int argc, char *argv[]) 
{    
int i = 0;
   for(i = 1; i < argc; i++) 
   {        
   printf("arg %d: %s\n", i, argv[i]);
   }
   
   char *states[] = {"California", "Oregon", "Washington", "Texas"};
   int num_states = 4;
   for(i = 0; i < num_states; i++)
    {
	printf("state %d: %s\n",i, states[i]);
	}
    return 0; 
}

//The initial value for the bucle starts once, and the contitional is compared with only one value , it stops the loop when the condition stops fulfillying


//When you use "," you separate parameters


//When you use ";" you say the end 
