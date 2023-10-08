#include<stdio.h>
//Flores Lara Alberto 1BV1
int main()
{
	int i, n, a, b;
	
	b = 0;
	
	printf("Indique la cantidad de numeros que desea ingresar:");
	scanf("%d", &a);
	
	for(i = 1; i <= a; i++){
		printf("Ingrese un numero del 0 al 9:");
		scanf("%d", &n);
		
		if(n == 0)
		b++;		
	}
	
	printf("La cantidad de ceros que ingreso fue: %d", b);
	
	return 0;
}