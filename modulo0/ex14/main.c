#include <stdio.h>
#include "count_value.h"
// Função principal de teste
int main() {
    int numeros[] = {3, 5, 3, 2, 3, 4, 5};
    int tamanho = 7;
    int valor_procurado = 3;

    int resultado = count_value(numeros, tamanho, valor_procurado);

    printf("O valor %d aparece %d vezes no vetor.\n", valor_procurado, resultado);

    return 0;
}
