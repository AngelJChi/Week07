#include <stdio.h>

int main(){

	char linea[100];
	float resistencia_actual;
	float resistencia_total;

	while () {

		printf("Escriba la resistencia en Ohms: ");
		fgets(linea, sizeof(linea), stdin);
		sscanf(linea, "%f", &resistencia_actual);

		if (resistencia_actual == 0){
			printf("Resultado: %0.04f\n", 1.0 / resistencia_total);
			return 0;
		}

		resistencia_total += 1.0 / resistencia_actual;
	}

	return 0;
}
