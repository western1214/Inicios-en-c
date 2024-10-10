#include <stdio.h>

int main(int argc, char *argv[]) {
	int mes, anio, dias, bisiesto;
	bisiesto=0;
		
	printf("Introduce el mes (1-12): ");
	scanf("%d", &mes);
	
	printf("Introduce el año: ");
	scanf("%d", &anio);
	if (anio % 4 == 0) {
		if (anio % 100 == 0) {
			if (anio % 400 == 0) {
				bisiesto = 1;  
			}
		} else {
		bisiesto= 1;
		}
	}
	
	if (mes < 1 || mes > 12) {
		printf("Mes inválido. Debe estar entre 1 y 12.\n");
	} else {
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
			dias = 31;
		} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
			dias = 30;
		} else if (mes == 2) {
			if (bisiesto==1) {
				dias = 29;
			} else {
				dias = 28;
			}
		}
		printf("El mes %d del año %d tiene %d días.\n", mes, anio, dias);
	}
	return 0;
}

