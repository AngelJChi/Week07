#include <stdio.h>
#undef DEBUG

int main(){

	const int CPS = 960;

	const int MINUTO = 60;
	const int HORA = 60 * 60;
	const int DIA = 60 *60 * 24;

	int segundos_totales;

	int dias:
	int horas;
	int minutos;
	int segundos;

	char line[100];

	int tamaño_archivo;

	printf("Escriba el tamaño del archivo en bytes: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, %d, &tamaño_archivo);

	printf("DEBUG:main(): el tamaño_archivo es %d\n", tamaño_archivo);

	segundos_totales = tamaño_archivo / CPS;

	printf("DEBUG:main(): los segundos_totales son %d\n", segundos_totales);


	dias = segundos_totales / DIA;

	segundos_totales = segundos_totales % DIA;

	printf("DEBUG:main(): los dias son %d\n", dias);
	printf("DEBUG:main(): el resto es %d\n", segundos_totales);


	horas = segundos_totales / HORA;

	segundos_totales = segundos_totales % HORA;

	printf("DEBUG:main(): las horas son %d\n", horas);
	printf("DEBUG:main(): el resto es %d\n",segundos_totales);


	minutos = segundos_totales / MINUTO;

	segundos_totales = segundos_totales % MINUTO;

	printf("DEBUG:main(): los minutos son %d\n", minutos);
	printf("DEBUG:main(): los segundos son %d\n", segundos);


	printf("%d dias, %d horas, %d minutos, %segundos", dias, horas, minutos, segundos);


	return 0;
}
