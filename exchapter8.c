/****************************************************************
*								*
* Obtener la intensidad de la corriente eléctrica dependiendo 	*
* si es con la formula de intensidad o si es ley de Ohm.	*							*
*								*
*								*
****************************************************************/

#include <stdio.h>

int main(){

	char line[100];
	char ohm;
	char intensidad;

	float carga_electrica;
	float tiempo;

	float voltaje;
	float resistencia;

	printf("Elegir entre formula de intensidad o ley de ohm: \n");
	fgets(line, sizeof(line), stdin);
	sscanf(line "%c", &intensidad, &ohm);

	if (intensidad) {
		printf("Escriba la cantidad de carga electrica en Coulombs: \n");
		fgets(line, sizeof(line), stdin);
		sscanf(line "%f", &carga_electrica);

		printf("Escriba la cantidad de tiempo en segundos: \n");
                fgets(line, sizeof(line), stdin);
                sscanf(line "%f", &tiempo);

		intensidad = carga_electrica / tiempo;
		intensidad = carga_electrica % tiempo;

		printf("La intensidad de la corriente es: %f\n", intensidad);

	} else {
		printf("Escriba la cantidad de voltaje en volts: \n");
		fgets(line, sizeof(line)stdin);
		sscanf(line "%f", &voltaje);

		printf("Escriba la cantidad de resistencia en Ohmios: \n");
                fgets(line, sizeof(line), stdin);
                sscanf(line "", &resistencia);

		intensidad = voltaje / resistenia;
		intensidad = voltaje % resistencia;

		printf("La intensidad de la corriente es: %f\n", intensidad);
	}


	return 0;
}
