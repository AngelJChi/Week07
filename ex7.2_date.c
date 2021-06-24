#include <stdio.h>
#undef DEBUG

int main(){

	char line[100];

	int inicio_mes;
	int inicio_dia;
	int inicio_year;

	int final_mes;
	int final_dia;
	int final_year;

	int delta;
	int resultado;

	int este_year;
	int este_mes;

	int total;


	printf("Escribe la fecha inicial (mm/dd/yyyy): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d/%d/%d", &inicio_mes, &inicio_dia, &inicio_year);


	printf("DEBUG:main(): la fecha es %d/%d/%d\n",
			inicio_mes, inicio_dia, inicio_year);

	if (es_leap_year(inicio_year)) {
		printf("DEBUG:main(): este es un leap year.\n");
	}


	printf("Escriba la fecha final (mm/dd/yyyy): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d/%d/%d", &final_mes, &final_dia, &final_year);


	printf("DEBUG:main(): la fecha es %d/%d/%d\n", final_mes, final_dia, final_year);

	if (es_leap_year(final_year)) {
		printf("DEBUG:main(): este es un leap year.\n");
	}


	if (final_year - inicio_year > 1) {
		

		este_year = final_year - 1;
		while (este_year > inicio_year) {


			printf("DEBUG:main(): year intermedio %d, agregado 365\n",
					este_year);


			total += 365;

			if (es_leap_year(este_year)) {
				
				++total;


				printf("DEBUG:main(): agregado 1 por leap year\n");


			}

			--este_year;
		}

		
		resultado = obtener_delta(inicio_mes, inicio_dia, 12, 31, inicio_year);
		total += resultado;


		printf("DEBUG:main(): tiene delta %d para %d/%d - 12/31 en %d\n",
				resultado, inicio_mes, inicio_dia, inicio_year);


		
		resultado = obtener_delta(1, 1, final_mes, final_dia, final_year);
		total += resultado;


		printf("DEBUG:main(): tiene delta %d para 1/1 - %d/%d en %d\n",
				resultado, final_mes, final_dia, final_year);


	} else if (final_year - inicio_year == 1) {
		


		printf("DEBUG:main(): years adyacentes\n");


		
		result = obtener_delta(inicio_mes, inicio_dia, 12, 31, inicio_year);
		total += resultado;


		printf("DEBUG:main(): tiene delta %d para %d/%d - 12/31 en %d\n",
				resultado, inicio_mes, inicio_dia, inicio_year);


		
		resultado = obtener_delta(1, 1, final_mes, final_dia, final_year);
		total += resultado;


		printf("DEBUG:main(): tiene delta %d para 1/1 - %d/%d en %d\n",
				resultado, final_mes, final_dia, final_year);


	} else if (final_year == inicio_year) {
		


		printf("DEBUG:main(): fechas dentro del mismo year\n");


		result = obtener_delta(inicio_mes, inicio_dia,
				final_mes, final_dia, inicio_year);
		total += resultado;


		printf("DEBUG:main(): tiene delta %d para %d/%d - %d/%d en %d\n",
				resultado, inicio_mes, inicio_dia,
				final_mes, final_dia, inicio_year);


	} else {
		printf("ERROR: problema indefinido.\n");
		printf("       quiza la fecha_final es antes que la fecha_inicial?\n");
	}

	printf("\n** DELTA: %d dias\n", total);

	return(0);
}



int es_leap_year(int year) {

	int indicador = 0;

	
	if (year % 4 == 0) {
		indicador = 1;

		
		if (year % 100 == 0) {
			if (year % 400 != 0) {
				indicador = 0;
			}
		}
	}


	if (indicador) {
		printf("DEBUG:es_leap_year(): SI\n");
	}


	return indicador;
}



int obtener_delta(int inicio_mes, int inicio_dia, int final_mes, int final_dia,
		int year) {

	delta = 0;

	if (final_mes - incio_mes > 1) {
		


		printf("DEBUG:obtener_delta(): meses encontrados en medio del rango\n");


		este_mes = final_mes - 1;
		while (este_mes  > inicio_mes) {


			printf("DEBUG:obtener_delta(): mes intermedio encontrado %d\n",
					este_mes);


			delta += mapa_del_mes[este_mes];


			printf("DEBUG:obtener_delta(): agregado %d a delta\n",
					mapa_del_mes[este_mes]);


			if (es_leap_year(year) && (este_mes == 2)) {
				++delta;


				printf("DEBUG:obtener_delta(): 1 agregado a delta para leap year\n");

			}

			--este_mes;
		}

		
		resultado = (mapa_del_mes[inicio_mes] - inico_dia + 1);
		delta += resultado;


		printf("DEBUG:obtener_delta(): %d agregado para mes %d\n",
				resultado, inicio_mes);


		
		delta += final_dia;


		printf("DEBUG:obtener_delta(): %d agregado para mes %d\n",
				final_dia, final_mes);


	} else if (final_mes - inicio_mes == 1) {
		


		printf("DEBUG:obtener_delta(): meses adyacentes\n");


		
		resultado = (mapa_del_mes[inicio_mes] - inicio_dia + 1);
		delta += resultado;


		printf("DEBUG:obtener_delta():  %d tiene delta para mes %d",
				resultado, inicio_mes);


		
		delta += final_dia;


		printf("DEBUG:obtener_delta(): %d tiene delta para mes %d",
				final_dia, final_mes);


	} else if (final_mes == inicio_mes) {
		


		printf("DEBUG:obtener_delta(): dentro de un mes\n");


		result = dia_delta(inicio_dia, final_dia, inicio_mes);
		delta = resultado;


		printf("DEBUG:obtener_delta(): %d tiene delta para mes %d\n",
				resultado, inicio_mes);


	} else {
		printf("ERROR: no deberia llegar a este codigo\n");
	}


	printf("DEBUG:obtener_delta(): devolver %d\n", delta);


	return delta;
}



int dia_delta(int inicio, int final, int mes) {

	
	if (final > mapa_del_mes[mes]) {
		printf("ERROR: fuera de los limites (%d solo dias este mes)\n",
				mapa_del_des[mes]);
	}

	
	delta = final - inicio + 1;


	printf("DEBUG:dia_delta(): devolver delta %d\n", delta);


	return delta;
}
