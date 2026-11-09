#include <stdio.h>

int main() {
    
    int num1, num2, num3, num4, num5;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==               QUADRADAMENTE :D          ==");
    printf("\n=============================================");

    printf("\nDigite um Numero:");
    scanf("%d", &num1);

    printf("\nDigite um Numero:");
    scanf("%d", &num2);
    
    printf("\nDigite um Numero:");
    scanf("%d", &num3);
    
    printf("\nDigite um Numero:");
    scanf("%d", &num4);
    
    printf("\nDigite um Numero:");
    scanf("%d", &num5);
    
    printf("\nO Quadrado do Primeiro numero é: %d", num1 * num1);
    printf("\nO Quadrado do Segundo numero é: %d", num2 * num2);
    printf("\nO Quadrado do Terceiro numero é: %d", num3 * num3);
    printf("\nO Quadrado do Quarto numero é: %d", num4 * num4);
    printf("\nO Quadrado do Quinto numero é: %d", num5 * num5);
    
    return 0;
}
