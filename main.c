// #include "headers/tad_Palavra.h"
#include "tad_ListaPalavra.h"

int main() {
    // Palavra item;
    // char palavra[20];
    // strcpy(palavra, "escola");
    // // char *palavra = "escola";

    // palavraVazia(&item);
    // preenchePalavra(&item, palavra);
    // print(&item); 

    TipoListaPalavra LPalavra;
    int i;

    char *p = "palavra";
    
    ListaVazia(&LPalavra);
    for(i=0; i<5; i++) {
        InsereLista(&LPalavra, p);
    }

    ImprimeLista(&LPalavra);

    return 0;
}