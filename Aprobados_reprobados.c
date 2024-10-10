#include <stdio.h>
//Juan Elias Antonio Ramirez
// octubre 2024
void llenarvector(float c[]) {
	int i;  //
	
	
	for(i=0;i<10;i++){
		printf("Dame la calificacion %d ", i);
		scanf("%f", &c[i]);
	}
}

float CalcularPromedio(float c[]){
	float suma=0,p;
		int i;
	for (i=0;i<10;i++){
		suma=suma+c[i];
	}
	p=suma/10;
	return p;
}
	void nmayoresmenores(float c[], float p, int *nmay, int *nmen){
		int i;
			*nmay= 0;
			*nmen= 0;
			for(i=0;i<10;i++){
			if(c[i]>p){
				*nmay= *nmay +1;
			}else{
				*nmen= *nmen + 1;
			}
		}
	}
		
		
	
int main(int argc, char *argv[]) {
	float calif[10], prom;
	int nmay,nmen;
	llenarvector(calif);
	prom=CalcularPromedio(calif);
		printf("El promedio general es: %.1f\n", prom); //f es para flotantes
	nmayoresmenores(calif,prom, &nmay, &nmen);
		printf("mayores: %d\n", nmay);
		printf("mayores: %d", nmen);
	return 0;
}

