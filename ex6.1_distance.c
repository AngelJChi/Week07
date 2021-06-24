#include <stdio.h>

int main(){

	char line[100];
	float distancia;
	float cuadrado;
	float raiz_cuadrada;
	

	printf("Escribe la distancia: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &distancia);

	cuadrado = distancia * distancia;
	printf("El cuadrado de la distancia es: %f\n", cuadrado);

	raiz_cuadrada = sqrtf(cuadrado);
	printf("La raiz cuadrada del resultado anterior es: %f\n", raiz_cuadrada);

	return 0
}
