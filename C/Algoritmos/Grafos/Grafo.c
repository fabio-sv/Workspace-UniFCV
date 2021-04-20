#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Grafo.h"


struct Grafo 
{
	int eh_ponderado;
	int nro_vert;
	int Gmax;
	int** arestas;
	float** pesos;
	int* grau;
};