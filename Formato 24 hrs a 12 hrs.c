#include<stdio.h>
#include<math.h>
//Flores Lara Alberto 1BV1
int main()
{
	int horas, horas_1, minutos, minutos_1;
	
	printf("Usando el formato de 24 horas, ingrese unicamente la cantidad de horas: ");
	scanf("%d", &horas);
	printf("Ahora los minutos: ");
	scanf("%d", &minutos);
	
	horas_1 = horas%12;
	minutos_1 = minutos + 1; 
	
	if(horas == 12){
		
			horas_1 = 12;
		}
	
	if(horas == 24){
		
			horas_1 = 00;
		}
	
	
	if(minutos_1 == 60){
		
		minutos_1 = 00;
	}
	
	if(minutos_1 == 60){
		
		horas_1 = horas_1 + 1;
	}
	
			if(horas_1 == 13){
		
			horas_1 = 1;
		}
		
			if(horas > 11.9){
		
				printf("La hora es: %d:%d pm \n", horas_1, minutos);
			}
			else{
				printf("La hora es: %d:%d am \n", horas_1, minutos);
			}
			if(horas > 11.9){
		
						printf("La hora en un minuto sera: %d:%d pm", horas_1, minutos_1);
						}
						else{
		
							printf("La hora en un minuto sera: %d:%d am", horas_1, minutos_1);
						}

	return 0;
}