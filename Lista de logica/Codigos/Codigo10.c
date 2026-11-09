#include <stdio.h>

int main() {
    float peso, pesoEngordar, pesoEmagrecer; 
   
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n== COMO SEU PESO PODE MUDAR? VEJA AGORA:D          ==");
    printf("\n=============================================");
   
   
   
    printf("digite o seu peso (em kg): ");
    scanf("%f", &peso);
    
    pesoEngordar = peso + (peso * 0.15);
    pesoEmagrecer = peso - (peso * 0.20); 
    
    printf(" Se você engordar 15%, seu novo peso será: %.2f kg\n", pesoEngordar);
    printf(" Se você emagrecer 20%, seu novo peso será: %.2f kg\n", pesoEmagrecer);
    return 0;
}
