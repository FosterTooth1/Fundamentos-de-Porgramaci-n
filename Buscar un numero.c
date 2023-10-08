#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Flores Lara Alberto 1BV1
int main(){
	
	int a, b, c, d;
	
	srand(time(NULL));
	
	a= 1000+rand()%(2000 + 1 - 1000);	
		
	for(b=1; b<=7; b++){
		
	printf("Elija un numero entre el 1000 y 2000: \n\n");
	scanf("%d", &c);
	
	if(a==c){
		
		printf("Felicidades adivinaste el numero! \n\n");
		
		b==8;
		
	}
	
	if(c>a){
		
		printf("El numero que esta buscando es menor al que ingreso \n\n");
		
	}
	
	if(c<a){
		
		printf("El numero que esta buscando es mayor al numero que ingreso \n\n");
	
		}
	}
	
	printf("El juego ha terminado, el valor del numero magico era %d \n\n", a);	
	
	return 0;
	
}