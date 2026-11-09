#include <stdio.h>

int main() {
   
    int area, altura, base;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==            SUA FÓRMULA AQUI :D          ==");
    printf("\n=============================================");
   
    printf("\nDigite a Base: ");
    scanf("%d", &base);
    
    printf("\nDigite a Altura: ");
    scanf("%d", &altura);
    
    area = (base * altura) / 2;
    
    printf("A area desse Triangulo:%d\n", area);
    
    return 0;
}
