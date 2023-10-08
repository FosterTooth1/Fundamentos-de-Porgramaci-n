#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int *base;
	int num;
	int cantidad;
	int coro = 1;
	
	printf("Ingrese la cantidad de digitos que conforman el numero binario que desea ingresar \n");
	scanf("%d", &cantidad);
	
	base = (int*)calloc(cantidad, sizeof(int));
	
	printf("Ingrese el numero en binario osea 0 y 1: \n");
	scanf("%d", &num);
	
	for(int i=0; i<cantidad; i++){
		
		base[i] = coro;
		
		coro=coro*2;
		
	}
	
	int num_1;
	int espacio = 0;
	int decimal = 0;
	
	while(num>0){
		
		num_1 = num % 10;
		
		if(num_1==1){
			
			decimal= decimal + (base[espacio]);
		}
		
		espacio++ ;
		
		num = num / 10;
		
	}
	
	printf("El numero binario en decimal es: %d", decimal);
	
	
	
	
}

