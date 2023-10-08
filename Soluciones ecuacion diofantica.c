#include <stdio.h>
#include <math.h>

int mcd (int a,int b);

int main(){
   
    int a,b,c,M,cantidad;
	printf("Una ecuacion diofantica es del estilo: Ax + By = C con soluciones enteras\n\nDeme los valores de A,B,C para saber si su ecuacion es diofantica\nValor de A:");
	scanf("%d",&a);
	printf("Valor de B:");
	scanf("%d",&b);
	printf("Valor de C:");
	scanf("%d",&c);
	printf("Indique la cantidad de soluciones que desea obtener:");
	scanf("%d",&cantidad);	
	
	int a_1, b_1;
	a_1 = a;
	b_1 = b;
	
	M=mcd(a,b);
	
	if(c%M==0){	
	
	printf("\nEl maximo comun divisor de A y B es: %d \n",M);
	
    int x = 1, y = 0;
    int x_0 = 0, y_0 = 1;
    int q, r, m, n;
    while(a != 0) {
        q = b / a;
        r = b % a;
        m = x_0 - q * x;
        n = y_0 - q * y;
        x_0 = x, y_0 = y;
        x = m, y = n;
        b = a, a = r;
    }
		
	int solucion_x, solucion_y, c_1;
	
	c_1 = c/M;
	
	for(int i = 1; i < cantidad + 1 ; i++){
	solucion_x = (x_0 * c_1)-((i)*(b_1/M));
	solucion_y = (y_0 * c_1)+((i)*(a_1/M));
	
	printf("Una de las soluciones del sistema es: X%d=%d y Y%d=%d \n", i, solucion_x, i, solucion_y);
		}
	}
	else {
		printf("\nTu ecuacion no tiene soluciones enteras porque %d no es divisor de %d debido al teorema de ecuaciones diofanticas.",M,c );
	}
	return 0;

}

int mcd (int a,int b){
	
	int M,j,k;
	j=abs(a);
	k=abs(b);
	while (j>0){
		M=j;	
		j=k%j; 
		k=M; 
	}
}