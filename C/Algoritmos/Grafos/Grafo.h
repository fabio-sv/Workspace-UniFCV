typedef struct grafo Grafo;
Grafo* cria_Grafo(int nro_vert, int Gmax, int eh_ponderado);
void libera_grafo(Grafo* gr);
int insereAresta(Grafo* gr, int orig, int dest, int eh_digrafo, float peso);
int removeAresrta(Grafo* gr, int orig, int dest, int eh_digrafo);