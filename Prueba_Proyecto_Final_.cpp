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

		switch(mes)
		{	
		case 1: 
		printf("\n\t\t----------ENERO------------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 2:
		printf("\n\t\t----------FEBRERO----------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 3:
		printf("\n\t\t-----------MARZO-----------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 4:
		printf("\n\t\t-----------ABRIL-----------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 5:
		printf("\n\t\t-----------MAYO------------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 6:
		printf("\n\t\t----------JUNIO------------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 7:
		printf("\n\t\t----------JULIO------------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 8:
		printf("\n\t\t----------AGOSTO-----------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 9:
		printf("\n\t\t--------SEPTIEMBRE---------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 10:
		printf("\n\t\t----------OCTUBRE----------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 11:
		printf("\n\t\t---------NOVIEMBRE---------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		case 12:
		printf("\n\t\t--------DICIEMBRE----------\n");
		printf("\t\t\t   %i\n", anio);
		break;
		default:
		printf("\t\tNO EXISTE MES %i", mes);
		break;
		return 0;
	}
if (mes<=12) 
	{
		printf("\t\tDom Lun Mar Mie Jue Vie Sab\n\t\t"); 
	} 
	int cong = congruencia(anio, mes,1); 
	for (int i = 0; i < cong; i++)
	{
		printf("    "); 
	}
for (int dia=1; dia<=dias_mes; dia++) 
{
	if (dia<10)
	{
		printf("%i   ", dia); 
	}
	else
	{
		printf("%i  ", dia); 
	}
	cong++;
	if (cong%7==0) 
	{
		printf("\n\t\t"); 
	}
}
printf("\n\n%cQui%cres buscar otra fecha? \n ", 168, 130);
printf("\t0 = NO 1 = SI\t> "); 
scanf("%d",&opcion); 

while (opcion<0 || opcion>1) 
{
	printf("\t");
}
if (opcion == 1)
	{
		printf("\n\t> %cQu%c mes buscas? ", 168, 130); 
		scanf("%d",&mes);
		printf ("\n\t> %cDe qu%c a%co? ", 168, 130, 164); 
		scanf("%d",&anio);
	        system("cls"); 
		printf("\t\t\t--------------------CALENDARIO--------------------\n\n");
