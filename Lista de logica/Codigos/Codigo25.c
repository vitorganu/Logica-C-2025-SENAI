#include <stdio.h>

int main() {
   float numero1, numero2, soma, resultado;
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==  VALOR SOMADO MAIOR QUE 20? :I           ==");
    printf("\n=============================================");

   printf("Digite o primeiro número: ");
   scanf("%f", &numero1);
   
   printf("Digite o segundo número: ");
   scanf("%f", &numero2);
   
   soma = numero1 + numero2;
   if (soma > 20) {
       resultado = soma + 8;
   } else {
       resultado = soma - 5;
   }
   printf("Resultado final: %.2f\n", resultado);

    return 0;
}
