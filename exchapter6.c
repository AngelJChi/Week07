/****************************************************************
*								*
*Elegir saber la cantidad de horas en una cantidad de dias	*
*o la cantidad de dias en una cantidad de horas dadas.		*
*								*
*								*
*****************************************************************/


#include <stdio.h>

int main(){

	char line[100];
	float dias;
	float horas;


	printf("Elegir entre saber la cantidad de horas o dias: \n");
	fgets();
	sscanf(line, "%f %f", &horas, &dias);


	if (horas) {
		pritf("\nEscriba la cantidad de dias: \n");
		fgets(line, sizeof(line), stdin)
		sscanf(line,"%f", &dias)

		horas = dias * 24;

		printf("%f es la cantidad de horas\n", horas);


	} else {
		printf("\nEscriba la cantidad de horas: \n");
		fgets(line, sizeof(line), stdin):
		sscanf(line, "%f", &horas);


		dias = horas / 24;
		dias = horas % 24;

		printf("%f es la cantidad de dias\n", dias);
	}

	return 0;
}
