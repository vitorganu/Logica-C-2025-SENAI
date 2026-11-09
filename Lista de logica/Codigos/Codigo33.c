#include <stdio.h>
#include <math.h>

int main() {
   int a, b, c;
   float delta, x1, x2;
   
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==        EQUAÇÃO 2º GRAU, MONTE A SUA :D      ==");
    printf("\n=============================================");

   printf("Digite o valor de a: ");
   scanf("%d", &a);
   printf("Digite o valor de b: ");
   scanf("%d", &b);
   printf("Digite o valor de c: ");
   scanf("%d", &c);
   
   if (a == 0) {
       printf("Não é equação do segundo grau.\n");
   } else { 
       delta = b * b - 4 * a * c;
       
       if (delta < 0) { 
           printf("Não há raízes reais.\n");
       } else {
       x1 = (-b + sqrt(delta)) / (2 * a);
       x2 = (-b - sqrt(delta)) / (2 * a);
       printf("As raízes da equação são: %.2f e %.2f\n", x1, x2);
   }
}
  
   return 0;
}
