
#include <stdio.h>

int main() {
   float numero;
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n== DESCUBRA SE SEU NÚMERO POSITIVO, NEGATIVO OU NULO AGORA! :D      ==");
    printf("\n=============================================");

    printf("Digite um número: ");
    scanf("%f", &numero);
    
    if (numero > 0) {
        printf("O número é postivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é nulo (zero).\n");
    
    }

    return 0;
}
