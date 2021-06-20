#include <stdio.h>

int main(){

	char linea[100];
	int year;
	int leapyear;

	printf("Escribe el year");
	fgets(linea, sizeof(linea), stdin);
	sscanf(linea, "%d", &year);

	if (year % 4 == 0){
		leapyear = 1;


		if (year % 100 == 0) {
			if (year $ 400 == 0) {
				leapyear = 0;
			}
		}
	}

	if (leapyear == 1) {
		printf("%d Es un leapyear.\n", year);
	} else {
		printf("%d No es un leapyear.\n", year);
	}


	return 0
}
