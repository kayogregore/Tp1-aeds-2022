#include "tad_ListaPalavra.h"

void ListaVazia(TipoListaPalavra *LPalavra) {
    LPalavra->primeiro = (ponteiro) malloc(sizeof(celula));
    LPalavra->ultimo = LPalavra->primeiro;
    LPalavra->primeiro->proximo = NULL;
}

int Vazia(TipoListaPalavra LPalavra) { 
    return (LPalavra.primeiro == LPalavra.ultimo);
}

void InsereLista(TipoListaPalavra *LPalavra, char *conteudo) {
    LPalavra->ultimo->proximo = (ponteiro) malloc(sizeof(celula));
    LPalavra->ultimo = LPalavra->ultimo->proximo;
    strcpy(LPalavra->ultimo->palavra, conteudo);
    LPalavra->ultimo->proximo = NULL;
}

void ImprimeLista(TipoListaPalavra *LPalavra) {
    ponteiro aux;
    aux = LPalavra->primeiro->proximo;

    while(aux != NULL) {
        printf("%s\n", aux->palavra);
        aux = aux->proximo;
    }
}
