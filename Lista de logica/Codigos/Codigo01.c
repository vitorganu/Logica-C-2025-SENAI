#include <stdio.h>

int main() {
   
    int n1, n2, multiplicacao;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==         SUA MULTIPLICAÇÃO AQUI :D       ==");
    printf("\n=============================================");
    
   printf("\nDigite o Primeiro Numero: ");
    scanf("%d", &n1);

    printf("\nDigite o Primeiro Numero: ");
    scanf("%d", &n2);
    
    multiplicacao = n1 * n2;
    printf("A Multiplicação desses Numeros são:%d\n", multiplicacao);
    
    return 0;
}
