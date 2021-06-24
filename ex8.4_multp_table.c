#include <stdio.h>

int main(){

	char line[100];
	char seguir;
	int i, numero;

	
	printf( "\n   Introduzca un numero entero: \n" );
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &numero );

	printf( "\n   La tabla de multiplicar del %d es: \n", numero );



	for ( i = 1 ; i <= 10 ; i++ ) {
		printf( "\n   %d * %d = %d", i, numero, i * numero );
	}

	return 0;
}
