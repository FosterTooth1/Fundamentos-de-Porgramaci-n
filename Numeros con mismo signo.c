#include<stdio.h>
#include<math.h>
//Flores Lara Alberto 1BV1
int main()
{
	int numero_1, numero_2, numero_3;
	
	printf("Ingrese un numero: \n");
	scanf("%d", &numero_1);
	
	printf("Ingrese otro numero: \n");
	scanf("%d", &numero_2);
	
	printf("Ingrese otro numero: \n");
	scanf("%d", &numero_3);
	
	if((numero_1<0 && numero_2<0 && numero_3<0) || (numero_1>0 && numero_2>0 && numero_3>0)) {
		
		printf("Los tres numeros tienen el mismo signo"); 		
	}
	else {
		printf("Al menos un numero tiene signo distinto");
	}
	return 0;
}