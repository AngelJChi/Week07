#include <stdio.h>

int main(){

        int numero;
        char palabra;

	int decenas;
	int ultimos_digitos;


	for (numero = 0; numer0 <= 100; ++numero) {
        

	if (numero < 20) {
        	switch (numero) {
                	case 0 : printf("\n zero");
	                        break;
        	       	case 1 : printf("\n one");
               		        break;
                	case 2 : printf("\n two");
                       		break;
                	case 3 : printf("\n three");
                        	break;
                	case 4 : printf("\n four");
                        	break;
                	case 5 : printf("\n five");
                	        break;
                	case 6 : printf("\n six");
                        	break;
	                case 7 : printf("\n seven");
				break;
        	        case 8 : printf("\n eight");
                        	break;
               		case 9 : printf("\n nine");
                        	break;
			case 10: printf("\n ten");
                        	break;
                        case 11 : printf("\n eleven");
	                        break;
                        case 12 : printf("\n twelve");
        	                break;
                        case 13 : printf("\n thirteen");
                	        break;
                        case 14 : printf("\n fourteen");
	                        break;
                        case 15 : printf("\n fifteen");
        	                break;
                        case 16 : printf("\n sixteen");
                	        break;
                        case 17 : printf("\n seventeen");
	                        break;
                        case 18 : printf("\n eighteen");
        	                break;
                        case 19 : printf("\n nineteen");
                	        break;
		}
	} else if (numero == 100) {
		printf("cien!")

	} else {
		decenas = numero / 10;
		ultimos_digitos = numero % 10;

		switch (decenas) {
                        case '2' : printf("\n twenty");
        	                break;
                        case '3' : printf("\n thirty");
	                        break;
                        case '4' : printf("\n forty");
        	                break;
                        case '5' : printf("\n fifty");
                	        break;
                        case '6' : printf("\n sixty");
	                        break;
                        case '7' : printf("\n seventy");
        	                break;
                        case '8' : printf("\n eighty");
                	        break;
                        case '9' : printf("\n ninety");
                        	break;
		}

		switch (ultimos_digitos) {
                        case '1' : printf("\n -one");
	                        break;
                        case '2' : printf("\n -two");
                        	break;
                        case '3' : printf("\n -three");
                	        break;
                        case '4' : printf("\n -four");
        	                break;
                        case '5' : printf("\n -five");
	                        break;
                        case '6' : printf("\n -six");
                        	break;
                        case '7' : printf("\n -seven");
                	        break;
                        case '8' : printf("\n -eight");
        	                break;
                        case '9' : printf("\n -nine");
	                        break;
		}
	}

	printf("\n");


        return 0;
}
