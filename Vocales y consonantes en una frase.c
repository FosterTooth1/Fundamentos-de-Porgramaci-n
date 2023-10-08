#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	char *mensaje, *vocales, *consonantes;
	int contador_1 = 0;
	int contador_2 = 0;
	int vocales_1 = 0;
	int consonantes_1 = 0;
	int indice = 0;
	
	mensaje= (int*)malloc(sizeof(char));
	vocales= (int*)malloc(sizeof(char));
	consonantes= (int*)malloc(sizeof(char));
		
	printf("Digite un mensaje: \n");
	gets(*mensaje);
	
	while(mensaje[indice] !='\0'){
		
		if(mensaje[indice] == 'a' || mensaje[indice] == 'e' || mensaje[indice] == 'i' || mensaje[indice] == 'o' || mensaje[indice] == 'u' || mensaje[indice] == 'A' || mensaje[indice] == 'E' || mensaje[indice] == 'I' || mensaje[indice] == 'O' || mensaje[indice] == 'U'){
			
			vocales_1++ ;
			
			vocales[contador_1] = mensaje[indice];
		
			contador_1++ ; 
		
		}
		
		else{
			
			if(isalpha(mensaje[indice])){
				
				consonantes_1++ ;
				
				consonantes[contador_2] = mensaje[indice];
				
				contador_2++ ;
				
			}
			
			
		}
		
	}
	
	int i, j, k, l;
	
	l= 0;
	
	for(int i=0; i < l ; i++ ) {		
	
		for(j=i+1; j < l; j++) {
			
			if(vocales[i] == vocales[j]) {
				
				k=j;
				
				while(k < l) {
					
					vocales[k] = vocales[k+1];
					
					k +=1;
					
				}
				
				l -=1;
				j -=1;
				
			}
			
		}
		
	}
		
	printf("El total de consonantes es: %d \n", contador_2);
	
	printf("El total de vocales es: %d \n", contador_1);
	
		printf("Todas las vocales son: \n");
		
		for(i=0; i < l; i++) {
		
		printf("%c, ", vocales[i]);
	}
		
	int m, n, o, p;
	
	p= 0;
	
	for(int m=0; m < p ; m++ ) {		
	
		for(n=m+1; n < p; n++) {
			
			if(consonantes[m] == consonantes[n]) {
				
				o=n;
				
				while(o < p) {
					
					consonantes[o] = consonantes[o+1];
					
					o +=1;
					
				}
				
				p -=1;
				n -=1;
				
			}
			
		}
		
	}
	
	printf("Todas las consonantes son: \n");
		
	for(i=0; i < l; i++) {
		
		printf("%c, ", consonantes[i]);
	}
	
}