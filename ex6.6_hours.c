#include <stdio.h>

int main(){

	char line[100];
	float horas;
	float salario;
	float horas_extra;
	float pago;

	printf("Escriba la cantidad de horas trabajadas; ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &horas);

	printf("Escriba el salario: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &salario);

	if (horas > 40.0) {
		horas_extra = (horas - 40.0) * 1.5;
		horas = 40.0;
		pago = (horas * salario) + (horas_extra * salario);
	} else {
		pago = horas * salario;
	}


	printf("Pago: $%0.2\n", pago);

	return 0;
}
