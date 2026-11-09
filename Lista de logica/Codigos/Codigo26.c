#include <stdio.h>

int main() {
    int numero;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           TESTE DE DIVISÃO n3 e n7 :D      ==");
    printf("\n=============================================");


    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero % 3 == 0  && numero % 7 == 0) {
         printf("O número é divisível por 3 e por 7.");
    } else { 
        printf("O número NÃO é divisível por e por 7.");
    }

    return 0;
}
