#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1, n2 , n3, mn, mx, mt; // determinaremos las variables, minimo, maximo y medio
	printf("Dame tu primer numero: ");
	scanf("%d",&n1);
	mx= n1 ;// Ya que es nuestro primer numero lo determinaremos como el mayor 
		printf("Dame el segundo numero: ");
		scanf("%d", &n2);
	if (n2>mx) { //Le decimos que nos indique cal de los dos es mayor 
		mt=mx;
		mx=n2; // si n2 es mayor a el maximo (n1) este se volvera max y el anterior numero sera el medio
	}else{
		mt=n2; // si n2 es menor entonces a este se le asignara como el numero medio
	}
	printf("Dame tu tercer numero: ");
	scanf("%d", &n3);
	if(n3<mx){  //veremos si el tercer numero es menor que el maximo asignado acutalmente
		if(n3>mt){  // si es menor veremos si n3 es mayor al numero del medio asignado actualmente 
		mn=mt; 
			mt=n3;
	}else{ 
			mn=n3;
		}
	}else{  // si este es mayor lo asignaremos como el mayor numero y recorreremos los demas 
		mn=mt;
		mt=mx;
		mx=n3;
		
	}
	printf("Se ordena de la siguiente manera:  %d, %d, %d\n", mn, mt, mx); //imprimiremos en el orden que querramos 
	return 0;
}

