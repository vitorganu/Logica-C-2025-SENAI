#include <stdio.h>

int main() {
   
    int n1, n2, divisao;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           SUA DIVISÃO AQUI :D           ==");
    printf("\n=============================================");
    
    printf("\nDigite o Primeiro Numero: ");
    scanf("%d", &n1);

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &n2);
    
    divisao = n1 / n2;
    printf("A Divisão desses Numeros são:%d\n", divisao);
    
    return 0;
}
