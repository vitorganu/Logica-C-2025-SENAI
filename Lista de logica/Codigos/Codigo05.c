#include <stdio.h>

int main() {
   
    int n1, media;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==     BORA CALCULAR SEU AUMENTO :D   ==");
    printf("\n=============================================");
   
    printf("\nDigite o Salário: ");
    scanf("%d", &n1);
    
    media = n1 * 1.25;
    
    printf("O Salario Novo é:%d\n", media);
    
    return 0;
}
