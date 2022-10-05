#include "tad_Palavra.h"

int main() {
    Palavra item;

    char palavra[20];
    strcpy(palavra, "escola");
    // char *palavra = "escola";

    palavraVazia(&item);
    preenchePalavra(&item, palavra);
    print(&item); 

    return 0;
}