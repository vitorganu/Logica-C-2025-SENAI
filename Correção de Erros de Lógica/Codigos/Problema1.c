// Descrição: Correção - Erro de Condição em Verificação de Paridade
// Autor(a): Vitor Gabriel
// Data de entrega: 25/04/2025

#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 1) {
        printf("O numero %d e impar.\n", numero); //em vez de ser par virou impar
    } else {
        printf("O numero %d e par.\n", numero); // em vez de impar virou par
    } 

    return 0;
}