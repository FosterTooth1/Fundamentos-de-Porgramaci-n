#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//Flores Lara Alberto 1BV1
int main()
{
	int a, b, c;
    char d;
    
    printf("Ingrese la altura del triangulo: \n");
    scanf("%d", &a);
    fflush(stdin);
    
    printf("Ingrese un caracter para el triangulo: \n");
    scanf("%c", &d);
    fflush(stdin);
    
    for(b=0 ; b<a; b++){
        
		for(c=0 ; c<=b; c++){
            
			printf("%c", d);
        }
        
        printf("\n");
        
    }
    
    int e, f, g;
    char h;
    
    printf("Ingrese la altura del triangulo: \n");
    scanf("%d", &e);
    fflush(stdin);
    
    printf("Ingrese un caracter para el triangulo: \n");
    scanf("%c", &h);
    fflush(stdin);
    
    for(f=1; f<=e; f++){
    	
    	for(g=e-f; g>=1; g--)
    		printf(" ");
    	
    	for(g=1; g<=f; g++)
    		printf("%c", h);
    	printf("\n");

	}
    
    int i, j, k;
    char l;
    
    printf("Ingrese el lado del cuadrado: \n");
	scanf("%d",&i);
	fflush(stdin);
    
    printf("Ingrese un caracter para el cuadrado: \n");
    scanf("%c", &l);
    fflush(stdin);
   
   for (j=1; j<=i; j++){
   		
   		for (k=1; k<=i ; k++){
   			
   			printf("%c", l);
   			
		   }

		printf("\n");	
   	
   }

	return 0;
    
}