// Descrição: Correção -  Falha no Cálculo de Média com Vetor
// Autor(a): Vitor Gabriel
// Data de entrega: 27/04/2025

#include <stdio.h>

int main() {
    int notas[] = {7, 8, 9, 10};
    int soma = 0, i;
    int n = 4;  // Correto: vetor tem 4 elementos

    for (i = 0; i < n; i++) {
        soma += notas[i];
    }

    printf("A media das notas e: %d\n", soma / n);
    return 0;
}