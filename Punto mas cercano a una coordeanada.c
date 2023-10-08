#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int x_1, x_2, y_1, y_2;
	int *m_1, *n_1, *m_2, *n_2;
	float v1, v2, b1, b2, k1, k2;
	
	m_1 = &x_1;
	n_1 = &y_1; 
	m_2 = &x_2;
	n_2	= &y_2;
			
	printf("\nIngrese x1: ");
	scanf("%d", &x_1);
	
	printf("\nIngrese y1: ");
	scanf("%d", &y_1);
	
	printf("\nIngrese x2: ");
	scanf("%d", &x_2);
	
	printf("\nIngrese y2: ");
	scanf("%d", &y_2);
	
	v1 = ((pow((*m_1)+10, 2))+(pow((*n_1)-10, 2)));
	v1 = pow(v1, 0.5);
	
	v2 = ((pow((*m_2)+10, 2))+(pow((*n_2)-10, 2)));
	v2 = pow(v2, 0.5);	
	
	if(v1<v2){
		
		printf("\nEl punto (x1, y1) es mas cercano al (-10, 10) que el (x2, y2)\n");
		
	}
	
	else if(v1==v2){
		
		printf("\nEl punto (x1, y1) esta a la misma distancia del punto (-10, 10) que el (x2, y2)\n");
		
	}
	
	
	else{
		
		printf("\nEl punto (x2, y2) es mas cercano al (-10, 10) que el (x1, y1)\n");	
		
	}
	
	b1 = pow(*m_1, 2);
	b2 = pow(*m_2, 2);
	
	if(b1<b2){
		
		printf("\nEl punto (x1, y1) es mas cercano al eje y que el (x2, y2)\n");
		
	}
	
	else if(b1==b2){
		
		printf("\nEl punto (x1, y1) esta a la misma distancia del eje y que el (x2, y2)\n");
		
	}
	
	else{
		
		printf("\nEl punto (x2, y2) es mas cercano al eje y que el (x1, y1)\n");	
		
	}
	
	k1 = pow(*n_1, 2);
	k2 = pow(*n_2, 2);
	
	if(k1<k2){
		
		printf("\nEl punto (x1, y1) es mas cercano al eje x que el (x2, y2)\n");
		
	}
	
	else if(k1==k2){
		
		printf("\nEl punto (x1, y1) esta a la misma distancia del eje x que el (x2, y2)\n");
		
	}
	
	else{
		
		printf("\nEl punto (x2, y2) es mas cercano al eje x que el (x1, y1)\n");	
		
	}
	
}





