#include <stdio.h>

int main() {
   
    int n1, n2, n3, n4, soma;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==              SUA SOMA AQUI :D           ==");
    printf("\n=============================================");
   
    printf("\nDigite o Primeiro Numero: ");
    scanf("%d", &n1);

    printf("\nDigite o Segundo Numero: ");
    scanf("%d", &n2);
    
   printf("\nDigite o Terceiro Numero: ");
    scanf("%d", &n3);

    printf("\nDigite o Quarto Numero: ");
    scanf("%d", &n4);
    
    soma = n1 + n2 + n3 + n4;
    printf("A Soma desses Numeros são:%d\n", soma);
    
    return 0;
}
