// Descrição: Correção -   Erro em Condicional para Validar Entrada de Dados
// Autor(a): Vitor Gabriel
// Data de entrega: 27/04/2025

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 18) {
        printf("Você é maior de idade.\n");
    } else if (idade == 18) {
        printf("Você tem exatamente 18 anos.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;
}