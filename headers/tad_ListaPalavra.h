#include "tad_Palavra.h"

typedef struct Celula{
    char palavra[20];
    struct Celula *prox;
} Celula;

typedef struct {
    Celula *primeiro;
    Celula *ultimo;
    // int tam;
} ListaPalavra;


void InicarListaPalavra(ListaPalavra *listaPalavra);
void inserirNaListaPalavra(ListaPalavra *listaPalavra, char *palavra);
