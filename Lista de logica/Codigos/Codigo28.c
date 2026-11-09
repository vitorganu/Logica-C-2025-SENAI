#include <stdio.h>

int main() {
    int numero;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           NÚMERO COMPREENDIDO :D      ==");
    printf("\n=============================================");


    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero >= 20  && numero <= 90) {
         printf("O número está compreendido entre 20 e 90.");
    } else { 
        printf("O número NÃO é compreendido entre 20 e 90.");
    }

    return 0;
}
