#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <stdint.h>

typedef struct _matriz_{
  	int n, m;
  	double **A;
}MATRIZ;

MATRIZ Lee(int m,int n);
void Escribe(MATRIZ A);
MATRIZ GJ(MATRIZ A);


MATRIZ creaEspacioMatriz(int m, int n);
int liberaEspacioMatriz(MATRIZ *mat);

MATRIZ MatCoef(MATRIZ A);

MATRIZ GJ(MATRIZ a);
MATRIZ multaFilEs(MATRIZ a, int fila, double escalar);
MATRIZ intfila(MATRIZ a, int fil1, int fil2);
MATRIZ sumafilaPorEs(MATRIZ a,int fil1,int fil2, double c);
MATRIZ copiaMatriz(MATRIZ a);

MATRIZ refina(MATRIZ A);
int sol(MATRIZ A);

int determina(MATRIZ A); 

#endif