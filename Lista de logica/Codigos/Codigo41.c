#include <stdio.h>

int main() {
    
    int i, soma;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==     SOMA E IMPRESSÃO DE 1 ATE 100 :D    ==");
    printf("\n=============================================\n");

    for(i = 1; i <= 100; i++) {
            printf("%d\n", i);
            soma = soma + i;
    }
    
    printf("A soma de 1 ate 100 é: %d", soma);
    
    return 0;
}
