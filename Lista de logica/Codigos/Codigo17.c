#include <stdio.h>
#include <math.h>

int main() {
    
   float n1, n2,cal;
    
    printf("=============================================");
    printf("\n==     SEJA BEM-VINDO AO NOSSO PROGRAMA!   ==");
    printf("\n==          CALCULADORA DE LOG :D          ==");
    printf("\n=============================================");

    
    //entrada de dados
    printf("\nInforme um Numero:");
    scanf("%f", &n1);
    
    printf("\nInforme uma Base:");
    scanf("%f", &n2);
    
    cal = log(n1) / log(n2);
    
    printf("\nA Log desse Numero é: %.2f\n", cal); 
    //%.2f\n para decidir quantas casas tem depois da ,
    
    return 0;
}
