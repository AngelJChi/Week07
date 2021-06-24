#include <stdio.h>
#undef DEBUG


int main(){

	char line[100];

	float cantidad;
	float impuesto;

	float total;

	const float tasa_impuesto = 0.08;

	while (1){

		printf("\nEscriba la cantidad o 0 para salir: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%f", &cantidad);

		if (cantidad == 0.0) {
			printf("Saliendo.\n");
			return 0;
		}

		impuesto = cantidad * tasa_impuesto;
		total = cantidad + impuesto;

		printf("DEBUG:main(); la cantidad es %f\n", cantidad);
		printf("DEBUG:main(): el impuesto es %f\n", impuesto);
		printf("DEBUG:main(): el total es %f\n", total);

		printf("El total es %0.2\n", total);

	}

	return 0;
}
