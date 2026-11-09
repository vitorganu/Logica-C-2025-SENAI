#include <stdio.h>
int main() {
  int numero1, numero2, numero3;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           QUAL MAIOR NÚMERO? :D      ==");
    printf("\n=============================================");

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    
    printf("Digite o segundo número; ");
    scanf("%d", &numero2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &numero3);
    
    if (numero1 > numero2 && numero1 > numero3) {
        printf("O maior número é: %d\n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("O maior número é: %d\n", numero2);
    } else {
        printf("O maior número é: %d\n", numero3);
    }
   
    return 0;
}
