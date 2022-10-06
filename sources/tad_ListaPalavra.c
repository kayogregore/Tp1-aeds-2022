#include "../headers/tad_ListaPalavra.h"

void IniciarListaPalavra(ListaPalavra *ListaPalavra) {
    ListaPalavra->primeiro = NULL;
}

void inserirNaListaPalavra(ListaPalavra *listaPalavra, char *palavra) {
    Celula *novoItem = (Celula*) malloc(sizeof(Celula));
    // dando valor para o novo item
    strcpy(novoItem->palavra, palavra); 
    novoItem->prox = listaPalavra->ultimo;
    listaPalavra->primeiro = novoItem;
}