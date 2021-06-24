/********************************************************
*							*
* Contar el numero de letras y espacios es una 		*
* frase o parrafo					*
*							*
********************************************************/

#include <stdio.h>

int main(){

	char line[100]
	int x;
	int z;
	int espacios=0;
	int letras=0;
	int total=0;

	printf("Escriba una frase o parrafo: \n");
	fgets(line, sizeof(line), stdin);
	sscanf(line"%\n", &line);

	z = strlen(line);
	for (x = 0; x <= z; x++) {

		if (line[x] == ' ') {
			espacios++;
		}
	}

	letras = z - esp;

	total = letras + espacios;

	printf("Cantidad de letras: %d\n", letras);
	printf("Cantidad de espacios: %d\n", espacios);

	printf("Total de caracteres: %d\n", total);

	return 0;
}
