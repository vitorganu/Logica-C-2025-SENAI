// Descrição: Correção - Erro em Loop de Repetição
// Autor(a): Vitor Gabriel
// Data de entrega: 25/04/2025

#include <stdio.h>
int i;

int main() {
    for (i = 0; i < 10; i++) {  // Deve ser i < 10
        printf("\n%d ", i);
    }
    return 0;
}