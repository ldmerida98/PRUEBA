#include <stdio.h>	
#include <time.h>
#include <stdlib.h>

int congruencia(int a,int k, int d);
int main() {//Daniel
	system("color 40");
	int anio,;
	int opcion=1, dia=1, mes=1;
  
  time_t fecha; //*Inicia Daniel =)
	struct tm *ahora;
	time(&fecha); 
	ahora=localtime(&fecha); 
	dia=ahora->tm_mday;
	mes=ahora->tm_mon+1; 
	anio = (ahora->tm_year)+1900; 
