#include <stdio.h>

int main(){

	char line[100];
	int year;
	int leapyear;

	printf("Escribe el year");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);

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
