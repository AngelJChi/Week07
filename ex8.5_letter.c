#include <stdio.h>

int main(){

	char letra;

	printf("Escriba una letra: \n");
	scanf("%c", &letra);

	if (	letra == 'a' || letra == 'A' ||
		letra == 'e' || letra == 'E' ||
		letra == 'i' || letra == 'I' ||
		letra == 'o' || letra == 'O' ||
		letra == 'a' || letra == 'U') {
		printf("Es una vocal\n");
	else
		printf("No es una vocal\n");
	getch();

	return 0;
}
