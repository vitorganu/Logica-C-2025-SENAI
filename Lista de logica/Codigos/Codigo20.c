#include <stdio.h>
#include <math.h>

int main() {
    
    float area, perimetro, raio;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==           PERIMETRO E AREA AQUI :D      ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nDigite o Numero: ");
    scanf("%f", &raio);

    perimetro = M_PI * (2*raio);
    area = M_PI * (raio*raio);

    printf("O Perimetro é: %.2f\n", perimetro);
    printf("O Area é: %.2f\n", area);
    
    return 0;
}
