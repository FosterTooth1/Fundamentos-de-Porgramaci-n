#include<stdio.h>
//Flores Lara Alberto 1BV1
int main(){
	
	int v, i, a=0, b=0, c=0, d=0;
	
	printf("A continuación se presentan 2000 votos al azar w, x, y, z: \n");
	
	srand(time(NULL));
	
	for(i=1; i<=2000; i++){
		
		v= 1+rand()%(4);
		
		if(v==1){
			printf("W ");
			a++;		
		}
		
		if(v==2){
			printf("X ");
			b++;		
		}
		
		if(v==3){
			printf("Y ");
			c++;		
		}
		
		if(v==4){
			printf("Z ");
			d++;		
		}
	}
	
	printf("\nLa cantidad de votos W fue: %d \n", a);
	printf("La cantidad de votos X fue: %d \n", b);
	printf("La cantidad de votos Y fue: %d \n", c);
	printf("La cantidad de votos Z fue: %d \n", d);
	
	return 0;
}