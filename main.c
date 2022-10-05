#include "tad_Palavra.c"

int main() {
    Palavra item;

    char *palavra = "escola";

    palavraVazia(&item);
    preenchePalavra(&item, palavra);
    print(&item); 

    return 0;
}