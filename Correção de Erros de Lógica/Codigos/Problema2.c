// Descrição: Correção - Falha na Inicialização de um Vetor
// Autor(a): Vitor Gabriel
// Data de entrega: 25/04/2025

#include <stdio.h>

int vetor[5];

int main() {
    vetor[4] = 10;  // Erro: acesso fora do limite do vetor
    printf("%d\n", vetor[4]);
    return 0;
}