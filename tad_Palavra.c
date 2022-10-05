#include "tad_Palavra.h"

int palavraVazia(Palavra *item) {
    if(strcmp(item->caracter, "") == 0 ){
        return 0;
    }
}

void preenchePalavra(Palavra *item, char *valor) {
    strcpy(item->caracter, valor);
}

char *getPalavra(Palavra *item) {
    return item->caracter;
}

void print(Palavra *item) {
    printf("%s\n", getPalavra(item));
}