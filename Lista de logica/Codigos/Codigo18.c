
#include <stdio.h>
#include <math.h>

int main() {
    float numero, quadrado, raiz;
    
     printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n== SEU NÚMERO,QUADRADO E RAIZ, DESCUBRA AQUI :D       ==");
    printf("\n=============================================");


    printf("Digite um número: ");
    scanf("%f", &numero);
    
    quadrado = numero * numero;
    raiz = sqrt(numero); 
    
    printf("Numero: %.2f\n", numero);
    printf("Quadrado: %.2f\n", quadrado);
    printf("Raiz quadrada: %.2f\n", raiz);
    
    return 0;
}