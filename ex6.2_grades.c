#include <stdio.h>

int main(){

	float porcentaje_correcto;
	char calificacion;
	char linea[100];

	printf("Escribre el porcentaje correcto: ");
	fgets(linea, sizeof(linea), stdin);
	sscanf(linea, "%f", &porcentaje_correcto);

	if (porcentaje_correcto >= 91.0) {
		calificacion = 'A';
	} else if (porcentaje_correcto >= 81.0) {
		calificacion = 'B';
	} else if (porcentaje_correcto >= 71.0) {
		calificacion = 'C';
	} else if (porcentaje correcto >= 61.0) {
		calificacion = 'D';
	} else {
		calificacion = 'F';

	printf("La calificacion is %c\n", calificacion);

	return 0;
}
