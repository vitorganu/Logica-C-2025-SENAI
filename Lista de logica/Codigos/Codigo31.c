#include <stdio.h>

int main() {
   int a, b, c;
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n== TRÊS NÚMEROS EM ORDEM DECRESCENTE, FALA AI :D      ==");
    printf("\n=============================================");

   printf("Digite o primeiro número: ");
   scanf("%d", &a);
   
   printf("Digite o segundo número: ");
   scanf("%d", &b);
   
   printf("Digite o terceiro número: ");
   scanf("%d", &c);
   if (a > b && b > c) {
       printf("Ordem decrescente: %d, %d, %d\n", a, b, c);
   } else if (a > c && c > b) {
       printf("Ordem decrescente: %d, %d, %d\n", a, c, b);
   } else if (b > a && a > c) {
        printf("Ordem decrescente: %d, %d, %d\n", b, a, c);
   } else if (b > c && c > a) {
       printf("Ordem decrescente: %d, %d, %d\n", b, c, a);
   } else if (c > a && a > b) {
        printf("Ordem decrescente: %d, %d, %d\n", c, a, b);
   } else {
        printf("Ordem decrescente: %d, %d, %d\n", c, b, a);
   }
   return 0;

}
