#include<stdio.h>
#include<math.h>
//Flores Lara Alberto 1BV1
int main()
{
	int numero_1, numero_2, numero_3, numero_4;
	
	printf("Digite un numero de tres digitos:");
	scanf("%d", &numero_1);
	
	numero_4 = numero_1 % 10;
	numero_3 = ((numero_1 % 100) - numero_4) / 10;
	numero_2 = numero_1/100;
	
	printf("Su numero alreves es: %d%d%d", numero_4, numero_3, numero_2);
	
	return 0;
	
	
}