#include <stdio.h>

int main(){


	int i,n,sum=0,numeros;
	float promedio;

	printf("\nEscriba cuantos numeros quiere\n");
	scanf("%d",&n);

	printf("Escriba los numeros uno por uno\n\n");
	for(i=0;i<n;++i) {
		scanf("%d",&numeros);
		sum = sum +numeros;
	}

	promedio = sum/n;


	printf("\nEl promedio de %d numeros es = %.2f",n, promedio);

	return 0;
}
