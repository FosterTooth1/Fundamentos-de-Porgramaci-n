#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Flores Lara Alberto 1BV1
int main()
{
	int i, a, b, c, d;
	float e;
	
	c=0;
	d=0;
	
	printf("Ingrese la cantidad de numeros aleatorios que quiere: \n");
	scanf("%d", &i);
		
	srand(time(NULL));
	
	for(a=1; a<=i; a+= 1){
		
	b= rand();
	
	printf("Numero %d: %d \n", a, b);
		
	if(b>c){
		
		c= b;
		
	}
	else{
		
		c= c;
	}
	
	d+= b;
	
	}
	
	e= d/i;
	
	printf("El numero mas grande de la lista es: %d \n", c);
	printf("El promedio de los numeros es: %f \n", e);

	return 0;
	
}