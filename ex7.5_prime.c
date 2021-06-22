#include <stdio.h>

int main(){

	char linea[100];

	int numero;
	int factor;
	int ultimo_factor;

	int resultado;

	
	printf("Escriba un numero: ");
	fgets(linea, sizeof(linea), stdin);
	sscanf(linea, "%d", &numero);

	factor = 2;
	ultimo_factor = numero - 1;

	while (factor < ultimo_factor) {
		resultado = numero % factor;
		if (resultado == 0) {
			resultado = numero / factor;
			printf("%d no es primo (%d * %d)\n", numero, factor, ultimo_factor);
			return 0;
		}
		++factor;
	}

	printf("%d es un numero primo.\n", numero);

	return 0;
}
