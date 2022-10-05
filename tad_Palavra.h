#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct palavra {
    char caracter[20];
} Palavra;

int palavraVazia(Palavra *item);
void preenchePalavra(Palavra *item, char *valor);
char *getPalavra(Palavra *item);
void print(Palavra *item);