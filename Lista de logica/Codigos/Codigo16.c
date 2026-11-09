#include <stdio.h>

int main() {
    float numero, tercaParte;
    
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==   DESCUBRA A TERÇA PARTE DO SEU NÚMERO :D       ==");
    printf("\n=============================================");


    printf("Digite um número real: ");
    scanf("%f", &numero);
     
     tercaParte = numero / 3;
   
    printf(" A terça parte de %.2f é: %.2f\n", numero, tercaParte);
   
    return 0;
}
