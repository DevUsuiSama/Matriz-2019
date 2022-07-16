#include <stdio.h>

int matriz[2][3];
int matriz2[2][3];
int fila,columna;


int main(){
	for(fila=0;fila<2;fila++){
		for(columna=0;columna<3;columna++){
			printf("Ingrese el valor de boletos disponibles para el vuelo %i y destino %i: ",fila+1,columna+1);
			scanf("%i",&matriz[fila][columna]);
		}
	}
	for(fila=0;fila<2;fila++){
		for(columna=0;columna<3;columna++){
			printf("Ingrese el valor correspondiente al vuelo y destino que usted eligio: ");
			scanf("%i",&matriz2[fila][columna]);
			}
	}
	
	printf("\n\n");
	for(fila=0;fila<2;fila++){
		for(columna=0;columna<3;columna++){
			printf("%i",matriz[fila][columna]);	
		}
	printf("\n");
	}
	printf("\n");
	for(fila=0;fila<2;fila++){
		for(columna=0;columna<3;columna++){
			printf("%i",matriz2[fila][columna]);
			
		}
	printf("\n");	
	}
	printf("\n");
	
	for(fila=0;fila<2;fila++){
		for(columna=0;columna<3;columna++){
			if(matriz[fila][columna]<matriz2[fila][columna]){
				printf("Vuelo/s Rechazado/s - ");
				printf("Quedan %i pasajes del vuelo %i destino %i \n",matriz[fila][columna]-matriz2[fila][columna],fila,columna);
			}
			else{
				printf("Vuelo/s Aceptado/s - ");
				printf("Quedan %i pasajes del vuelo %i destino %i \n",matriz[fila][columna]-matriz2[fila][columna],fila,columna);
			}
		}
	}
	
	
	
	system("pause");
	return 0;
}
