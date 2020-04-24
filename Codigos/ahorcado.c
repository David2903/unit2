#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

#define MAXNUMWORDS 2048
#define MAXWORDLENGTH 64

// Perdón por subirlo tarde es que lo intente todo este tiempo con array, y palabras aleatorias pero no pude, finalmente me rendi y lo hice con una palabra fija
// de igual manera aqui le pongo lo poco que avance con array
// {
// srand(time(NULL));
// char guess_words[][20] = {"Matematicas","Fisica","Coronavirus","Cuarentena","Mexico","Programacion","Ingenieria"};
// int random_index = rand () % 6;
// int num_lives 5;
// int num correct = 0;
// int old_correct= 0;
// int length_world = string();

int main()
{
char value;
printf("Escribe tu letra que deseas adivinar\n");
char asterisco[]="***********";
int i;
char* keyword="coronavirus";
int maxtries=11; 
int trycount=0;
int match=0;
while(trycount<maxtries){
 
	scanf("%c%*c",&value);
	printf("trycount: %d\n", trycount);
	match=0;
    for(i=0;i<11;i++){
	if(keyword[i]==value){
    asterisco[i]=value;
    printf("correcto: %s\n",asterisco);
    match++;
    if(strcmp(asterisco,"coronavirus")==0){
    printf("Lo lograste");
    return 0;
    }
    }
      
    }
    
    if (match==0)
    {
    trycount++;
    }
    value='\0';
}
if(trycount==maxtries){
printf("Intentalo de nuevo\n");
return 0;
}
return 0;
}
