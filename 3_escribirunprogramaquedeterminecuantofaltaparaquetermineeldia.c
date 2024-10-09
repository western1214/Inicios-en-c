#include <stdio.h>

int main(int argc, char *argv[]) {
	int ha,ma,sa,ht,mt,st,hf,mf,sf; //Determinaremos la variable hora actual, ma,sa, y horas total,mt,st
	printf("Dame la hora actual en formato 24hrs: ");
		scanf("%d",&ha);
		printf("Dame los minutos actuales: ");
		scanf("%d",&ma);
		printf("Dame los segundos actuales:  ");
		scanf("%d",&sa);						// Pediremos la hora actual en la que se encuentra: se puede hacer en solo dos lineas
		
	ht=24;
	mt=60;
	st=60; // asignaremos el valor a nuestras variables
	if(ha>24 || ma>=60 || sa>=60){ //Pondremos una condicion por si escriben algun numero mayor a alguno de estos
		printf("los valores asignados son incorrectos");
	} else{ 
		if (ha>24 && ma>0 && sa>0){ //Esta condicion es en caso de que quieran poner mas de 24 hrs en punto
			printf("los valores asignados son incorrectos");
		} else{ 
			if(ma==0){ //estableceremos lo siguiente para que al restar no tengamos problemas
				mt=00;
			}
			if(sa==0){
				st=00;
			}
			if(ha==0){
				ht=23;
			}
			hf=ht-ha;
			mf=mt-ma;
			sf=st-sa;
			if(sf<0){  // si los segundos son menor a los segundos le restaremos al minuto 1
				mf=mf-1;
					sf=sf-59;
			}
			if(mf<0){
				hf=hf-1;
				mf=mf+59;
			}
			if(sf== 0 && mf== 0){//todo desde aqui eesto es gusto personal para que al momento de escribir nos lo de bonito, puede saltarlo
				printf("%d:00:00", hf); 
			} else if(sf==0){
				printf("%d:%d:00", hf, mf);
			} else if(mf==0){
					printf("%d:00:%d", hf, sf); // esto es para agregarle 2 0 en caso de estar en 0
				} else if(sf<10 && mf<10){ //esto de aqui es para agregarle un 0 en caso de tener solo un digito 
					printf("%d:0%d:%d", hf, mf, sf); 
					}else if(sf<10){
							printf("%d:%d:0%d", hf, mf, sf);
						}else if(mf<10){
								printf("%d:0%d:%d", hf, mf, sf);
							}else
							   printf("faltan en total: %d:%d:%d", hf, mf, sf); 
						
					
				}
			}
		
	
	return 0;
	}

