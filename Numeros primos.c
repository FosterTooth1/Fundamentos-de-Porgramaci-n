#include<stdio.h>
#include<math.h>
//Flores Lara Alberto 1BV1
int main(){
	
	int a, b, n;
	b=2;
	a=5;
	
	printf("Digite la cantidad de numeros primos que desea imprimir: ");
	scanf("%d", &n);
		
	if(n==0){
		printf("Ninguno");
	}
	if(n==1){
		printf("2 ");	
	}
	if(n==2){
		printf("2 3 ");
		
	}
	if(n==3){
		printf("2 3 5 ");		
	}
	if(n==4){
		printf("2 3 5 7 ");
	}
	
	if(n>=5){
		
		printf("2 3 5 7 ");	
		
	while(a<=n){
	
	if(b%2==0 || b%3==0 || b%7==0 ||b%5==0){
		b++;   
		}
		
	else{
		printf("%d ", b);
		b++;
		a++;	
		}	
	}
	}
	return 0;
}
