#include <stdio.h>

int main(){

	char linea[100];
	float horas;
	float salario;
	float horas_extra;
	float pago;

	printf("Escriba la cantidad de horas trabajadas; ");
	fgets(linea, sizeof(linea), stdin);
	sscanf(linea, "%f", &horas);

	printf("Escriba el salario: ");
	fgets(linea sizeof(linea), stdin);
	sscanf(linea, "%f", &salario);

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
