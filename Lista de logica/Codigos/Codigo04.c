#include <stdio.h>

int main() {
   
    int n1, n2, n3, media;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==            SUA MÉDIA AQUI :D            ==");
    printf("\n=============================================");
   
    printf("\nDigite o Primeiro Numero: ");
    scanf("%d", &n1);

    printf("\nDigite o Segundo Numero: ");
    scanf("%d", &n2);
    
   printf("\nDigite o Terceiro Numero: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3 ;
    printf("A Media desses Numeros são:%d\n", media);
    
    return 0;
}
