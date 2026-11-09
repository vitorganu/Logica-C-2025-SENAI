#include <stdio.h>

int main() {
    int numero;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==     TESTE DE DIVISÃO n10, n5 e n2 :D      ==");
    printf("\n=============================================");


    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero % 10 == 0  && numero % 5 == 0  && numero % 2 == 0) {
         printf("O número é divisível por 10, por 5 e por 2.");
    } else { 
        printf("O número NÃO é divisível por nenhum número.");
    }

    return 0;
}
