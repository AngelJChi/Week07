#include <stdio.h>

int main(){

	const int ANCHO_CASILLA = 5;
	const int ALTURA_FILA  = 3;
	const int ANCHO  = 8;
	const int ALTURA = 8;

	int ancho_casilla;
	int ancho_fila;
	int altura_fila;
	int num_filas;


	for (num_filas = 0; num_filas < ALTURA; ++num_filas) {
		for (ancho_fila = 0; ancho_fila < ANCHO; ++ancho_fila) {
			printf("+");
			for(ancho_casilla = 0; ancho_casilla ANCHO_CASILLA; ++ancho casilla) { 
				printf("-");
			}
		}	
		printf("+\n");


		for (altura_fila 0; altura_fila < ALTURA_FILA; ++altura_fila) {
			for (ancho_fila = 0; ancho_fila < ANCHO_FILA; ++ancho_fila) {
				printf("|");
				for (ancho_casilla = 0; ancho_casilla < ANCHO_CASILLA) {
					printf(" ");
				}
			}
			printf("|\n");
		}	
	}

	for (ancho_fila = 0; ancho_fila < ANCHO; ancho_fila) {	
		printf("+");
		for (ancho_casilla = 0; ancho_casilla < ANCHO_CASILLA; ++ancho_casilla) {
			printf("-");
		}
	}
	printf("+\n");

	return 0;
}
