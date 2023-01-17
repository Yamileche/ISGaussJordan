# Programa en C que resuelve sistemas de ecuaciones lineales por el método de Gauss Jordan

Para la obteción del ejecutable basta con ejecutar en la terminal *make*, esto creará el ejecutable *main*. Hay dos formas de correr el programa, ejecutandolo con *./main* e ingresar manualmente los valores o ejecutar *./main < sis.txt* donde *sis.txt* es un archivo de texto con coeficientes de el sistema de ecuaciones, por ejemplo, el siguiente sistema

$7*x_1+9*x_2+6*x_3+8*x_4+7*x_5=5$
$6*x_1-9*x_2+8*x_3+7*x_4+4*x_5=5$
$7*x_1+5*x_2+2*x_3+3*x_4+7*x_5=8$
$-1*x_1+5*x_2+2*x_3+3*x_4+5*x_5=8$
$-1*x_1+5*x_2+2*x_3+2*x_4+5*x_5=8$

se tendía que ingresar en el archivo como

5
7  	   9     6     8     7    5
6      -9     8     7     4    5
7      5     2     3     7    8
-1      5     2     3     5    8
-1      5     2     2     5    8

done el primer número indica el número de variables y el resto de números son los coeficientes de cada ecuación.

