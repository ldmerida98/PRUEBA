#include <stdio.h>	
#include <time.h>
#include <stdlib.h>

int main() {//Daniel
	system("color 40");
	int anio, febrero;
	int opcion=1, dias_mes, dia=1, mes=1;
  
  time_t fecha; //*Inicia Daniel =)
	struct tm *ahora;
	time(&fecha); 
	ahora=localtime(&fecha); 
	dia=ahora->tm_mday;
	mes=ahora->tm_mon+1; 
	anio = (ahora->tm_year)+1900; 
	system ("cls");
	printf("\t\t\t--------------------CALENDARIO--------------------\n\n");
	printf(" > La fecha de hoy es: %d/%d/%d \n\n\n",dia,mes,anio);
		while (opcion != 0) 
	{
			if (mes==2) 
	{
		if (anio%4==0) 
		{
			febrero=29; 
		}
		else
		{
			febrero=28; 
		}
	}	
	switch (mes)
	{
	
		case 4: case 6: case 9: case 11: 
		dias_mes=30; 
		break; 
		case 2: 
		dias_mes=febrero; 
		break; 
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		dias_mes=31; 
		break; 
		default:
		printf("\t\tERROR");
		break;
	}
