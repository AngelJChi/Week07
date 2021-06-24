#include <stdio.h>

int main(){

	char line[100];

	float valor;

	int pos = 0;
	int neg = 0;


	while (1) {

		printf("Escriba el valor o 0 para salir: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%f", &valor);

		if (valor == 0.0) {
			printf(" %d positivo visto, %d numeros negativos\n",
					pos, neg);
			return(0);
		}

		if (valor > 0.0) {
			++pos;
		} else if (valor < 0.0) {
			++neg;
		} else {
			printf("Error: no debe llegar aqui.\n");
			return(-1);
		}
	}

	return 0;
}
