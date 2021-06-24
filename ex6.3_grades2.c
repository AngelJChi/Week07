#include <stdio.h>

int main(){

	int porcentaje_correcto;
	char calificacion;
	char modificador;
	char line[100];

	printf("Escriba el porcentaje correcto: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &porcentaje_correcto);

	modificador = '';

	if (porcentaje_correcto > 100) {
		printf("Error: fuera de los limites\n");
		return 1;
	} else if (porcentaje correcto < 0) {
		printf("Error: fuera de los limites\n");
		return 1;
	} else if (porcentaje_correcto > 91) {
		calificaion = 'A';
		if (porcentaje_correcto >= 98) {
			modificador = '+';
		} else if (porcentaje_correcto <= 93) {
			modificador = '-';
		}
	} else if (porcentaje_correcto >= 81) {
		calificacion = 'B';
		if (porcentaje_correcto >= 88) {
			modificador = '+';
		} else if (porcentaje_correcto <=83) {
			modificador = '-';
		}
	} else if (porcecntaje_correcto >= 71) {
		calififcacion = 'C';
		if (porcentaje_correcto >= 78) {
			modificador = '+'
		} else if (porcentaje_correcto <= 73) {
			modificador = '-';
		}
	} else if (porcentaje_correcto >= 61) {
		calificacion = 'D';
		if (pocentaje_correcto >= 68) {
			modificador = '+';
		} else if (porcentaje_correcto <= 63) {
			modificador = '-';
		}
	} else {
		calificacion = 'F';
	}

	printf("La calificacion es %c%c\n", calificacion, modificador);

	return 0;
}
