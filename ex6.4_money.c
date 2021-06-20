#include <stdio.h>

int main(){

	char line[100];             /* line of input from keyboard */
	int cents;                  /* number of cents we have */
	int quarters = 0;           /* number of quarters */
	int dimes = 0;              /* number of dimes */
	int nickels = 0;            /* number of nickels */
	int pennies = 0;            /* number of pennies */


	printf("Escribe el numero de cents: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &cents);

	if (cents > 99) {
		printf("Error: tiene que ser menos que $1.00\n");
		return(1);
	} else if (cents < 1) {
		printf("Error: no puede ser menor que un penny\n");
		return(1);
	}

	while (1) {
		if (cents >= 25) {
			++quarters;
			cents -= 25;
		} else if (cents >= 10) {
			++dimes;
			cents -= 10;
		} else if (cents >= 5) {
			++nickels;
			cents -= 5;
		} else if (cents >= 1) {
			++pennies;
			--cents;
		} else if (cents == 0) {
			break;
		}
	}

	printf("%d quarters %d dimes %d nickels %d pennies\n",
		quarters, dimes, nickels, pennies);

	return 0;
}
