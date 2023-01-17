#include <stdio.h>    
#include <stdlib.h>      
#include <string.h>   
#include <math.h>
#include "Functions.h"

int main(int argN, char ** ArgV[]){
	int m, n;
	MATRIZ A, ret;
	printf("Ingrese el número de variables: ");
	scanf("%d", &m);
	n = m + 1; 
	A = Lee(m,n);
	printf("\n\nSe ha ingresado:\n");
	Escribe(A);
	printf("\n\n");
	ret = GJ(A);
	if(determina(ret)){
		printf("La solución es:\n\n");
		sol(ret);	
	}else{
		printf("El sistema no tiene solución\n\n");
	}
	return 0;
}