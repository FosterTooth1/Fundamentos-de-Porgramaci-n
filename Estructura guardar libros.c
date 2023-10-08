#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	
	char titulo[50];
	char autor[50];
	int fecha;
	int paginas;
	
}libro;



int main(){

int x, y=0;
	
	libro v[50];
	
	do{
	
	printf("\nBienvenido al menu!\n");	
	
	printf("\n1.Registre un libro\n");	
	printf("\n2.Observar libros registrados\n");		
	printf("\n3.Salir\n");
	
	printf("\nEliga una opcion:\n");	
	scanf("%d", &x);
	getchar();
	
	switch(x){
		
		case 1: 
		
		fflush(stdin);
		
		printf("\nEscriba el nombre del libro:\n");
		gets(v[y].titulo);
		
		printf("\nEscriba el nombre del autor:\n");
		gets(v[y].autor);
		
		printf("\nEscriba el ano de publicacion del libro:\n");
		scanf("%d",&v[y].fecha);
		
		printf("\nEscriba la cantidad de paginas que tiene:\n");
		scanf("%d",&v[y].paginas);
		
		printf("\nSu libro se registro correctamente!\n");
		
		y++;	
		
		break;
		
		case 2:
		
		printf("\nSe tienen registrados %d libros con los siguientes datos\n", y);
		
		for(int i=0; i<y; i++){
			
		printf("\n\nNombre del libro: %s\n",v[i].titulo);	
		printf("Nombre del autor: %s\n",v[i].autor);	
		printf("Ano de publicacion: %d\n",v[i].fecha);	
		printf("Numero de paginas: %d\n",v[i].paginas);	
			
		}	
		
		break;
		
		case 3:
		
		break;
		
		default: 
		
		printf("\nSelecciono una opcion incorrecta\n");
		
		break;
		
	}
		
		
	}while(x!=3); 
	
	
	
	
	
	return 0;
}