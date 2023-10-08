#include <stdio.h>
#include <string.h>

//Flores Lara Alberto
 
void conversion(char frase[]);
 
int main()
{
    char *frase;
	
	frase = (int*)malloc(sizeof(char));
    
	printf("Ingrese una frase: \n");
    gets(frase);
    
    conversion(frase);
    
    return 0;
} 
 
void conversion(char frase[])
{
    int tamano = strlen(frase);
    
	for (int i = tamano-1; i >= 0; i--){
        
		if (frase[i] == ' ') {        
           
		    frase[i] = '\0';   
           
		    printf("%s \n", &(frase[i]) + 1);
		    
        }
    }
    
    printf("%s \n", frase);
    
}
