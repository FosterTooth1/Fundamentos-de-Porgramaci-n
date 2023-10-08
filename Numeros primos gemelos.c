#include<stdio.h>
#include<stdbool.h>
//Flores Lara Alberto 1BV15

int main(){
	
	int a, b, c, d, e, f, g, h;
	
	printf("Ingrese el limite inferior A: ");
	scanf("%d", &a);
	
	printf("Ingrese el limite mayor B: ");
	scanf("%d", &b);

	if(a ==b){
		
		printf("Los numeros son iguales, vuelva a ejecutar el programa");
		
	}
	
	else{
		
		g= 0;
		
		if(a>b){
			
		c== a;
		a== b;
		b== c;	
			
		}
		
		for(d= a; d<=b; d++){
			
			e= 2;
			bool f= true; 
			
			while(f && e < d){
				
				if(d%e== 0){
					
					f= false;
			
				}
				
				else{
					
					e++;
					
				}
				
				
			}
			
			if(f && g== 0){
				
				g= d;
				
			}
			
			else if(f && g != 0){
				
				h= d;
				
				if((h-g) == 2){
					
					printf("%d y %d son primos gemelos. \n", g, h);
					
				}
				
				g= d;
				
			}
			
			
			
		}
		
		
		
	}
	
	return 0;
	
}
