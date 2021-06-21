#include <stdio.h>

int main(){

	const float MILLAS_A_KILOMETROS  = 1.6093;
	const float GALON_A_LITROS    = 3.7854;
	const float PULGADAS_A_CENTIMETROS = 2.54;
	const float PIES_A_METROS      = 0.3048;

	char linea[100];
	char tipode_unidad;
	float valor_unidad;
	float resultado;

	while (1) {

		
		tipode_unidad = '\0';
		valor_unidad = 0.0;

		
		printf("\n(m:millas g:galones p:pulgadas f:pies s:salida)\n");
		printf("Escribe el tipo de unidad y valor: ");
		fgets(linea, sizeof(linea), stdin);
		sscanf(linea, "%c %f", &tipode_unidad, &valor_unidad);

		
		if ((tipode_unidad == 's') || (tipode_unidad == 'S')) {
			printf("Adios!\n");
			return 0;
		}

		
		if (tipode_unidad == 'm') {
			resultado = valor_unidad * MILLAS_A_KILOMETROS;
			printf("%f millas = %f kilometros\n", valor_unidad, resultado);
		} else if (tipode_unidad == 'g') {
			resultado = valor_unidad * GALONES_A_LITROS;
			printf("%f galones = %f litros\n", valor_unidad, resultado);
		} else if (tipode_unidad == 'p') {
			resultado = valor_unidad * PULGADAS_A_CENTIMETROS;
			printf("%f pulgadas = %f centimetros\n", valor_unidad, resultado);
		} else if (tipode_unidad == 'f') {
			resultado = valor_unidad * PIES_A_METROS;
			printf("%f pies = %f metros\n", valor_unidad, resultado);
		} else {
			printf("Error: Conversion desconocida\n");
			continue;
		}
	}

	return 0;
}

