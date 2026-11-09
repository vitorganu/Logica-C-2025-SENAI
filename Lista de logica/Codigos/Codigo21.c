#include <stdio.h>

int main() {
    float numero, metade;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           QUAL A METADE? > 20 :D      ==");
    printf("\n=============================================");


    printf("Digite um número: ");
    scanf("%f", &numero);
    
    if (numero > 20) {
        metade = numero / 2; 
        printf("O número é maior que 20. A metade dele é: %.2f\n", metade);
    }

    return 0;
}
