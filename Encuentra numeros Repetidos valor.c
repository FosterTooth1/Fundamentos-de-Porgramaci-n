#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Flores Lara Alberto

void repetidos(int valores[], int num, int num_1);

int main(){
	
	int num;
	int num_1;
	int *valores;
	
	printf("Digite la cantidad de elementos que desea: \n");
	scanf("%d", &num);
		
	valores = (int*)calloc(num, sizeof(int)); 
	
	srand (getpid());
	
	for(int i=0; i < num ; i++ ) {	

		valores[i] = 500 + rand() % (401);

		printf("%d \n", valores[i]);
	
	}
	
	printf("Digite el dato que desee buscar entre 500 y 900: \n");
	scanf("%d", &num_1);	
	
	repetidos(valores, num, num_1);
}

void repetidos(int valores[], int num, int num_1){
	
	int contador;
	contador=0;
	
	for(int i=0; i<num; i++){
		
		if( valores[i] == num_1){
			
			contador +=1;
			
		}
		
	}
	
	printf("La cantidad de veces que se repite el numero %d en el arreglo son : %d", num_1, contador);
	
}