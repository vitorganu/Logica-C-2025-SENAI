// Descrição: Correção - Falta de Validação de Entrada
// Autor(a): Vitor Gabriel
// Data de entrega: 25/04/2025

#include <stdio.h>

int idade;

int main() {
    printf("Digite sua idade: ");
    scanf("%d", &idade); 

    if (idade < 0 || idade > 100) {
        printf("Idade invalida! Tente novamente com um valor verdadeiro.\n");
        return 1;
    }

    printf("Sua idade e: %d\n", idade);
    return 0;
}