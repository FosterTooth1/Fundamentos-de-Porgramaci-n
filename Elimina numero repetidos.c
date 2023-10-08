#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Flores Lara Alberto 1BV1

void repetidos(int valores[], int num);

int main(){
	
	int num;
	int *valores;
	
	printf("Digite la cantidad de elementos que desea:");
	scanf("%d", &num);
	
	valores = (int*)calloc(num, sizeof(int)); 
	
	srand (getpid());
	
	for(int i=0; i < num ; i++ ) {	

		valores[i] = 200 + rand() % (301);

		printf("%d \n", valores[i]);
	
	}
	
	repetidos(valores, num);
}

void repetidos(int valores[], int num)	{
	
	int i, j, k;
	
	for(int i=0; i < num ; i++ ) {		
	
		for(j=i+1; j < num; j++) {
			
			if(valores[i] == valores[j]) {
				
				k=j;
				
				while(k < num) {
					
					valores[k] = valores[k+1];
					
					k +=1;
					
				}
				
				num -=1;
				j -=1;
				
			}
			
		}
		
	}
	
	printf("\n\nEl arreglo sin valores repetidos es: \n");
	
	for(i=0; i < num; i++) {
		
		printf("%d\n", valores[i]);
	}
	
}
		

	
	