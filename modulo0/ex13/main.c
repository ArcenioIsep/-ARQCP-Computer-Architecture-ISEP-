#include <stdio.h>
#include "count_char.h"

int main() {
    char texto[] = "banana";
    int codigo = 97;
    int resultado = count_char(texto, codigo);

    printf("O caractere '%c' (ASCII %d) aparece %d vezes em \"%s\".\n",
           get_ascii_char(codigo), codigo, resultado, texto);
    return 0;
}
