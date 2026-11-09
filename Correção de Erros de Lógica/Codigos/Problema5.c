// Descrição: Correção - Erro de Lógica em Busca Linear
// Autor(a): Vitor Gabriel
// Data de entrega: 25/04/2025

#include <stdio.h>

    int vetor[] = {1, 2, 3, 4, 5};
    int n = 5, chave = 4;

int main() {
    for (int i = 0; i < n; i++) {
        if (vetor[i] == chave) {  
            printf("Chave encontrada!\n");
        }
    }
    return 0;
}
